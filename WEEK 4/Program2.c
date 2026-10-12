#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    int a[n][n], dp[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &a[i][j]) != 1) return 1;
        }
    }
    dp[0][0] = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) continue;

            int from_top = (i > 0) ? dp[i - 1][j] : -1e9;
            int from_left = (j > 0) ? dp[i][j - 1] : -1e9;
            
            dp[i][j] = ((from_top > from_left) ? from_top : from_left) + a[i][j];
        }
    }
    printf("%d\n", dp[n - 1][n - 1]);
    return 0;
}

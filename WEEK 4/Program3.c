#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    int a[n], dp[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) return 1;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            dp[i] = (a[j] <= a[i] && dp[j] + 1 > dp[i]) ? dp[j] + 1 : dp[i];
        }
        ans = (dp[i] > ans) ? dp[i] : ans;
    }
    printf("%d\n", ans);
    return 0;
}

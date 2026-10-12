#include <stdio.h>
int main() {
    int n, k;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    int a[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) return 1;
    }
    if (scanf("%d", &k) != 1) return 1;
    int i = 0, j = 1;
    while (i < n && j < n) {
        if (i == j) {
            j++;
        } else if (a[j] - a[i] == k) {
            printf("1\n");
            return 0;
        } else {
            j += (a[j] - a[i] < k);
            i += (a[j] - a[i] > k);
        }
    }
    printf("0\n");
    return 0;
}

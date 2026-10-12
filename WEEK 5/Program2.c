#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    int a[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) return 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("%d\n", a[i]);
                return 0;
            }
        }
    }
    return 0;
}

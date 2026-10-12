#include <stdio.h>
int main() {
    int T;
    if (scanf("%d", &T) != 1 || T < 0) return 1;
    while (T--) {
        int n1;
        if (scanf("%d", &n1) != 1 || n1 < 0) return 1;
        int a[n1];
        for (int i = 0; i < n1; i++) {
            if (scanf("%d", &a[i]) != 1) return 1;
        }
        int n2;
        if (scanf("%d", &n2) != 1 || n2 < 0) return 1;
        int b[n2];
        for (int i = 0; i < n2; i++) {
            if (scanf("%d", &b[i]) != 1) return 1;
        }
        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                i++;
                j++;
            } else {
                i += (a[i] < b[j]);
                j += (a[i] > b[j]);
            }
        }
        printf("\n");
    }
    return 0;
}

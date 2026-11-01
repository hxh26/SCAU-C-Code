#include <stdio.h>

int main()
{
    int n, i;
    int a[25];
    int first = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] < 0) {
            if (first == 1) {
                printf("%d", a[i]);
                first = 0;
            } else {
                printf(" %d", a[i]);
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (a[i] == 0) {
            if (first == 1) {
                printf("%d", a[i]);
                first = 0;
            } else {
                printf(" %d", a[i]);
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (a[i] > 0) {
            if (first == 1) {
                printf("%d", a[i]);
                first = 0;
            } else {
                printf(" %d", a[i]);
            }
        }
    }

    printf("\n");
    return 0;
}

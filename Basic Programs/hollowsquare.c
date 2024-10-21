#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            for (j = 0; j < n; j++) {
                printf("1");
            }
            printf("\n");
        } else {
            printf("1");
            for (j = 0; j < n - 2; j++) {
                printf(" ");
            }
            printf("1\n");
        }
    }

    return 0;
}


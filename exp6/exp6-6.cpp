#include <stdio.h>

int main() {
    int L, k, i, x;
    scanf("%d %d", &L, &k);
    for (i = 0; i < L; i++) {
        scanf("%d", &x);
        if (x == k) {
            printf("%d", i+1);
            break;
        }
    }
    if (i == L) {
        printf("Error!");
    }
}
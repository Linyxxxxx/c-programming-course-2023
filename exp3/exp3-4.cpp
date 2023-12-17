#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        while(x < 0) {
            x = 5 * (- x) - 10000;
        }
        printf("%d\n", 5 * x - 10000);
    }
    return 0;
}
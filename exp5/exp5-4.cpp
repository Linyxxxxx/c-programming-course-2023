#include <stdio.h>

int main() {
    int N, x, sum_even=0, sum_odd=0;
    scanf("%d", &N);
    for (int n = 1; n <= N; n++) {
        scanf("%d", &x);
        if (n % 2 == 0) {
            sum_even += x;
        } else {
            sum_odd += x;
        }
    }
    printf("%d\n%d\n", sum_odd, sum_even);
}
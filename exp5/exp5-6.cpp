#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        double x, left = 0.0, right = 1.0;
        int n = 0;
        scanf("%lf", &x);
        left = 1 / (1 - x);
        while(fabs(left - right) >= 1e-6) {
            n++;
            right += (pow(x, n));
        }
        printf("%d\n", n);
    }
}
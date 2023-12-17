// 这题数据长度超过float了，要用double 1.24499999999999

#include <stdio.h>

int main() {
    double x;
    scanf("%lf", &x);
    int tmp = (int)((x + 0.005) * 100);
    x = tmp / 100.0;
    printf("%.6lf", x);
}

// #include <stdio.h>
// #include <math.h>

// int main() {
//     double x;
//     scanf("%lf", &x);
//     printf("%.6lf", round(x*100) / 100.0);
// }
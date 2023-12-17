#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    gets(str);

    int N = 0, Q, M, D;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            N = N * 10 + str[i] - '0';
        }
    }
    Q = (N * 3) % 1131 + 101;
    M = Q / 100;
    D = Q % 38;
    printf("%d %d %d %d\n", N, Q, M, D);

    // 2013
    int day_of_month[] = {31, 28, 31, 30, 31, 30,
                            31, 31, 30, 31, 30, 31};
    int is_valid = 1;
    if (M > 12)
        is_valid = 0;
    if (D > day_of_month[M - 1] || D < 1)
        is_valid = 0;

    if (is_valid)
        printf("%d.%d\n", M, D);
    else
        printf("input error!\n");
}
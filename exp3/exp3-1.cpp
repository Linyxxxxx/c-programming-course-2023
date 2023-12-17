#include <stdio.h>

int main() {
    double a, b, ans;
    char symbol;

    scanf("%lf %c %lf = ", &a, &symbol, &b);
    if(symbol == '/' && (b < 1e-12) && (b > -1e-12)) {
        printf("Error!");
    } else {
        if(symbol == '+') {
            ans = a + b;
        } else if(symbol == '*') {
            ans = a * b;
        } else if(symbol == '-') {
            ans = a - b;
        } else if(symbol == '/') {
            ans = a / b;
        }
        printf("%.4lf", ans);
    }
}
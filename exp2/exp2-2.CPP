#include <stdio.h>

int main() {
    int x, fx, gx;
    scanf("%d", &x);
    gx = x * x - 550;
    if(x < gx) {
        fx = gx + x + 4;
    }
    else {
        fx = gx - x;
    }
    printf("%d", fx);
}
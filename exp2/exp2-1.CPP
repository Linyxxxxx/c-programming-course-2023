#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if(x > 100) {
        printf("Error!");
    } else if(x >= 95) {
        printf("level4");
    } else if(x >= 85) {
        printf("level3");
    } else if(x >= 75) {
        printf("level2");
    } else if(x >= 0) {
        printf("level1");
    } else {
        printf("Error!");
    }
}
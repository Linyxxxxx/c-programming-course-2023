// 题干里给的样例有问题

#include <stdio.h>

int main() {
    char c;
    do {
        scanf("%c", &c);
        if ('a' <= c && c <= 'z') {
            printf("%c", ('z'- (c - 'a')));
        } else if ('A' <= c && c <= 'Z') {
            printf("%c", ('Z'- (c - 'A')));
        } else {
            printf("%c", c);

        }
    } while (c != '\n');
}

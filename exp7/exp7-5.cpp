#include <stdio.h>
#include <string.h>

int main() {
    int n, cnt;
    scanf("%d", &n);
    char number[12];
    for (int i = 0; i < n; i++) {
        scanf("%s", number);
        int len = strlen(number), flag = 1;
        for (int j = 0; j < len/2; j++) {
            if (number[j] != number[len - j - 1]) {
                flag = 0;
            }
        }
        if (flag == 1) {
            cnt++;
        }
    }
    printf("%d", cnt);
}
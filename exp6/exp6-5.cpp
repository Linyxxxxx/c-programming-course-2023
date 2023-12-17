#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        char num[51];
        int ans = 0, base = 1;
        scanf("%s", num);
        for (int i = strlen(num) - 1; i >= 0; i--) {
            ans += ((num[i] - '0') * base);
            base *= 2;
        }
        printf("%d\n", ans);
    }
}
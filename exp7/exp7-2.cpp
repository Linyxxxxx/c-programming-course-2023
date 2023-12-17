#include <stdio.h>
#include <string.h>

int main() {
    char str[100001];
    gets(str);

    int ans = 0, flag = 0;
    char c;
    for (int i = 0; i < strlen(str); i++) {
        c = str[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (flag == 0) {
                ans++;
                flag = 1;
            }
        } else {
            flag = 0;
        }
    }
    printf("%d", ans);
}
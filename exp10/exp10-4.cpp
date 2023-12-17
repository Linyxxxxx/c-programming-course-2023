#include <stdio.h>
#include <string.h>

int main() {
    char t[1001], s[1001];
    gets(t);
    gets(s);

    int len_t = strlen(t), len_s = strlen(s);
    int flag = 0;

    for (int i = 0, j = 0; i < len_t && j < len_s; i++) {
        if (t[i] == s[j]) {
            j++;
            if (j == len_s) {
                flag = 1;
                break;
            }
        }
    }

    printf("%d\n", flag);
}
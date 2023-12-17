#include <stdio.h>
#include <string.h>

void delete_substr(char *str, char *substr) {
    int len_sub = strlen(substr);
    char *p = strstr(str, substr);
    while (p != NULL) {
        int start_idx = p - str;
        for (int i = start_idx; i <= strlen(str) - len_sub; i++) {
            str[i] = str[i + len_sub];
        }
        p = strstr(str, substr);
    }
}

int main() {
    char t[1001], s[1001];
    gets(t);
    gets(s);

    delete_substr(t, s);
    puts(t);
}
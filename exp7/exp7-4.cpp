#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char words[1001][11], cur_word[11];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s", cur_word);

        int flag = 0;
        for (int j = 0; j < cnt; j++) {
            if (strcmp(cur_word, words[j]) == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            strcpy(words[cnt], cur_word);
            cnt++;
        }
    }
    printf("%d", cnt);
}
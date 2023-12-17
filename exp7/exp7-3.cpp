#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char t[100001], s[100001];
    for (int i = 0; i < n; i++) {
        scanf("%s", t);
        scanf("%s", s);
        int cnt = 0;
        int t_len = strlen(t), s_len = strlen(s);

        for (int j = 0; j < t_len - s_len + 1; j++) {
            int is_equal = 1;
            for (int k = 0; k < s_len; k++) {
                if (t[j+k] != s[k]) {
                    is_equal = 0;
                } 
            }
            if (is_equal) {
                j += s_len;
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }
}
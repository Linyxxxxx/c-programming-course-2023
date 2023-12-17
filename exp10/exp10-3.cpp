#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    char text[21], patterns[21][11];
    scanf("%s", text);
    for (int i = 0; i < N; i++)
        scanf("%s", patterns[i]);

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (strstr(text, patterns[i]) != NULL)
            count++;
    }
    
    printf("%d", count);
}
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int numbers[1001];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int flag = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (numbers[i] + numbers[j] == k) {
                flag = 1;
            }
        }
    }
    if (flag == 1) {
        printf("Yes");
    } else {
        printf("No");
    }
}
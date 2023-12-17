#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int a[1001];

    // input
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max_size = 0, cur_size;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] < a[j]) {
                cur_size = abs(i - j) * a[i];
            } else {
                cur_size = abs(i - j) * a[j];
            }
            if (cur_size > max_size) {
                max_size = cur_size;
            }
        }
    }
    printf("%d\n", max_size);
}
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    // input all data
    int a[10001], b[10001];
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // merge
    int c[20001];
    int cur_idx_a = 0, cur_idx_b = 0, cur_idx_c = 0;
    while (cur_idx_a < m && cur_idx_b < n) {
        if (a[cur_idx_a] > b[cur_idx_b]) {
            c[cur_idx_c++] = a[cur_idx_a++];
        } else {
            c[cur_idx_c++] = b[cur_idx_b++];
        }
    }
    while (cur_idx_a < m) {
        c[cur_idx_c++] = a[cur_idx_a++];
    }
    while (cur_idx_b < n) {
        c[cur_idx_c++] = b[cur_idx_b++];
    }

    // output
    for (int i = 0; i < m + n; i++) {
        printf("%d ", c[i]);
    }
}
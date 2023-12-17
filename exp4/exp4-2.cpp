#include <stdio.h>

int main() {
    int m, n, n_ans;
    scanf("%d %d", &m, &n);

    n_ans = 0;
    for(int i=m; i<=n; i++) {
        if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {  
            printf("%d ", i);
            n_ans++;
            if(n_ans >= 5) {
                printf("\n");
                n_ans = 0;
            }
        }
    }
}
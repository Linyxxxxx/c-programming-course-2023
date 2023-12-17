#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int goods[1001][5];
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", 
            &goods[i][0], &goods[i][1], 
            &goods[i][2], &goods[i][3]
        );
    }
    
    int k, s;
    scanf("%d %d", &k, &s);
    for (int i = 0; i < n; i++) {
        if (goods[i][k] >= s) {
            printf("%d %d %d %d\n", 
                goods[i][0], goods[i][1], 
                goods[i][2], goods[i][3]
            );
        }
    }
}
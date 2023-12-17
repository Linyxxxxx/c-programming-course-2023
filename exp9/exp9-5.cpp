// 固定头部开始
#include <stdio.h>
// 固定头部结束

// 你的代码开始
int a[15], n, count;

void dfs(int state, int deep) {
    int i;
    a[deep] = state;
    if (deep == n) {
        for (i = 1; i <= n; i++)
            printf("%d", a[i]);
        printf("\n");
        count++;
        return;
    }
    if (state == 0) {
        for (i = 0; i <= 1; i++)
            dfs(i, deep + 1);
    } else
        dfs(0, deep + 1);
}

int main()
{
    int i, j;
    scanf("%d", &n);
    for (i = 0; i <= 1; i++)
        dfs(i, 1);
    printf("%d", count);
}
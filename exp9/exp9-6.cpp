#include <stdio.h>
//给1到N，N个数，要你从中选取M个出来，请输出每一种的选取情况（根据序列字典序输出，即两个序列比大小，第一位小的小，若相等第二位小的小，若相等第三位小的小……）
void zhs(int cur, int pre, int n, int m, int a[]) {
    if (cur == m) {
        for (int i = 0; i < m; i++)
            printf("%d ", a[i]);
        printf("\n");
        return;
    }
    for (int i = pre; i <= n; i++) {
        a[cur] = i;
        zhs(cur + 1, i + 1, n, m, a);
    }
}
//固定代码开始
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[11];
    zhs(0, 1, n, m, a);
    return 0;
}
//固定代码结束
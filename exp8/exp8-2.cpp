//固定头部开始
#include <stdio.h>
void MingPick(int left, int k, int turn);
void QiangPick(int left, int k, int turn);
//固定头部结束
//你的代码开始
void MingPick(int left, int k, int turn)
{
    if (left <= 0)
        printf("QIANG!\n%d", turn - 1);
    else
        QiangPick(left - k * turn, k, turn + 1);
}
void QiangPick(int left, int k, int turn)
{
    if (left <= 0)
        printf("MING!\n%d", turn - 1);
    else
        MingPick(left - k * turn, k, turn + 1);
}
//你的代码结束
//固定尾部开始
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    MingPick(n, k, 1);
    return 0;
}
//固定尾部结束
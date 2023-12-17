//固定头部开始
#include <stdio.h>
//固定头部结束
//你的代码开始
void inverse(int n)
{
    if (n < 0) {
        printf("-");
        n = -n;
    }
    do {
        printf("%d", (n % 10));
        n /= 10;
    } while(n != 0);
    printf("\n");
}
//你的代码结束
//固定尾部开始
int main()
{
    int T, n;
    scanf("%d", &T);
    while (T--)
    {
       scanf("%d", &n);
       inverse(n);
    }
    return 0;
}
//固定尾部结束
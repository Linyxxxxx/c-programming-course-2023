//固定头部开始
#include <stdio.h>
//固定头部结束
//你的代码开始
#include <math.h>
void change(int *a,int *b,int flag) {
    if (flag > 0) {
        *a = abs(*a);
        *b = abs(*b);
    } else if (flag == 0) {

    } else {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
//你的代码结束
//固定尾部开始
int main()
{
    int t,a,b,flag;
    void change(int *a,int *b,int flag);
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d",&a,&b,&flag);
        change(&a,&b,flag);
        printf("%d %d\n",a,b);
    }
    return 0;
}
//固定尾部结束
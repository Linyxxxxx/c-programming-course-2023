//固定头部开始
#include <stdio.h>
//固定头部结束
//你的代码开始
int Ackermann(int m, int n)
{
    if (m == 0 && n > 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return Ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return Ackermann(m - 1, n - 1) + n;
    } else {
        return 0;
    }
}

//你的代码结束
//固定尾部开始
int main() {
    int T;
    scanf("%d", &T);
    int m[T], n[T];
    for(int i=0;i<T;i++) {
        scanf("%d %d", &m[i], &n[i]);
    }
    for(int i=0;i<T;i++) {
        printf("%d\n", Ackermann(m[i],n[i]));
    }
    return 0;
}
//固定尾部结束
//固定头部开始
#include <stdio.h>
#include <string.h>
char ch[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
//固定头部结束
//你的代码开始
int convert(int n, int m, char result[])
{
    int i = 0;
    char temp;
    // 每次除M
    do {
        result[i++] = ch[n % m];
        n /= m;
    } while(n != 0);
    int result_len = strlen(result);
    // 逆序输出
    for (int i = 0; i < result_len / 2; i++) {
        temp = result[i];
        result[i] = result[result_len - i - 1];
        result[result_len - i - 1] = temp;
    }
    return 0;
}
//你的代码结束
//固定尾部开始
int main()
{
    int n, m, T;
    char result[1024];     
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &n, &m);
        memset(result, 0, 1024);
        convert(n, m, result);
        printf("%s\n", result);
    }    
    return 0;
}
//固定尾部结束
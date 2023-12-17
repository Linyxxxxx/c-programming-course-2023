// 这题用桶的思想岂不是更快
//固定头部开始
#include <stdio.h>
//固定头部结束
//你的代码开始
int CalcNum(int A[], int n, int K)
{
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == K) {
            cnt++;
        }
    }
    return cnt;
}
//你的代码结束
//固定尾部开始
int main()
{
  int n, K, i, A[10000];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &A[i]);
  scanf("%d", &K);
  printf("%d\n", CalcNum(A, n, K));
  return 0;
}
//固定尾部结束
// 固定头部开始
#include <stdio.h>
#include <math.h>
// 固定头部结束
// 你的代码开始
// 写一个函数，计算一个整形数组a的中心分割点。假设某个分割点的下标为k，那么s1=a[1]+a[2]+…+a[k]，s2=a[k+1]+a[k+2]+…+a[n]，让s1和s2差距最小的下标k即为数组a的中心分割点，若有多个中心分割点，选择值小的。
int center(int a[], int n) {
  int i, j, k, s1, s2, min, min_k;
  min = 100000000;
  for (i = 1; i <= n; i++) {
    s1 = 0;
    s2 = 0;
    for (j = 1; j <= i; j++)
      s1 += a[j];
    for (k = i + 1; k <= n; k++)
      s2 += a[k];
    if (abs(s1 - s2) < min) {
      min = abs(s1 - s2);
      min_k = i;
    }
  }
  return min_k;
}
// 你的代码结束
// 固定尾部开始
int main()
{
  int i, n, a[10001];
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("%d", center(a, n));
  return 0;
}
// 固定尾部结束
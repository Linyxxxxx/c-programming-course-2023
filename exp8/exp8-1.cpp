//固定头部开始
#include <stdio.h>
#include <math.h>
//固定头部结束
//你的代码开始
int primes(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) continue;
        int is_prime = 1;
        for (int j = 2; j <= sqrt(a[i]); j++) {
            if (a[i] % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            cnt++;
        }
    }
    return cnt;
}
//你的代码结束
//固定尾部开始
int main()
{
  int i,n; 
  int a[10000];
  scanf("%d", &n);
  for(i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("%d", primes(a, n));
  return 0;
}
//固定尾部结束
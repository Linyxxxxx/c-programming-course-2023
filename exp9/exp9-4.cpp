//固定头部开始
#include <stdio.h>
#include <math.h>
//固定头部结束
//你的代码开始
int isPrime(int num) {
    if (num == 1)
        return 1;
    int is_prime = 1;
    for (int j = 2; j <= sqrt(num); j++) {
        if (num % j == 0) {
            return 0;
        }
    }
    return 1;
}
void OddDiv(int n)
{
    int primes[10001] = {0}, prime_cnt = 0, prime_1, prime_2, prime_3;
    for (int i = 2; i < n; i++) {
        if(isPrime(i)) {
            primes[prime_cnt++] = i;
        }
    }
    for (int i = 0; i < prime_cnt; i++) {
        for (int j = 0; j < prime_cnt; j++) {
            for (int k = 0; k < prime_cnt; k++) {
                prime_1 = primes[i];
                prime_2 = primes[j];
                prime_3 = primes[k];
                if (prime_1 + prime_2 + prime_3 == n) {
                    printf("%d=%d+%d+%d", n, prime_1, prime_2, prime_3);
                    return;
                }
            }    
        }
    }
}
void EvenDiv(int n)
{
    int primes[10001] = {0}, prime_cnt = 0, prime_1, prime_2;
    for (int i = 2; i < n; i++) {
        if(isPrime(i)) {
            primes[prime_cnt++] = i;
        }
    }
    for (int i = 0; i < prime_cnt; i++) {
        for (int j = 0; j < prime_cnt; j++) {
            prime_1 = primes[i];
            prime_2 = primes[j];
            if (prime_1 + prime_2 == n) {
                printf("%d=%d+%d", n, prime_1, prime_2);
                return;
            }
        }
    }
}
//你的代码结束
//固定尾部开始
int main()
{
  int n;
  scanf("%d", &n);
  (n % 2 == 0) ? EvenDiv(n) : OddDiv(n);
  return 0;
}
//固定尾部结束
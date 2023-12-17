#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // if a<b -> swap(a, b) to make a>b
    int tmp;
    if(a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    int num_a, num_b, ans=0, base=1;
    do {
        num_a = a % 10;
        a /= 10;
        num_b = b % 10;
        b /= 10;
        
        ans += (base * ((num_a + num_b) % 10));
        base *= 10;
    } while(a != 0);
    
    printf("%d", ans);
}
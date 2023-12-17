// /*
// 欧几里得算法：计算两个正整数的最大公约数 - 想把你写成一首歌的文章 - 知乎
// https://zhuanlan.zhihu.com/p/51411526
// */ 

// #include <stdio.h>

// int main() {
//     int T, n, m;
//     int a, b, c;
//     scanf("%d", &T);
//     for(int t = 0; t < T; t++) {
//         scanf("%d%d", &n, &m);
//         if(m == 0) {
//             printf("Error!\n");
//         } else if(n == 0){
//             printf("0\n");
//         } else {
//             a = m;
//             b = n;
//             c = a % b;
//             while(c != 0) {
//                 a = b;
//                 b = c;
//                 c = a % b;
//             }
//             m /= b;
//             n /= b;
//             if(n == 1) {
//                 printf("%d\n", m);
//             } else {
//                 printf("%d/%d\n", n, m);
//             }     
//         }
//     }
// }

#include <stdio.h>

int main()
{
	int n, m, T;
	scanf("%d", &T);
	for(int t=0; t<T; t++) {
		scanf("%d %d", &n, &m);
		if(m == 0) {
			printf("Error!\n");
		} else if(n == 0) {
            printf("0\n");
		} else {
            int min_num;
			if(n < m) {
                min_num = n;
            } else {
                min_num = m;
            }
            
            for(int i=min_num; i>0; i--) { // 从较小的数开始从大到小遍历尝试每个值，是否是公约数
                if(n % i == 0 && m % i == 0) {
                    n /= i;
                    m /= i;
                    if(n == 1) { // "x/1" -> "x"
                        printf("%d\n", m);
                    } else {
                        printf("%d/%d\n", n, m);
                    }
                    break;
                }
            }
		}
	}
}
//固定头部开始
#include <stdio.h>
//固定头部结束
//你的代码开始
#define PI 3.14159
void GetInfo(double r, double result[])
{
    result[0] = 2 * PI * r;
    result[1] = PI * r * r;
    result[2] = 4 * PI * r * r;
    result[3] = 4 * PI * r * r * r / 3;
}
//你的代码结束
//固定尾部开始
int main() {
  double r, result[4];
  scanf("%lf", &r);
  GetInfo(r, result);
  printf("%.2f\n%.2f\n%.2f\n%.2f", result[0], result[1], result[2], result[3]);
  return 0;
}
//固定尾部结束
//固定头部开始
#include <stdio.h>
//固定头部结束
//你的代码开始
//当传递长度为n的数组a时，函数将在数组a中搜寻最大元素和第二大元素，把它们分别存储在largest和second_largest指向的变量中。
void find_two_largest(int a[],int n,int *largest,int *second_largest) {
    int i;
    *largest = a[0];
    *second_largest = a[1];
    for(i=0;i<n;i++) {
        if(a[i]>*largest) {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if(a[i]>*second_largest) {
            *second_largest = a[i];
        }
    }
}
//你的代码结束
//固定尾部开始
int main()
{
   int i,n,arr[100],largest,second_largest;
   scanf("%d",&n);
   for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
   find_two_largest(arr,n,&largest,&second_largest);
   printf("%d %d",largest,second_largest);
   return 0;
}
//固定尾部结束
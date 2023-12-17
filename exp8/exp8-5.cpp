// https://blog.csdn.net/selina8921/article/details/79763238
#include <stdio.h>
#include <string.h>
// 大整数相加函数
void multiply(char num1[], char num2[], char result[]) {
    int len_1 = strlen(num1), len_2 = strlen(num2);
    int temp[2002] = {0};
    // compute each byte
    for (int i = 0; i < len_1; i++) {
        for (int j = 0; j < len_2; j++) {
            temp[i+j+1] = temp[i+j+1] + (num1[i] - '0') * (num2[j] - '0');
        }
    }
    // add
    for (int i = len_1+len_2-1; i > 0; i--) {
        result[i] = (temp[i] % 10) +'0';
        temp[i-1] = temp[i-1] + temp[i] / 10;
    }
    // post process
    result[len_1+len_2] = '\0'; // string end
    if (temp[0] != 0) {
        result[0] = temp[0] + '0';
    } else {
        for (int i = 1; i < len_1+len_2+1; i++) {
            result[i-1] = result[i];
        }
    }
}
int main() {
    char num1[1001];
    char num2[1001];
    char result[2002];
    scanf("%s", num1);
    scanf("%s", num2);
    if (strcmp(num1, "0") == 0 || strcmp(num2, "0") == 0) {
    printf("0\n");
    return 0;
}
    multiply(num1, num2, result);
    printf("%s\n", result);
    return 0;
}
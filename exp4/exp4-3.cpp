#include <stdio.h>

int main() {
    int T, x, num;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &x);
        do {
            num = x % 10;
            x /= 10;

            switch (num)
            {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            default:
                break;
            }

        } while(x != 0);
        printf("\n");
    }
}
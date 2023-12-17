#include <stdio.h>

int main() {
	int bill, cnt;
	scanf("%d", &bill);
	
	// 100
	cnt = bill / 100;
	printf("100 - %d\n", cnt);
	bill = bill - cnt * 100;
	
	// 50
	cnt = bill / 50;
	printf("50 - %d\n", cnt);
	bill = bill - cnt * 50;
	
	// 20
	cnt = bill / 20;
	printf("20 - %d\n", cnt);
	bill = bill - cnt * 20;
	
	// 10
	cnt = bill / 10;
	printf("10 - %d\n", cnt);
	bill = bill - cnt * 10;
	
	// 5
	cnt = bill / 5;
	printf("5 - %d\n", cnt);
	bill = bill - cnt * 5;
	
	// 2
	cnt = bill / 2;
	printf("2 - %d\n", cnt);
	bill = bill - cnt * 2;
	
	// 1
	cnt = bill / 1;
	printf("1 - %d\n", cnt);
	bill = bill - cnt * 1;
	
	return 0;
}

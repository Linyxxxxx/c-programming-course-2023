#include <stdio.h>

int main() {
    int year, month, day, ans;
    scanf("%d/%d/%d", &year, &month, &day);

    // 在这个月之前的几个月一共多少天
    switch(month) {
		case 1:ans=0;break; case 2:ans=31;break;
		case 3:ans=59;break; case 4:ans=90;break;
		case 5:ans=120;break; case 6:ans=151;break;
		case 7:ans=181;break; case 8:ans=212;break;
		case 9:ans=243;break; case 10:ans=273;break;
		case 11:ans=304;break; case 12:ans=334;break;
		default:break;
	}

    // 这个月的这个月过了几天
    ans += day;

    // 闰年的二月会多一天
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){ 
		if(month > 2) {
            ans++ ;
        }
	}
    printf("%d", ans);
}
#include <stdio.h>

int main() {
    int full_time, hour, minute, second;
    scanf("%d", &full_time);
    hour = full_time / 3600;
    full_time -= hour * 3600;
    minute = full_time / 60;
    full_time -= minute * 60;
    second = full_time;
    printf("%d:%d:%d", hour, minute, second);
    return 0;
}
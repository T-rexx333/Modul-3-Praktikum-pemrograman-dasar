#include<stdio.h>

int main() {
   long int second, remaining_seconds;
    int day, hour, minute;
    scanf("%ld", &second);

    day = second / 86400;
    remaining_seconds = second % 86400;

    hour = remaining_seconds / 3600;
    remaining_seconds = remaining_seconds % 3600;

    minute = remaining_seconds / 60;
    second = remaining_seconds % 60;

    if (day > 0){
        printf("%d hari %02d:%02d:%02d", day, hour, minute, second);
    }
    
    else {
        printf("%02d:%02d:%02d", hour, minute, second);
    }

return 0;
}
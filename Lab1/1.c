#include <stdio.h>

int main()
{
    int computer_time = 1678;
    int day ,hour , minute;
    day = computer_time /(24*60);
    computer_time -= day*24*60;
    hour = computer_time/60;
    computer_time -= hour*60;
    minute = computer_time;


    printf("It is %d days %d hours and %d minutes.",day,hour, minute);

    return 0;
}
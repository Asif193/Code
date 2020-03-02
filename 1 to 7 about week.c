#include<stdio.h>
int main ()
{
    int week;
    printf("Inter week number(1-7):\n");
    scanf("%d", &week);

    switch(week)
    {
        case 1:
            printf("Saturday");
        break;
        case 2:
            printf("Sunday");
        break;
        case 3:
            printf("Monday");
        break;
        case 4:
            printf("Tuesday");
        break;
        case 5:
            printf("Wednesday");
        break;
        case 6:
            printf("Tuesday");
        break;
        case 7:
            printf("Friday");
        break;

        return 0;
    }

    return 0;

}

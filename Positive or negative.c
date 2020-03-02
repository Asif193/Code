#include<stdio.h>
#include<math.h>
int main ()
{
    int A;
    printf("Inter the number A:\n");
    scanf("%d", &A);

    if ( A > 0 )
    {
        printf("%d is positive", A);
    }
    else if ( A < 0 )
    {
        printf("%d is negative", A);
    }
    else if ( A == 0)
    {
        printf("%d is Zero", A);
    }
    return 0;

}

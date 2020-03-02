#include<stdio.h>
int main ()
{
    int i, j, num;
    printf("Inter any number:\n");
    scanf("%d", &num);

    for(i=num; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main ()
{
    int i, num, f=1;

    printf("Enter any factorial number:\n");
    scanf("%d", &num);

    for(i=num; i>=1; i--)
    {
        f=f*i;
    }
    printf("Factorial of %d is= %d", num, f);

    return 0;
}

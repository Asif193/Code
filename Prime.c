#include<stdio.h>
int main ()
{
    int num, i, flag=0;
    printf("Enter a number:\n");

    while(scanf("%d", &num))
    {
        if(num<0)
            break;

        for(i=2; i<=(num/2); i++)
        {

            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
        if(num==1)
        {
            printf("1 is not prime");

        }
        else
        {
            if(flag==0)
                printf("%d is prime", num);
            else
                printf("%d is not prime", num);
        }
    }

}

#include <stdio.h>
int main()
{
    float base, power, i, final, result=1;
    printf("Enter a base number:");
    scanf("%f", &base);
    printf("Enter the power of number:");
    scanf("%f", &power);

    for(i=1; i<=power; i++)
    {
        result= base*result;

    }
        final=(1/result);
    printf("Answer = %.2f:\n", result);
    printf("Negative answer = %.6f:\n", final);

    return 0;
}


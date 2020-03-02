#include<stdio.h>
int main ()
{
    int i, a[10], sum=0;
    printf("Enter the value of array:\n");
    for(i=0; i<10; i++)
    {
       scanf("%d", &a[i]);
       sum=sum+a[i];
    }
    printf("The list of value:\n");

    for(i=0; i<10; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    printf("Sum of all element=%d\n", sum);

    return 0;

}

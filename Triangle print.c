#include<stdio.h>
int main()
{
    int i, space, rows, k=0;
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    for (i=1; i<=rows; ++i,k=0)
    {
        for (space=1; space<=rows-i; ++space)
        {
            printf("  ");
        }
        while (k!=2*i-1)
        {
            printf("1 ");
            ++k;
        }
        printf("\n");
    }
    return 0;
}
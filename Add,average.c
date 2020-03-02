#include<stdio.h>
int main ()
{

int a, b, c, d, e, total, aver;

printf("Inter five number: \n");
scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

total = (a + b + c + d + e);
aver =(total)/5;

printf("total=%d\n", total);
printf("average=%d\n", aver);

return 0;

}

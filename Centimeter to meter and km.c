#include<stdio.h>
#include<math.h>
int main ()
{

float cm, meter, km;
printf("Inter length in centimeter:\n");
scanf("%f", &cm);

meter = cm / 100.0;
km = cm / 100000.0;

printf("Length in meter=%0.2f m\n", meter);
printf("length in kilometer=%0.2f km\n", km);

return 0;

}

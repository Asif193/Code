#include<stdio.h>
#include<conio.h>
int main ()
{

float celsius, fahr, kelvin;
printf("Inter the temperature of celsius\n");
scanf("%f", &celsius);

fahr = (1.8 * celsius)+ 32;
kelvin = celsius + 273.15;

printf("%0.2f celsius= %0.2f fahrenheit\n", celsius, fahr);
printf("%0.2f celsius= %0.2f kelvin\n", celsius, kelvin);

return 0;

}

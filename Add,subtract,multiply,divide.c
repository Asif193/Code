#include<stdio.h>
int main ()
{

  int first, second, add, subtract, multiply;
  float divide;
  printf("Inter two number\n");
  scanf("%d%d", &first, &second);

  add= first + second;
  subtract= first - second;
  multiply= first * second;
  divide= first / second;

  printf("sum=%d\n", add);
  printf("difference=%d\n", subtract);
  printf("multiplication=%d\n", multiply);
  printf("division=%0.2f\n", divide);

  return 0;

}

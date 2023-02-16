#include "stdio.h"
 typedef struct
{
  float real ;
  float imag;
}com;
int main(){
 com num1;
 com num2;
scanf("%f %f", &num1.real, &num1.imag);
scanf("%f %f", &num2.real, &num2.imag);
 com num;
num.real = num1.real + num2.real;
num.imag = num1.imag + num2.imag;
printf("%0.3f + i%.3f", num.real, num.imag);

  return 0;
}

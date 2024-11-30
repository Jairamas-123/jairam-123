#include<stdio.h>
int main(void){
  float celsius,kelvin,fahrenheit;
  printf("Enter temperature in celsius:");
  scanf("%f",&celsius);
  kelvin=(273.15+ celsius);
  fahrenheit=(celsius*9/5)+32;
  printf("%.2fcelsius= %.2f  fahrenheit",celsius,fahrenheit);
  printf("%.2f celsius= %.2f kelvin", celsius, kelvin) ;
  return 0;
}

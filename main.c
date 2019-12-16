#include <stdio.h>

int main(void) {
  float lower, upper, step;
  float fahrenheit, celcius;

  lower = 0;
  upper = 300;
  step = 20;
  
  fahrenheit = lower;
  printf("%s\t%s\n","Fahrenheit","Celcius");
  while(fahrenheit <= upper){
     celcius = (5.0/9.0) * (fahrenheit - 32);
     printf("%.2f\t%.2f\n",fahrenheit,celcius);
     fahrenheit = fahrenheit + step;
  }
  return 0;
}
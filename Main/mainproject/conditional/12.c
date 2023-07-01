// /Accept a temperature in centigrade and display a suitable message

// Write a C program to read temperature in centigrade and display a suitable
// message according to temperature state below.
// Temp < 0 then Freezing weather
// Temp 0-10 then Very Cold weather
// Temp 10-20 then Cold weather
// Temp 20-30 then Normal in Temp
// Temp 30-40 then Its Hot
// Temp >=40 then Its Very Hot

#include <stdio.h>
void main() {
  int tmp;

  printf("Enter the temperature: ");
  scanf("%d", &tmp);

  if (tmp < 0)
    printf("Freezing weather");
  else if (tmp < 10)
    printf("very cold weather");
  else if (tmp < 20)
    printf("cold weather");
  else if (tmp < 30)
    printf("normal weather");
  else if (tmp < 40)
    printf("hot  weather");
  else if (tmp >= 40)
    printf("very hot weather");
}
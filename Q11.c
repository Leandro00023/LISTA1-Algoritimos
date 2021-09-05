#include <stdio.h>

int main(void) {
  float celsius, fahrenheit;
//F = 9 * C + 160/5
printf("Digite a temperatura Célsius\n");
scanf ("%f",&celsius);

fahrenheit = (9* celsius + 160) / 5;
printf("%.2f", fahrenheit);

  return 0;
}
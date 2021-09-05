#include <stdio.h>
#include <math.h>

int main(void) {
int a;
int b;
float c;

printf("Digite um número\n");
scanf ("%i", &a);

printf ("Digite outro número\n");
scanf ("%i", &b);

c = sqrt (a*a + b*b);

printf ("%.3f",c);

return 0;

}
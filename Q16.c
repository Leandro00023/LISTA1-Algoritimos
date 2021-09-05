#include <stdio.h>
#include <math.h>

int main ()

{

float a,b;

printf ("Informe o primeiro numero: ");
scanf ("%f",&a);


printf ("Informe o segundo numero: ");
scanf ("%f",&b);
printf ("\n");


  if (a < b)
  {
  printf ("%.2f Menor que %.2f" ,a,b);
  }
  else
  if (a > b)
  {
  printf ("%.2f Maior que %.2f" ,a,b);
  }
  else
  {
  printf ("os dois numero sao iguais");
  }
   

return 0;

}
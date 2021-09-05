#include <stdio.h>
#include <math.h>
int main (void) {
float gasolina, alcool, resultado;

printf(" Digite o valor da Gasolina:");
scanf("%f", &gasolina);

printf(" Digite o valor da Alcool:");
scanf("%f", &alcool);

resultado = gasolina* 0.7;
printf ("Resultado %.2f\n",resultado);

if  (resultado < alcool) {
  printf("Abasteça com gasolina!");
}

else if (resultado > alcool) { 
  printf ("Abasteça com alcool!");
}

else
{ printf("digito invalido");
}

return 0;
}
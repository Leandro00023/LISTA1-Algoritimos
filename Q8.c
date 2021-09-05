#include <stdio.h>
int main(void) {
  int numero;
  printf("Digite um número:\n");
  scanf ("%i", &numero);

if (numero > 0 )

{
  printf ("O número %i é positivo",numero);
}

else if (numero < 0 )
 { 
  printf ("O número %i é negativo",numero);
}

else 
{ printf ("O número %i é nulo", numero);

}
  return 0
  ;
}
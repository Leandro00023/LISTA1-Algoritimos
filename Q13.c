#include <stdio.h>

int main(void) {
float produto, pagar, troco;

printf("digite o valor do produto \n R$");
scanf ("%f", &produto);

printf(" digite o valor à pagar \n R$");
scanf("%f",&pagar);

troco = pagar - produto;

printf("Troco R$%.2f ", troco);

  return 0;
}
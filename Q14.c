#include <stdio.h>

int main(void) {
float saldo, resultado;

printf("Digite seu saldo \n R$ ");
scanf("%f", &saldo);

if (saldo <= 1000){
resultado  = saldo * 20 / 100 + saldo;
}
else {
  resultado = saldo * 10 /100 + saldo;
}

printf("valor final \n R$ %.2f", resultado);

 return 0;
}
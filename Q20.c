#include <stdio.h>
#include <math.h>
int main (void) {
float salario;
float aumento;
float total;

printf("Digite seu salario:");
scanf("%f", &salario);

aumento = salario *10 /100 ;
printf ("salario %.2f\n", salario);

printf("aumento %.2f\n", aumento);

total = salario + aumento;

printf("total %.2f",total);

return 0;

}
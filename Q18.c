#include <stdio.h>

int main()
{

int hora;
int min;
int calculo;
char pontos;

printf("Horario: ");
scanf("%d %c %d", &hora, &pontos, &min);

calculo = hora * 60 + min;

printf("Quantos minutos passou: %d", calculo);


return 0;

}
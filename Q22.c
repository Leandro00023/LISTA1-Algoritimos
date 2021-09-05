#include <stdio.h>

int main(void) {
char nome[256];

printf ("Digite seu nome completo:");

fgets(nome, sizeof(nome), stdin ); 

printf("Parabéns %s", nome);

return 0;

}
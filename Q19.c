#include <stdio.h>
#include <math.h>

int main(void) {
float largura, comprimento, perimetro, area, diagonal;

printf( "Digite a largura:\n" );
scanf ("%f", &largura);

printf( "Digite a Comprimento:\n" );
scanf ("%f", &comprimento);

area = largura * comprimento;
perimetro = (largura + comprimento) *2;

printf ("O resultado da area é %.1f\n", area);

printf ("O resultado do perimetro é %.1f\n", perimetro);

diagonal = sqrt (largura*largura + comprimento*comprimento);

printf ("O Resultado da diagonal é %.1F", diagonal);

return 0;

}
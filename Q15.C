#include <stdio.h>

int main(void) {
//R = Resultado
int A, B, C, R;

printf ("Digite o valor de A:\n");
scanf ("%i", &A);

printf ("Digite o valor de B:\n");
scanf ("%i", &B);

printf ("Digite o valor de C:\n");
scanf ("%i", &C);

R = (A * C) / B;

printf ("Resultado %i", R);

}
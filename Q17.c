#include<stdio.h>
#include<math.h>

int main()
{
 float a, b, c, d;

 printf("valor A: ");
 scanf("%f", &a);

 printf("valor B: ");
 scanf("%f", &b);

 printf("valor C: ");
 scanf("%f", &c);


 d = (b*b) - 4 *(a*c);

printf("Valor de Delta: %.2f" , d);

return 0;

}
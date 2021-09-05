#include <stdio.h>

int main(void) {
 float a, b, c, r;

 printf("digite um numero:");
 scanf("%f", &a);

 printf("digite outro numero:");
 scanf("%f", &b);

 printf("digite outro de novo numero:");
 scanf("%f", &c);

 r = a + b + c;

 printf ("%.2f\n", r);

 if (r > 25) { 

 printf (" maior que 25" );
 }
  else if (r < 25) { 
    printf ("menor que 25");
  }
   
   else {
    printf ("igual a 25");
  }

  return 0;
}
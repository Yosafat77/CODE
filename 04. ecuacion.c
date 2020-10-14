// YOSAFAT SANCHEZ VASQUEZ---------12/10/2020----------
#include <stdio.h>
#include <math.h>


int main()
{
 float a, b, c,x1,x2,r1;
 printf("ingresa los valores de:\n a\n b\n c\n");
 scanf("%f",&a);
 scanf("%f",&b);
 scanf("%f",&c);

r1=pow(b,2)-4*a*c;
x1=((-b+sqrt(r1))/(2*a));
x2=((-b-sqrt(r1))/(2*a));

 printf( " el resultado de x1 es\a %f",x1);
 printf( " el resultado de x2 es\a %f",x2);
}

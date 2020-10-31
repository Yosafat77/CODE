// ---------------------YOSAFAT SANCHEZ VASQUEZ-----------------30/10/2020---------------------
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{


double calcularPi(double iteraciones) {
  double numerador = 4;
  double denominador = 1; // A este lo vamos a ir aumentando de 2 en 2
  double pi = 0;
  int x = 0;
  // Alternar entre negativo y positivO
  // Comenzamos en positivo
  int operador = 1;
  for (x; x < iteraciones; x++) {
    pi += operador * (numerador / denominador);
    denominador += 2; // El denominador aumenta de 2 en 2
    operador *= -1;   // Alternamos operador
  }
  return pi;
}





int op;
int n ,fila=1;
int a, b, c, d;
printf("\tMENU PRINCIPAL \n");
printf("1.- Figuras \n");
printf("2.- Secuencias de Numeros\n");
printf("3.- PI \n");
printf("Escriba el numero de la Opcion que elija: \n");

scanf("%d",&op);
switch(op)
{
case 1:

    n=10;
     for(int ren=1; ren<=n ; ren++)
     {
     for(int i=1; i<=fila ; i++)
     {
        printf("*");
			}
        printf("\n");
        fila= fila+1;
		}

     n=10;

	printf("\n");
    for(int ren= 0; ren<=n ; ren++)
		{
    for(int i= 2; i<=fila ; i++)
		  	{
        printf("*");
			}
        printf("\n");
        fila= fila -1;
		}

     n=10;

     printf("\n");

	 int fila1=1, esp=n-1;

        for(int ren=1; ren<=n ; ren++)
	  	{
        for(int i=1; i<=esp ; i++)
			printf(" ");

        for(int i=1; i<=fila1 ; i++)
          printf("*");
          printf("\n");
          fila1= fila1+1;
          esp= esp-1;
		}

		n=10;
        printf("\n");
	  	for(int ren=1; ren<=n ; ren++)
	  	{
        for(int i=-1; i<=esp ; i++)
			printf(" ");
        for(int i=2; i<=fila1 ; i++)
			printf("*");
			printf("\n");
			fila1= fila1-1;
			esp= esp+1;
		}


break;
case 2:

a=1;
b=2;
c=30;
d=15;
system ("pause");
printf("\t\tLa secuencia para el inciso a)\n");
do{
printf("%d\n", a);
a=a+2;
} while(a<=13);
system ("pause");
printf("\t\tLa secuencia para el inciso b)\n");
do{
printf("%d\n", b);
b=b+3;
} while (b<=17);
system("pause");
printf("\t\tLa secuencia para el inciso c)\n");
do{
printf("%d\n", c);
c=c-10;
} while(c>=30*-1);
system ("pause");
printf("\t\tLa secuencia para el inciso d)\n");
do{
printf("%d\n", d);
d=d+8;
} while (d<=55);
system("pause");
printf("\t\tSecuencias finalizadas.");


break;
case 3:
{


  double iteraciones = 10;
  double pi = calcularPi(iteraciones);
  printf("Al calcular pi con %-10.lf iteraciones se obtiene %1.20lf\n",
         iteraciones, pi);
  iteraciones = 1000;
  pi = calcularPi(iteraciones);
  printf("Al calcular pi con %-10.lf iteraciones se obtiene %1.20lf\n",
         iteraciones, pi);
  iteraciones = 10000;
  pi = calcularPi(iteraciones);
  printf("Al calcular pi con %-10.lf iteraciones se obtiene %1.20lf\n",
         iteraciones, pi);
  iteraciones = 100000;
  pi = calcularPi(iteraciones);
  printf("Al calcular pi con %-10.lf iteraciones se obtiene %1.20lf\n",
         iteraciones, pi);
  iteraciones = 1000000;
  pi = calcularPi(iteraciones);
  printf("Al calcular pi con %-10.lf iteraciones se obtiene %1.20lf\n",
         iteraciones, pi);
  iteraciones = 10000000;
  pi = calcularPi(iteraciones);
  printf("Al calcular pi con %-10.lf iteraciones se obtiene %1.20lf\n",
         iteraciones, pi);
  iteraciones = 100000000;
  pi = calcularPi(iteraciones);
  printf("Al calcular pi con %-10.lf iteraciones se obtiene %1.20lf\n",
         iteraciones, pi);
  iteraciones = 1000000000;
  pi = calcularPi(iteraciones);
  printf("Al calcular pi con %-10.lf iteraciones se obtiene %1.20lf\n",
         iteraciones, pi);
}








break;

default: printf("Opcion Incorrecta");
}
getch();
return 0;
}

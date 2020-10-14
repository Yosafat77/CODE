// YOSAFAT SANCHEZ VASQUEZ------13/10/2020

#include <stdio.h>

int main ()
{
    int N,i;
    char opc='s';
    while(opc=='s'){

    i=0;
    printf("Escribe el valor de N:");
    scanf("%d",&N);

    while(i<=N)
    {
        printf("%d",3*N+2*i);
        i=i+1;
    }
    printf("\nVer mas valores? s/n");
    scanf("%s",&opc);
    }
       printf("\n Programa finalizado");
       return 0;
    }





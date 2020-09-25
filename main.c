//YOSAFAT SANCHEZ VASQUEZ-----------25/09/20-------------
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float Vs;
    float VL1=1.5,VL2=1.8,VL3=1.3,I1=0.15;
    float R1,R2,R3;

    printf("Ingresa el valor de la fuente Vs:");
    scanf("%f",&Vs);

    R1=(Vs-VL1)/I1;
    R2=(Vs-VL2)/I1;
    R3=(Vs-VL3)/I1;

    printf("La resistencia para LED rojo es: %0.2fohms\n\n",R1);
    printf("La resistencia para LED verde es: %0.2fohms\n\n",R2);
    printf("La resistencia para LED amarillo es: %0.2fohms\n\n",R3);
    return 0;
}

//YOSAFAT SANCHEZ VASQUEZ------------25/09/20------------
#include <stdio.h>

int main()
{
    float Vs;
    int R1,R2,R3;
    float I,RT,REQ;

    printf("Escribe el valor de la fuente Vs: ");
    scanf("%f",&Vs);

    printf("Restencia 1: ");
    scanf("%d",&R1);
    printf("Resistencia 2: ");
    scanf("%d",&R2);
    printf("Resistencia 3: ");
    scanf("%d",&R3);



     RT=((R2*R3)/(R2+R3)); //simplificamos circuito con R3 Y R2
    REQ=((RT*R1)/(RT+R1));//resistencia total con RT yR1
    I=Vs/REQ; //Corriente
    printf("La corriente I es %.2fA\n",I);
    printf("El voltaje en R1 (%d ohms) es: %0.2fV\n",R1,I*R1);
    printf("El voltaje en R2 (%d ohms) es: %0.2fV\n",R2,I*R2);
    printf("El voltaje en R3 (%d ohms) es: %0.2fV\n",R3,I*R3);

    printf("La corriente en R1 (%d ohms) es: %0.2fI\n",R1,Vs/R1);
    printf("La corriente en R2 (%d ohms) es: %0.2fI\n",R2,Vs/R2);
    printf("La corriente en R3 (%d ohms) es: %0.2fI\n",R3,Vs/R3);
return 0;

}

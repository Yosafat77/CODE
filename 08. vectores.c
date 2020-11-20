// YOSAFAT SANCHEZ VASQUEZ-----------------------19/11/2020----------------------------
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1415926536


int opc=0;
float a1, b1, a2, b2,c1,c2,x ,y ,z,w, rad;
float magnitud, rad1, rad2;
float suma,suma1,suma2,suma3, orientacion, orientacion1, orientacion2;
void main(void)
{
    do {
        system ("cls");
        printf ("Menu de opciones:\n\n");
        printf ("1.- Vector en espacio bidimensional (x,y)\n\n");
        printf ("2.- Vector en espacio tridimensional (x,y,z)\n\n");
        printf ("3.- Salir\n\n");
        printf ("Opcion a escoger: ");
        scanf("%d",&opc);
        switch(opc){
    case 1:
        system ("cls");
        printf("Introduzca coordenadas del primer vector (x,y separadas por espacios): ");
        scanf("%f %f", &a1, &b1);

        printf("\n\nIntroduzca coordenadas del segundo vector (x,y separadas por espacios): ");
        scanf("%f %f", &a2, &b2);
        suma1=a1+a2;
        suma2=b1+b2;



        x=pow(suma1,2);
        y=pow((suma2),2);
        z=sqrt(x+y);

        suma= (suma2)/(suma1);

        orientacion=atan(suma);
        rad= orientacion*180/PI;


        printf("\n\nLa magnitud del vector es: ");
        printf("%f",z);

        printf("\n\nLa orientacion del vector es: ");
        printf("%f grados", rad);
        getch();
        break;
    case 2:
        system ("cls");
        printf("Introduzca coordenadas del primer vector (x,y,z separadas por espacios): ");
        scanf("%f %f %f", &a1, &b1, &c1);

        printf("\n\nIntroduzca coordenadas del segundo vector (x,y,z separadas por espacios): ");
        scanf("%f %f %f", &a2, &b2, &c2);
        suma1=a1+a2;
        suma2=b1+b2;
        suma3=c1+c2;



        x=pow(suma1,2);
        y=pow(suma2,2);
        w=pow(suma3,2);
        z=sqrt(x+y+w);

       orientacion=acos(suma1/z);
        orientacion1=acos(suma2/z);
         orientacion2=acos(suma3/z);
         rad= orientacion*180/PI;
         rad1= orientacion1*180/PI;
         rad2= orientacion2*180/PI;


        printf("\n\nLa magnitud del vector es: ");
        printf("%f",z);

        printf("\n\nLa orientacion del vector es: ");
        printf("(%f grados en x, %f grados en y, %f grados en z)", rad,rad1,rad2);
        getch();
        break;

    case 3:
        break;
    default:
        system ("cls");
        printf("La opcion que eligio no esta dentro del memu ");
        getch();
        break;
        }

    } while (opc !=3);
    return 0;




}


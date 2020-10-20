//YOSAFAT SANCHEZ VASQUEZ---------------19/10/2020----------------
#include <stdio.h>

int main()
{
    int opc=0;
    float Vs; //VARIABLES DEL CODIGO 1
    int R1,R2,R3,RT;
    float I1,I2,I3;
    float IT;

    float V;//VARIABLES DE CODIGO 2
    float Ro,Ve,Az,Bl;
    float R;

    char c1,c2,c3; //VARIABLES DEL CODIGO 3
    int ce1,ce2,ce3;
    float promedio;

    float a,b,c,D; //VARIABLES DEL CODIGO 4

    int N,i; //VARIABLES DEL CODIGO 5
    char op='s';


//MENU
   do{
    printf("Menu Principal");


    printf("\n 1 - Circuito paralelo.");
    printf("\n 2 - Diodos LED.");
    printf("\n 3 - Calificaciones.");
    printf("\n 4 - Ecuacion Cuadratica.");
    printf("\n 5 - Series.");
    printf("\n 6 - Salir.\n");

    printf("\nEscriba el numero de la opcion a elegir.\n");
    scanf("%d",&opc);

//CODIGO 1
   if (opc==1)
    {

    printf("Escribe el valor de la fuente Vs: ");
    scanf("%f",&Vs);
    printf("Escribe el valor de las resistencias separado con comas: ");
    scanf("%d,%d,%d",&R1,&R2,&R3);

    I1=Vs/R1;
    I2=Vs/R2;
    I3=Vs/R3;

    printf("(RECUERDA QUE EL VOLTAJE SIEMPRE ES EL MISMO EN UN CIRCUITO PARALELO)\n");
    printf("La corriente en la resistencia 1 es: %fA\n",I1);
    printf("La corriente en la resistencia 2 es: %fA\n",I2);
    printf("La corriente en la resistencia 3 es: %fA\n",I3);

    IT= I1+I2+I3;

    printf("La corriente total en el circuito es de: %fA\n",IT);

         printf("\n Introduce una opcion:");
         printf("\n 6 - Salir.");
          printf("\n 7 - Volver al Menu Principal.");

         printf("\nEscriba el numero de la opcion que guste.\n");
         scanf("%d",&opc);
    }
//CODIGO 2
    if (opc==2)
    {

    printf("Escribe el valor de la fuente V: ");
    scanf("%f",&V);
    Ro=(V-2)/0.02;
    Ve=(V-3)/0.02;
    Az=(V-3)/0.02;
    Bl=(V-2.8)/0.02;



    printf("La resistencia para el color Rojo es: %.2fOhm's\n",Ro);
    printf("La resistencia para el color Verde es: %.2fOhm's\n",Ve);
    printf("La resistencia para el color Azul es: %.2fOhm's\n",Az);
    printf("La resistencia para el color Blanco es: %.2fOhm's\n",Bl);

     printf("\n Introduce una opcion:");
     printf("\n 6 - Salir.");
     printf("\n 7 - Volver al Menu Principal.");

     printf("\nEscriba el numero de la opcion que guste.\n");
     scanf("%d",&opc);

    }
//CODIGO 3
    if (opc==3)
    {
        printf( "Introduzca calificacion: " );
         fflush( stdin );
    scanf( "%c", &c1 );
    printf( "Introduzca calificacion: " );
    fflush( stdin );
    scanf( "%c", &c2 );
    printf( "Introduzca calificacion: " );
    fflush( stdin );
    scanf( "%c", &c3 );




    if(c1=='A'||c1=='a')
    {
        ce1=10;
    }
    else if(c1=='B'||c1=='b')
    {
        ce1=9;
    }
    else if(c1=='C'||c1=='c')
    {
        ce1=8;
    }

    else
       {
           ce1=5;
       }



    if(c2=='A'||c2=='a')
    {
        ce2=10;
    }
    else if(c2=='B'||c2=='b')
    {
        ce2=9;
    }
    else if(c2=='C'||c2=='c')
    {
        ce2=8;
    }
    else
       {
           ce2=5;
       }



    if(c3=='A'||c3=='a')
    {
        ce3=10;
    }
    else if(c3=='B'||c3=='b')
    {
        ce3=9;
    }
    else if(c3=='C'||c3=='c')
    {
        ce3=8;
    }
    else
       {
           ce3=5;
       }



    promedio=(ce1+ce2+ce3)/3;

    printf("El promedio es: %.2f\n",promedio);

     printf("\n Introduce una opcion:");
     printf("\n 6 - Salir.");
     printf("\n 7 - Volver al Menu Principal.");

     printf("\nEscriba el numero de la opcion que guste.\n");
     scanf("%d",&opc);

    }
//CODIGO 4
    if (opc==4)
    {
      printf("\nEcuacion cuadratica\n\n");
    printf("    2\n");
    printf("ax + bx + c = 0\n\n");

    printf("Escriba el valor de a: ");
    scanf("%f",&a);
    printf("Escriba el valor de b: ");
    scanf("%f",&b);
    printf("Escriba el valor de c: ");
    scanf("%f",&c);


    D=b*b-(4*a*c);

    if (D==0)
    printf("Sol.: %.2f\n", -b/(2*a));

    else if (D>0)
    {
        printf("Sol. 1: %.2f\n",(-b+sqrt(D))/(2*a));
        printf("Sol. 2: %.2f\n",(-b-sqrt(D))/(2*a));
    }
    else
    {
         printf("Sol. 1: %.2f+%.2f i\n",-b/(2*a),(sqrt(D))/(2*a));
         printf("Sol. 2: %.2f-%.2f i\n\n",-b/(2*a),(sqrt(D))/(2*a));
    }
     printf("\n Introduce una opcion:");
     printf("\n 6 - Salir.");
     printf("\n 7 - Volver al Menu Principal.");

     printf("\nEscriba el numero de la opcion que guste.\n");
     scanf("%d",&opc);
    }
//CODIGO 5
     if(opc==5)
    {
            while(op=='s'){

    i=0;
    printf("Escribe el valor de N: ");
    scanf("%d",&N);

    while(i<=N)
    {
        printf("%d\n",3*N+2*i);
        i=i+1;
    }
    printf("\nQuieres ver otro valor? s/n: ");
    scanf("%s",&op);
    }
    printf("\n Adios! :D\n");
    printf("\n Introduce una opcion:");
    printf("\n 6 - Salir.");
    printf("\n 7 - Volver al Menu Principal.");

     printf("\nEscriba el numero de la opcion que guste.\n");
     scanf("%d",&opc);
    }
//SALIR
    if (opc==6)
        {
            printf("\nFin del programa.\n");
        }
   }

     while(opc==7);

    return 0;
}

// YOSAFAT SANCHEZ VASQUEZ --------------13/10/2020---------------
#include <stdio.h>

int main ()
{
    char  V1,V2,V3;
    float calf1,calf2,calf3,prom;

    printf("Ingresa las tres calificaciones y utiliza las letras A - F segun sea el caso:\n");
    scanf("%c %c %c", &V1, &V2, &V3);



if (V1=='A')
       calf1=0+10;

    else if (V1=='B')
        calf1=0+9;

    else if (V1=='C')
        calf1=0+8;

    else if (V1=='D')
        calf1=0+7;

    else if (V1=='E')
        calf1=0+6;

    else if (V1=='F')
        calf1=0+5;
        else
        {
            printf("Reprobaste\n");
        }

if (V2=='A')
       calf2=0+10;


    else if (V2=='B')
        calf2=0+9;

   else if (V2=='C')
        calf2=0+8;

   else if (V2=='D')
        calf2=0+7;

   else if (V2=='E')
        calf2=0+6;

   else if (V2=='F')
        calf2=0+5;
         else
         {
             printf("Reprobaste\n");
         }
if (V3=='A')
       calf3=0+10;

   else if (V3=='B')
        calf3=0+9;

   else if (V3=='C')
        calf3=0+8;

   else if (V3=='D')
        calf3=0+7;

   else if (V3=='E')
        calf3=0+6;

   else if (V3=='F')
        calf3=0+5;
   else
   {
       printf("Reprobaste\n");
   }

      prom=(calf1+calf2+calf3)/3;

{
printf ("Tu promedio es de:%f\n", prom);
}
}

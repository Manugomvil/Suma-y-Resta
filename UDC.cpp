#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
main()
{float Nro,U,D,C,R3,I,DD,R1,R2;
int L;
printf("Introduzca un número de 3 cifras\n\n");
scanf("%f",&Nro);
Nro=L;
I=Nro/100;
R1=L%100/100;
C=I-R1;
DD=R1*10;
R2=R1*100%10/10;
D=DD-R2;
U=R2*10;
printf("Los Valores son:\n\n");
printf("Unidad=%f\n",U);
printf("Decena=%f\n",D);
printf("Centena=%f\n",C);
system("pause>null");
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main( ) 
{
	float Ac,l,b,h,A;
	printf("Seleccione que Area desea calcular\n\nCuadrado----Presione 1.\nTri%cngulo---Presione 2.\nRect%cngulo--Presione 3.     ",160,160);
	scanf("%f",&Ac);
	if(Ac==1){ /*Cuadrado*/
		printf("\nCalcular Area de un Cuadrado\n\n¿Cual es el valor del lado?\n");
		scanf("%f",&l);
		A=pow(l,2);
		printf("\nA=%f",A);
	}else{
		if(Ac==2){ /*Triángulo*/
			printf("\nCalcular Area de un Tri%cngulo\n\n¿Cual es el valor de la base?\n",160);
			scanf("%f",&b);
			printf("\n¿Cual es el valor de la altura?\n");
			scanf("%f",&h);
			A=(b*h)/2;
			printf("\nA=%f",A);
			}else{
				if(Ac==3){ /*Rectángulo*/
				printf("\nCalcular Area de un Rect%cngulo\n\n¿Cual es el valor de la base?\n",160);
				scanf("%f",&b);
				printf("\n¿Cual es el valor de la altura?\n");
				scanf("%f",&h);
				A=b*h;
				printf("\nA=%f",A);
		}}}
			return 0;
}

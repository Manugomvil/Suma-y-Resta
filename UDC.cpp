#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
main()
{
	int x,U,D,C;
	printf("Introduzca un número de 3 cifras\n\n");
	scanf("%d",&x);
	
	U=x%10; /*1*/
	D=x/10%10; /*2*/
	C=x/100; /*3*/
	
	printf("Los Valores son:\n\n");
	printf("Unidad=%d\n",U);
	printf("Decena=%d\n",D);
	printf("Centena=%d\n",C);
	system("pause>null");
}

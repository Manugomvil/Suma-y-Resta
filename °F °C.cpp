#include<stdio.h>
#include<stdlib.h>
/* imprime la tabla Fahrenheit-Celsius
para fahr = 0, 20, ..., 300 */
main( )
{
	float F,C;
	printf("Introduzca la cantidad a convertir");
	scanf("%f",&F);
	C=(F-32)*(5/9);
	printf("%f°F=%f°C",F,C);
}

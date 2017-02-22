#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main( ) {
	int nro,a,b,c,d,e;
	printf("Ingrese un n%cmero de 5 cifras",163); /*12321*/
	printf("\n\n");
	scanf("%d",&nro);
	
	e=nro%10; /*1*/
	d=nro/10%10; /*2*/
	c=nro/100%10; /*3*/
	b=nro/1000%10; /*2*/
	a=nro/10000; /*1*/
	
	if(a==e&&d==b){
		printf("\nEs Capicua");
	}else{
		printf("\nNo es Capicua");
	}
	return 0;
}

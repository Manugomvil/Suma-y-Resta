#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main( ) {
int cp,num,cimp,cpri,i;
char resp;
float prom, porc,sum,total;
cp=0;cimp=0,sum=0,total=0;
do{
	printf("Ingresa un Numero:\n");
	scanf("%d",&num);
	if(num%2==0){
		cp+1;
	}else{
		cimp++;
	}
	cpri=0;
	for(i=2;i<num;i++){
	 if(num%i==0){
	 	cpri++;
	 }
	}
	if(cpri==0){
		printf("\nEs Primo\n");
	}else{
		printf("\nno es Primo\n");
	}
	sum=sum+num;
	total++;
	printf("\n¿Desea ingresar otro numero?(S/N)\n");
	resp=getch( );
}while(resp=='S'||resp=='s');


printf("\nEl Total de Numeros Pares es: %d",cp);
printf("\nEl Total de Numeros Impares es: %d",cimp);
printf("\nLa suma total es: %d",sum);

prom=sum/total;
porc=(cp/total)*100;
printf("\nEl promedio es= %f",prom);
printf("\nEl porcentaje de pares es: %f",porc);
	return 0;
}

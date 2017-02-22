#include <stdio.h>

#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main( ) 
{
	int a,b,c,i;
	printf("Ingrese 3 numeros enteros\n");
	printf("El primero:\n");
	scanf("%d",&a);
	printf("\n El segundo:\n");
	scanf("%d",&b);
	printf("\n El tercero:\n");
	scanf("%d",&c);
	if(a==c&&b==c){
		printf("Los valores: %d,%d,%d, son iguales",a,b,c);
	}else{
		if(a>b&&b>c){
			printf(" Los n%cmeros ordenados de mayor a menor:\n %d;%d;%d \n Los n%cmeros ordenados de menor a mayor: \n %d;%d;%d",163,a,b,c,163,c,b,a);
		}else{
			if(a>c&&c>b){
				printf(" Los n%cmeros ordenados de mayor a menor:\n %d;%d;%d \n Los n%cmeros ordenados de menor a mayor: \n %d;%d;%d",163,a,c,b,163,b,c,a);
			}else{
				if(b>c&&c>a){
					printf(" Los n%cmeros ordenados de mayor a menor:\n %d;%d;%d \n Los n%cmeros ordenados de menor a mayor: \n %d;%d;%d",163,b,c,a,163,a,c,b);	
				}else{
					if(b>a&&a>c){
						printf(" Los n%cmeros ordenados de mayor a menor:\n %d;%d;%d \n Los n%cmeros ordenados de menor a mayor: \n %d;%d;%d",163,b,a,c,163,c,a,b);
					}else{
						if(c>a&&a>b){
							printf("Los n%cmeros ordenados de mayor a menor:\n %d;%d;%d \n Los n%cmeros ordenados de menor a mayor: \n %d;%d;%d",163,c,a,b,163,b,a,c);
						}else{
							if(c>b&&b>a){
								printf(" Los n%cmeros ordenados de mayor a menor:\n %d;%d;%d \n Los n%cmeros ordenados de menor a mayor: \n %d;%d;%d",163,c,b,a,163,a,b,c);
							}}}}}}}
	return 0;
}

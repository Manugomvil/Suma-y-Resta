#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main( )
{
	int a,p;
	int referent=0;
	printf("Ingrese el n%cmero a comprobar\n\n",163);
	scanf("%d",&a);
	
	for(p=a;p>0;p--){
		if(a%p==0){
			referent++;
		}}if(referent==2){
		printf("Es Primo");
	}else{printf("No es Primo");
	}
	return 0;
}

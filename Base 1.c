#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main( ) {
	int A,B,C,D,X,R[100];
	printf("\nEste programa le ayudara a convertir n%cmeros de base 10 a cualquier base entre 1 y 9.\n\nIntroduce un n%cmero entre 0 y 1000\n",163,163,163);
	scanf("%d",&A);
	do{
		printf("selecciona a que base lo deseas convertir\n");
	scanf("%d",&B);
	if(B>9||B<1){
		printf("Debes seleccionar una base entre 1 y 9\n");
	}

	}	while(B>9||B<1);
		printf("El n%cmero %d en base %d=",163,A,B);
		if(A==0){
			printf("0",163,A,B);
		}else{
		if(B==1){
		for(X=A;X>0;X--){
		printf("1");
	}
		}else{
			if(B>1&&B<9){
				D=0;
				while(A>0){
				R[D]=A%B;
				A/=B;
				++D;
				}
				for(X=D-1;X>=0;X--){
					printf("%d",R[X]);
				}}}}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int N,V1,V2,Sum,i;
	char r;
	do{V1=0,V2=1,Sum=0,i=0;
	printf("\nIntroduzca cuantos elemento de de la suceci%cn de Fibonacci deseas mostrar (desde 3 a 47) \n ",162);
	scanf("%d",&N);
	printf("%d %d",V1,V2);
	for(i=0;i<N-2;i++){
		Sum=V1+V2;
		printf(" %d",Sum);
		 V1=V2; V2=Sum;
	}
	printf("\n %cDeseas mostrar otra suceci%cn? (S/N)",168,162);
	 r=tolower(getch());
	if(r=='s'){
		system("CLS");
	}
	}while(r=='s');
	return 0;
}

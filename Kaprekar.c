#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main( )
{
	int x,U,D,C,M,aux,a,b,k,y,contador,m;
	printf("Costante de Kaprekar\n\n");
	printf("El siguiente programa indicar%c cuantas veces se intinera un n%cmero para llegar a la costante de Kaprekar.",160,163);
	printf("\nIntroduce un n%cmero entre 0 y 6174.\n",163);
	scanf("%d",&m);
	x=m;
	contador=0;
		U=x%10;
		D=x/10%10;
		C=x/100%10;
		M=x/1000%10;
	if(U==D&&D==C&&C==M){
	printf("\nEste n%cmero no cumple los requisitos para intinerarse.",163);
	return 0;
		}if(x==6174){
		printf("Este n%cumero no se debe intinerar",163);
	}else{
		do{
		y=0;
		U=x%10;
		D=x/10%10;
		C=x/100%10;
		M=x/1000%10;
		aux=0;
		switch(aux);
		
			k=0;
			do{
		if (U<=D){
                aux=U;
                U=D;
                D=aux;
            }
            if(U>=D&&D<=C){
                 aux=D;
                 D=C;
                 C=aux;
               }
            if (U>=D &&D>=C&&C<=M){
                 aux=C;
                 C=M;
                 M=aux;
		}
		k++;
			}
			while(k<=3);
			
		a=U*1000+D*100+C*10+M;
		b=M*1000+C*100+D*10+U;
		x=a-b;
		y++;
		contador++;
		if(x==6174){
			y=9;
		}
		printf("%d %d %d\n",a,b,x);

	}
	while(y<=7);
	printf("\nEl n%cmero %d debe intinerarse %d veces.",163,m,contador);
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {//1
	int P,n,i,suma,U,D,C,Um,Dm,SumI,F,XF,NF,CF,B;
	char r;
	do{
		CF=0;
	do{//Analisa si el nùmero es 0<P<10000   //2
	printf("\nIntroduzca un n%cmero entero entre 1 y 10000\n",163);
	scanf("%d",&P);
	if(P<1||P>10000){//3
		system("CLS");
		printf("\nEl n%cmero ingresado no es valido",163);
	}}while(P<1||P>10000);  //2y3
	i=0;suma=0;
	for(n=0;n<P;n++){//Sumatoria  4
	if(i%2==0){//5
		suma=suma+pow((P-i),2);
	}else{//5 y6
		if(i%2==1){suma=suma-pow((P-i),2);}//7y7
	}//6
	i++;
	}//4
	printf("\nLa suma de %d=%d",P,suma);
	SumI=0;
	U=P%10;//Separo en U,D,C,Um,Dm
	D=P%100/10;
	C=P%1000/100;
	Um=P%10000/1000;
	Dm=P/100000/10000;
	if((Um==2||Um==3||Um==5||Um==7)&&(C==2||C==3||C==5||C==7)&&(D==2||D==3||D==5||D==7)&&(U==2||U==3||U==5||U==7)){//1111
		SumI=(Um*1000)+(C*100)+(D*10)+U;
		}else{if((Um==2||Um==3||Um==5||Um==7)&&(C==2||C==3||C==5||C==7)&&(D==2||D==3||D==5||D==7)&&(U==0||U==1||U==4||U==6||U==8||U==9)){//1110
			SumI=(Um*100)+(C*10)+D;
	}else{if((Um==2||Um==3||Um==5||Um==7)&&(C==2||C==3||C==5||C==7)&&(D==0||D==1||D==4||D==6||D==8||D==9)&&(U==2||U==3||U==5||U==7)){//1101
		SumI=(Um*100)+(C*10)+U;
	}else{if((Um==2||Um==3||Um==5||Um==7)&&(C==2||C==3||C==5||C==7)&&(D==0||D==1||D==4||D==6||D==8||D==9)&&(U==0||U==1||U==4||U==6||U==8||U==9)){//1100
		SumI=(Um*10)+C;
	}else{if((Um==2||Um==3||Um==5||Um==7)&&(C==0||C==1||C==4||C==6||C==8||C==9)&&(D==2||D==3||D==5||D==7)&&(U==2||U==3||U==5||U==7)){//1011
		SumI=(Um*100)+(D*10)+U;
	}else{if((Um==2||Um==3||Um==5||Um==7)&&(C==0||C==1||C==4||C==6||C==8||C==9)&&(D==2||D==3||D==5||D==7)&&(U==0||U==1||U==4||U==6||U==8||U==9)){//1010
		SumI=(Um*10)+D;
	}else{if((Um==2||Um==3||Um==5||Um==7)&&(C==0||C==1||C==4||C==6||C==8||C==9)&&(D==0||D==1||D==4||D==6||D==8||D==9)&&(U==2||U==3||U==5||U==7)){//1001
		SumI=(Um*10)+U;
	}else{if((Um==2||Um==3||Um==5||Um==7)&&(C==0||C==1||C==4||C==6||C==8||C==9)&&(D==0||D==1||D==4||D==6||D==8||D==9)&&(U==0||U==1||U==4||U==6||U==8||U==9)){//1000
		SumI=Um;
	}else{if((Um==0||Um==1||Um==4||Um==6||Um==8||Um==9)&&(C==2||C==3||C==5||C==7)&&(D==2||D==3||D==5||D==7)&&(U==2||U==3||U==5||U==7)){//0111
		SumI=(C*100)+(D*10)+U;
	}else{if((Um==0||Um==1||Um==4||Um==6||Um==8||Um==9)&&(C==2||C==3||C==5||C==7)&&(D==2||D==3||D==5||D==7)&&(U==0||U==1||U==4||U==6||U==8||U==9)){//0110
		SumI=(C*10)+D;
	}else{if((Um==0||Um==1||Um==4||Um==6||Um==8||Um==9)&&(C==2||C==3||C==5||C==7)&&(D==0||D==1||D==4||D==6||D==8||D==9)&&(U==2||U==3||U==5||U==7)){//0101
		SumI=(C*10)+U;
	}else{if((Um==0||Um==1||Um==4||Um==6||Um==8||Um==9)&&(C==2||C==3||C==5||C==7)&&(D==0||D==1||D==4||D==6||D==8||D==9)&&(U==0||U==1||U==4||U==6||U==8||U==9)){//0100
		SumI=C;
	}else{if((Um==0||Um==1||Um==4||Um==6||Um==8||Um==9)&&(C==0||C==1||C==4||C==6||C==8||C==9)&&(D==2||D==3||D==5||D==7)&&(U==2||U==3||U==5||U==7)){//0011
		SumI=(D*10)+U;
	}else{if((Um==0||Um==1||Um==4||Um==6||Um==8||Um==9)&&(C==0||C==1||C==4||C==6||C==8||C==9)&&(D==2||D==3||D==5||D==7)&&(U==0||U==1||U==4||U==6||U==8||U==9)){//0010
		SumI=D;
	}else{if((Um==0||Um==1||Um==4||Um==6||Um==8||Um==9)&&(C==0||C==1||C==4||C==6||C==8||C==9)&&(D==0||D==1||D==4||D==6||D==8||D==9)&&(U==2||U==3||U==5||U==7)){//0001
		SumI=U;
	}else{if((Um==0||Um==1||Um==4||Um==6||Um==8||Um==9)&&(C==0||C==1||C==4||C==6||C==8||C==9)&&(D==0||D==1||D==4||D==6||D==8||D==9)&&(U==0||U==1||U==4||U==6||U==8||U==9)){//0000
		SumI=0;
	}
	}}}}}}}}}}}}}}}
	i=0;
	for(n=SumI;n>0;n--){//Compruebo si el número resultante es primo.
		if(SumI%n==0){
			i++;
		}}
	if(i==2){
		printf("\n Es invicto.");
	}else{
		printf("\n No es invicto.");
	}	
	NF=1;
	for(n=0;n<P;n++){//Cuenta cuantos N° no Felices hay entre 1 y P.
		XF=NF;
		do{//compruba no felices desde 1 hasta P
			B=0;
			U=XF%10;
			D=XF%100/10;
			C=XF%1000/100;
			Um=XF%10000/1000;
			Dm=XF/10000;
			F=(pow(Dm,2)+pow(Um,2)+pow(C,2)+pow(D,2)+pow(U,2));
			XF=F;
			if(F==1){
				B=2;
			}if(F==4){
				B=2;
			}
		}while(B==0);
		if(F==4){
			CF++;
		}
		NF++;
	}
	if(CF==1){//Resultados
	printf("\n hay %d n%cmero %cno feliz%c entre %d y 1.",CF,163,34,34,P);
	}else{
		if(CF==0){
			printf("\n 1 es un n%cmero feliz",163);
		}else{
			printf("\n hay %d n%cmeros %cno felices%c entre %d y 1.",CF,163,34,34,P);
		}
	}
	printf("\n %cDeseas introducir otro valor? (S/N)",168,162);
	 r=tolower(getch());
	if(r=='s'){
		system("CLS");
	}
	}while(r=='s');
	return 0;
}//1

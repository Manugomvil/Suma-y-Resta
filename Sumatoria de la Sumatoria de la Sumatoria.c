#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int SumI,SumJ,SumK,I,J,K,L1,L2;
	I=0;SumI=0,SumJ=0;
	for(I==0;I<101;I++){
		
		J=0,SumJ=0;
		for(J=0;J<11;J++){

			K=0,SumK=0;
			for(K=0;K<5;K++){
				SumK=SumK+(pow(K,1));
			}SumJ=SumJ+(pow(J,2))+(pow(SumK,1));

		}SumI=SumI+(pow(I,3))+5+(pow(SumJ,1));
	}
	printf("\nLa Sumatoria X2 es: %d",SumI);
	return 0;
}

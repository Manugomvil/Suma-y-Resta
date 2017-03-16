#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int SumI,SumJ,I,J;
	I=0;SumI=0,SumJ=0;
	for(I==0;I<101;I++){
		J=5,SumJ=0;
		for(J=5;J<21;J++){
			SumJ=SumJ+(pow(J,3))+(pow(I,2));

		}SumI=SumI+(pow(I,2))+(pow(SumJ,1));
	}
	printf("\nLa Sumatoria X1 es: %d",SumI);
	return 0;
}

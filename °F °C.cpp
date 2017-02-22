#include<stdio.h>
#include<stdlib.h>
/* imprime la tabla Fahrenheit-Celsius
para fahr = 0, 20, ..., 300 */
main( )
{
	int F, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	F = lower;
	while(F < = upper) {
		celsius = 5 * (F—32) / 9;
		printf("%d\t%d\n", F, celsius);
		F = F + step;
	}


}

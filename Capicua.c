# include  < stdio.h >
# include  < stdlib.h >

/ * ejecuta este programa usando el pauser de la consola o agrega tu propio getch, system ("pause") o input loop * /

main () {
	int nro, a, b, c, d, e;
	printf ( " Ingrese un n % c mero de 5 cifras " , 163 ); / * 12321 * /
	printf ( " \ n \ n " );
	scanf ( " % d " , & nro);
	
	e = nro% 10 ; / * 1 * /
	d = nro / 10 % 10 ; / * 2 * /
	c = nro / 100 % 10 ; / * 3 * /
	b = nro / 1000 % 10 ; / * 2 * /
	a = nro / 10000 ; / * 1 * /
	
	if (a == e && d == b) {
		printf ( " \ n Es Capicua " );
	} else {
		printf ( " \ n No es Capicua " );
	}
	return  0 ;
}

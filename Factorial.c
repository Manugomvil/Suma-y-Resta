//Calcular el factorial de un numero
#include <stdio.h>

int main()
{
  int x, c, fact = 1;

  printf("Escribe un n%cmero para calcular su factorial\n",163);
  scanf("%d", &x);
  if (x==0){
  	printf("El factorial de %d = 1\n",x);
  }else{
  
  for (c = 1;c<=x; c++){
    fact = fact * c;}
    printf("El factorial de %d = %d\n", x, fact);
}


  return 0;
}

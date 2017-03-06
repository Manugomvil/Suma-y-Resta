#include"stdio.h"
#include"conio.h"
#include "dos.h"

int numero, u=0,d=0,c=0,m=0,res,aux,max1=0,max2,max3,max4,max,min,ctr;
int main()    
{
    printf("Programa que determina si el numero teclea por el usuario \n es una constante de kaprekar");
    printf("\n Teclea numero entero de 4 digitos \n");
    scanf ("%d",&numero);
    if(numero>999 && numero <=9999)//numero mayor a 4 digitos
{
             printf ("\n ----CALCULANDO-- \n");
    do //ciclo permite calcular hasta obtener la constante a finalizar
    {
            res=0; ctr=0;
            //separando numero
            aux=0;u=0;d=0;c=0;m=0;
           while(numero>10)
           {
           res=numero%10;
            switch(aux)
{
     case 0:{u=res;aux ++ ; break;}
     case 1:{d=res;aux ++ ; break;}
     case 2:{c=res;aux ++ ; break;}
     }
     numero/=10;
     }
     m=numero;//ultimo digito
     //ordenando numero
     max1=u; max2=d; max3=c; max4=m;
     if (max1!=max2||max2!=max3||max3!=max4 )// digitos diferentes
     {
     int k=0;
      do
      {
         if (max1<=max2)
            {
                aux=max1;
                max1=max2;
                max2=aux;
            }
            if(max1>=max2 && max2 <= max3 )
             {
                 aux=max2;
                 max2=max3;
                 max3=aux;
               }
            if (max1>=max2 && max2 >=max3 && max3<=max4)
             {
                 aux=max3;
                 max3=max4;
                 max4=aux;
                      }
             k++;
                      }
   while(k<=3);
   max=max1*1000+max2*100+max3*10+max4;
   min=max4*1000+max3*100+max2*10+max1;
   printf("%d - %d= %d \n",max,min,max-min);
   ctr++;
   numero=max-min;
   if(numero==6174)
   ctr=9;
  else(1000);
}
else
{
    printf ("Error:Los numeros son iguales ");
    ctr=9;
}
}while(ctr<=7);
}
else
{
    printf ("Error: Elnumero no es de 4 digitos");
}

}

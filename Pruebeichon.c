#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    
    int keyquant,x,a,r,keyone,keytwo,num1,num2,l;
    printf("Debes de estar desesperado como para venir a buscar mi ayuda, novato\n");
    printf("\nPrimero, introduce la cantidad de llaves que necesitas\n");
    printf("\nLuego, las llaves, separadas por comas\n");
    scanf("%d", &keyquant);
    for (x=0;x<=keyquant;x++)
    {
        printf("\nAhora, introduzca la llave que necesita\n");
        scanf("%d%d", &keytwo, &keyone);
        l=keyone%a;
        r=0;
        if (keyone<keytwo)
        {
            for(a=0;a<keyone;a++)
            {
                if(l==0)
                r++;
            }
            if (r==2)
            {
                printf("\nNO");
            }
            else
            {
                printf("\nSI");
            }
        }
        else
        {
            for(a=0;a<keytwo;a++)
            {
                if(l==0)
                r++;
            }
            if (r==2)
            {
                printf("\nNO");
            }
            else
            {
                printf("\nSI");
            }
        }
    }
    
    return 0;
}

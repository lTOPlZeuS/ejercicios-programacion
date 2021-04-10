//Jesus Antonio Rocha Vicente

#include <conio.h>
#include <stdio.h>

int main()
{
    int numero,opcion,n,cont;
	do{
        system("cls");
		numero=0;
		cont=0;
        printf( "\n Introduzca un numero maximo a 50: ");
        scanf( "%d",&numero);
        if (numero>50)
        {
            printf("\n  Ingrese un numero debajo de 51 ");
        }
        else
        {   
           
            for ( n = 0; n <= numero; n++)
            {
                cont=cont+n;
            }
                printf(" \n Sumatoria: %d ",cont);
        }
        
    printf("\n\n\n Si desea continuar presione 1  ");
    scanf("%d",&opcion);
    }
    while(opcion==1);                           
    return 0;
}

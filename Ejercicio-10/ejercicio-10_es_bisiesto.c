//Jesus Antonio Rocha Vicente
#include <stdio.h>

int main()
{
    int a,opcion;
    do{
        system("cls");
        printf( "\n   Introduzca un año: ");
        scanf( "%d", &a );
        if ( a % 4 == 0 && a % 100 != 0 || a % 400 == 0 )
            printf( "\n   ES BISIESTO" );
        else
            printf( "\n   NO ES BISIESTO" );
    printf("\n\n\n Si desea continuar presione 1  ");
    scanf("%d",&opcion);
    }while(opcion==1);  
    return 0;
}
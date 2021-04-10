//Jesus Antonio Rocha Vicente

#include <conio.h>
#include <stdio.h>

int main()
{
    int mes,opcion;
    do{
    system("cls");
    printf( "\n   Introduzca mes del a%co: ");
    scanf( "%d", &mes );

    switch ( mes )
    {
        case  0 : 
        printf( "\n Enero" );
        break;
        case  1 : 
        printf( "\n Febrero" );
        break;
        case  2 : 
        printf( "\n Marzo" );
        break;
        case  3 : 
        printf( "\n Abril" );
        break;  
        case  4 : 
        printf( "\n Mayo" );
        break;
        case  5 : 
        printf( "\n Junio" );
        break;
        case  6 : 
        printf( "\n Julio" );
        break;
        case  7 :
        printf( "\n Agosto" );
        break;
        case  8 : 
        printf( "\n Septiembre" );
        break;
        case 9 : 
        printf( "\n Octubre" );
        break;
        case 10 : 
        printf( "\n Noviembre" );
        break;
        case 11 : 
        printf( "\n Diciembre" );
        break;
        default : 
        printf( "\n Digite uno correcto." );
    }
    printf("\n\n\n Si desea continuar presione 1  ");
    scanf("%d",&opcion);
    }while(opcion==1);  
    return 0;
}
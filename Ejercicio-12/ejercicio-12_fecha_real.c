//Jesus Antonio Rocha Vicente
#include <stdio.h>

int main()
{
    int d, m, a, fecha_correcta,opcion;
    do{
    system("cls");
    printf( "\n   Introduzca año: ");
    scanf( "%d", &a );
    printf( "\n   Introduzca mes: ");
    scanf( "%d", &m );
    printf( "\n   Introduzca dia: ");
    scanf( "%d", &d );

    fecha_correcta = 0;

    if ( m >= 1 && m <= 12 )
    {
        switch ( m )
        {
   case  1 :
            case  3 :
            case  5 :
            case  7 :
            case  8 :
            case 10 :
            case 12 : if ( d>= 1 && d <= 31 )
                          printf( "\n   FECHA CORRECTA" );
                      else
                          printf( "\n   FECHA INCORRECTA" );
                      break;

            case  4 :
            case  6 :
            case  9 :
            case 11 : if ( d >= 1 && d <= 30 )
                          printf( "\n   FECHA CORRECTA" );
                      else      
                          printf( "\n   FECHA INCORRECTA" );
                      break;

            case  2 : if( a % 4 == 0 && a % 100 != 0 || a % 400 == 0 )
                          if ( d >= 1 && d<= 29 )
                              printf( "\n   FECHA CORRECTA" );
                          else
                              printf( "\n   FECHA INCORRECTA" );
                      else
                          if ( d >= 1 && d <= 28 )
                              printf( "\n   FECHA CORRECTA" );
                          else
                              printf( "\n   FECHA INCORRECTA" );
        }
    }
    else
        printf( "\n   La fecha no existe" );

    printf("\n\n\n Si desea continuar presione 1  ");
    scanf("%d",&opcion);
    }while(opcion==1);  
    return 0;
}
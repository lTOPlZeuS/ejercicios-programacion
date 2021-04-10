//Jesus Antonio Rocha Vicente
#include <stdio.h>	
int main()
{
    int i, numero,opcion;
    do	
    {
      system("cls");
      printf( "\n   Introduzca la tabla que quiere: ");
      scanf( "%d", &numero );
      printf( "\n   La tabla de multiplicar del %d es:\n", numero );
      for ( i = 1 ; i <= 10 ; i++ )
       {
        printf( "\n   %d * %d = %d", i, numero, i * numero );
		   }
      printf("\n\n\n Si desea continuar presione 1  ");
      scanf("%d",&opcion);
    }while(opcion==1);  
  return 0;
}

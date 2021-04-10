//Jesus Antonio Rocha Vicente

#include <conio.h>
#include <stdio.h>

int main()
{
    int opcion,i;
	do{
        system("cls");
        for (i = 0; i < 101; i+=2)
        {
                printf("\n %d",i);
        }
        
    printf("\n\n\n Si desea continuar presione 1  ");
    scanf("%d",&opcion);
    }
    while(opcion==1);                           
    return 0;
}

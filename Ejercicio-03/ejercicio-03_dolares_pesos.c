//Jesus Antonio Rocha Vicente
#include <conio.h>
#include <stdio.h>

int main()
{
    float peso,dolar,conver;
    int opcion;
    do{
	system("cls");
    printf("Opciones:oprima \n 1-Convertir dolares a pesos \n 2-Convertir pesos a dolares\n	 ");
    scanf("%d",&opcion);
    if (opcion==1)
    {
        printf("Introducir dolares: ");
        scanf("%f",&dolar);
        conver=(dolar*22);
        printf("\n La conversion es %0.3f dolares obtienes %0.3f pesos",dolar,conver);
    }
        if (opcion==2)
    {
        printf("Introcucir pesos: ");
        scanf("%f",&peso);
        conver=(peso/22);
        printf("\n La conversion es %0.3f pesos obtienes %0.3f dolares",peso,conver);
    }
    else
    {
        printf("Opcion no valida");
    }
	printf("\n\n\n Si desea continuar presione 1  ");
    scanf("%d",&opcion);
    }
    while(opcion==1);                           
    return 0;
}

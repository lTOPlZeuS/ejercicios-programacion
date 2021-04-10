//Jesus Antonio Rocha Vicente
#include <conio.h>
#include <stdio.h>

int main()
{
    float medida;
    int opcion;
    do{
    system("cls");
    printf("\n Ingrese la medida de su triangulo: ");
    scanf("%f",&medida);
    medida=medida*3;    
    printf("\n El perimetro es %0.3f",medida);
    printf("\n\n\n Si desea continuar presione 1  ");
    scanf("%d",&opcion);
    }while(opcion==1);                           
    return 0;
}

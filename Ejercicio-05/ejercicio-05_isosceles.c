//Jesus Antonio Rocha Vicente
#include <conio.h>
#include <stdio.h>
int main()
{
    float lado,base,peri;
    int opcion;
    do{
    system("cls");
    printf("\n Ingrese la altura de su triangulo: ");
    scanf("%f",&lado);
    printf("\n Ingrese la base de su triangulo: ");
    scanf("%f",&base);
    peri=(lado+lado)+base;    
    printf("\n El perimetro es %0.3f",peri);
    printf("\n\n\n Si desea continuar presione 1  ");
    scanf("%d",&opcion);
    }while(opcion==1);                    
    return 0;
}
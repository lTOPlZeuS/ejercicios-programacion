//Jesus Antonio Rocha Vicente
#include <conio.h>
#include <stdio.h>
int main()
{
    float lado1,lado2,base,peri;
    int opcion;
    do{
        system("cls");
    printf("\n Ingrese la altura 1 de su triangulo: ");
    scanf("%f",&lado1);
    printf("\n Ingrese la altura 2 de su triangulo: ");
    scanf("%f",&lado2);
    printf("\n Ingrese la base de su triangulo: ");
    scanf("%f",&base);
    peri=lado1+lado2+base;    
    printf("\n El perimetro es %0.3f",peri);
    printf("\n\n\n Si desea continuar presione 1  ");
    scanf("%d",&opcion);
    }while(opcion==1);                    
    return 0;
}
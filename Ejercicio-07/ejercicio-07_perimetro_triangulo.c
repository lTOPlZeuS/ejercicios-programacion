//Jesus Antonio Rocha Vicente
#include <conio.h>
#include <stdio.h>

int main()
{
	int opcion1,opcion;
	do{
	system("cls");
    printf("\n Ingrese \n 1-Triangulo equilatero \n 2-Triangulo isoseles \n 3-Triangulo escaleno \n");
    scanf("%d",&opcion1);
    switch(opcion1){
        case 1:
        equilatero();
        break;

        case 2:
        isosceles();
        break;

        case 3:
        escaleno();
        break;
        default:
        printf("\n Esta opcion no es valida");
    }
    printf("\n\n\n Si desea continuar presione 1  ");
    scanf("%d",&opcion);
    }while(opcion==1);  
    return 0;
}

int equilatero()
{
    float medida;
    printf("\n Ingrese la medida de su triangulo: ");
    scanf("%f",&medida);
    medida=medida*3;    
    printf("\n El perimetro es %0.3f",medida);                        
    return 0;
}

int isosceles()
{
    float lado,base,peri;
    printf("\n Ingrese la altura de su triangulo: ");
    scanf("%f",&lado);
    printf("\n Ingrese la base de su triangulo: ");
    scanf("%f",&base);
    peri=(lado*2)+base;    
    printf("\n El perimetro es %0.3f",peri);                 
    return 0;
}

int escaleno ()
{
    float lado1,lado2,base,peri;
    printf("\n Ingrese la altura 1 de su triangulo: ");
    scanf("%f",&lado1);
    printf("\n Ingrese la altura 2 de su triangulo: ");
    scanf("%f",&lado2);
    printf("\n Ingrese la base de su triangulo: ");
    scanf("%f",&base);
    peri=lado1+lado2+base;    
    printf("\n El perimetro es %0.3f",peri);                   
    return 0;
}

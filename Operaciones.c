#include <stdio.h>
#include <stdlib.h>
/*
Descripcion: mostrar al usuario el menu luego  pedir al usuario que elija una de las cinco operaciones a realizar despues pedir al usuario el valor de los dos operandos a y b y calcular el resultado 
de la operacion seleccionada y despliega el resultado
Datos de entrada : la opciÃ³n elegida del menu y el valor de los dos operandos a y b
Datos de salida:el resultado de la operacionn elegida evaluada con los valores dados de los operandos,o bien un mensaje de error debido a una divisiÃ³n invÃ¡lida o a una opciÃ³n de menÃº invÃ¡lida.
*/
int main()
{	char let;
	int x;
	int y;
	int res;
	printf("1):Sumar (a+b)\n");
	printf("2):Restar (a-b)\n");
	printf("3):Multiplicar (a*b)\n");
	printf("4):Dividir (a/b)\n");
	printf("5):Modulo (a mod b)\n");
	printf("Escoge una operacion\n");
	scanf("%c", &let);
	switch (let)
	{
	case '1': printf("Ingresa los dos operandos\n");
		scanf("%d %d", &x,&y);
		res= x+y;
		printf("El resultado es:%d\n", res);
		break;
	case '2': printf("Ingresa los dos operandos\n");
		scanf("%d %d", &x,&y);
		res= x-y;
		printf("El resultado es:%d\n", res);
		break;
	case '3': printf("Ingresa los dos operandos\n");
		scanf("%d %d", &x,&y);
		res= x*y;
		printf("El resultado es:%d\n", res);
		break;
	case '4': printf("Ingresa los dos operandos\n");
		scanf("%d %d", &x,&y);
		if (y==0)
			printf("El resultado es indeterminado");
		else 
		{
		res= x/y;
		printf("El resultado es:%d\n", res);
		}
		break;
	case 5: printf("Ingresa los dos operandos\n");
		scanf("%d %d", &x,&y);
		if (y==0)
			printf("El resultado no se puede dividir entre cero");
		else
		{
		res= x%y;
		printf("El residuo es:%d\n", res);
		}
		break;
	default: printf("Opcion no valida");
	
	}
	return 0;
}

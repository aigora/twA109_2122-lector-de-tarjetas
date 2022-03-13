#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menu_ppl(int);

int main(void)
{
	int opcion=0;

	menu_ppl(opcion);

	do
	{
		switch (opcion)
		{
		case 1:
			//Parte de código a completar más adelante
			break;
		case 2:
			//Parte de código a completar más adelante
			break;
		case 3:
			//Parte de código a completar más adelante
			break;
		case 4:
			//Parte de código a completar más adelante
			break;
		}
	} while (opcion != 5);

	return 0;
}

int menu_ppl(int opcion)
{
	setlocale(LC_ALL, "es-ES");

	printf("Opciones de búsqueda:\n");
	printf("1-Historial según fecha\n");
	printf("2-Historial de una tarjeta en concreto\n");
	printf("3-Historial de tarjetas aceptadas\n");
	printf("4-Historial de tarjetas denegadas\n");
	printf("5-Salir\n");
	printf("\nIntroduzca opción:");
	scanf_s("%d", &opcion);

	if (opcion < 1 || opcion>5)
	{
		printf("Por favor, introduzca una opción correcta:");
		scanf_s("%d", &opcion);
	}
	return 0;
}
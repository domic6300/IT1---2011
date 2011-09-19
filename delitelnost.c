#include <stdio.h>
#include <stdint.h>

int main()
{
	// Vypíšeme záhlaví
	printf("Dělitelnost 2\n");
	printf("Zadej číslo, které chceš ověřit, zda-li je dělitelné 2\n");
	
	// Deklarujeme proměnnou a	
	int a = 0;

	// Do proměnné a načteme číslo zadané uživatelem (int)
	scanf("%i", &a);

	// Podělíme se zbytkem dvěma
	a %= 2;
	
	if(a == 0) 			// Pokud zbytek == 0 ,  vypíšeme že je dělitelný 2
	{
		printf("Je\n");
	} else {  			// Jinak vypíšeme, že není dělitelný 2
		printf("Není\n");
	}
	
	return 0;
}

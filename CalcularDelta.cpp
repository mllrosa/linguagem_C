/*
	Name: CalcularDelta.cpp
	Author: Rosa Marcella
	Date: 31/08/26 11:36
	Description: Programa para receber tres valores(coeficientes de uma equação do segundo grau) e retornar o valor do delta.
*/

# include <stdio.h>

//Seção de Prototipação
float CalcularDelta(int, int, int);

int main()
{
	int a, b, c;
	a = b = c = 0;
	
	printf("Digite o valor de A:");
	scanf("%d", &a);
	
	printf("Digite o valor de B:");
	scanf("%d", &b);
	
	printf("Digite o valor de C:");
	scanf("%d", &c);
	
	printf("O valor do Delta eh: %.2f", CalcularDelta(a, b, c));
}

float CalcularDelta(int a, int b, int c)
{
	float delta = 0;
	delta = (b*b) - 4 * a * c;
	return delta; 
}

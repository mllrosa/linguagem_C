/*
	Name: Soma.cpp
	Author: Rosa Marcella
	Date: 05/03/26 10:11
	Description: Programa para somar dois números inteiros
*/

# include <stdio.h> //STandarD Input Ouput

//Variaveis
int a, b, soma;

main()
{//inicio

	a = 0; b = 0; soma = 0;
	puts("Programa para somar dois números");
	printf("Digite um número: ");
	scanf("%d", &a);
	
	printf("Digite o segundo número: ");
	scanf("%d", &b);
	
	soma = a + b;
	printf("A soma de %d + %d eh: %d", a, b, soma);	
	
}//fim

/*
	Name: Soma.cpp
	Author: Rosa Marcella
	Date: 05/03/26 10:11
	Description: Programa para somar dois números inteiros
*/

//Variaveis
int a, b, soma;

main()
{//inicio

	a = 0; b = 0; soma = 0;
	printf("Digite um número: ");
	scanf("%d", &a);
	
	pritf("Digite o segundo número: ");
	scanf("%d", &b);
	
	soma = a + b;
	printf("A soma eh: %d", soma);	
	
}//fim

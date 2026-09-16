/*
	Name: PassagemParametroGlobal.cpp
	Author: Rosa Marcella
	Date: 26/08/26 10:26
	Description: Programa para realizar a troca de valores entre variáveis demonstrando o conceito de passagem de parametros tanto por CÓPIA quanto por REFERÊNCIA
*/

# include <stdio.h>

// Seção de prototipação
void Trocar();

// Variáveis globais
int a, b, aux = 77;

main()
{
	a = 5; b = 17;
	
	printf("A: %d", a);
	printf("\nB: %d", b);
	// "%p" para mostrar o ponteiro
	
	Trocar();
	
	printf("\nA: %d", a);
	printf("\nB: %d", b);
	printf("\nAUX: %d", aux);
	
}

// Seção para realizar a troca de valores entre duas variáveis 
void Trocar()
{
	int aux = a;
	a = b;
	b = aux;
}

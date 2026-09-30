/*
	Name: Fibonacci.cpp
	Author: Rosa Marcella
	Date: 30/09/26 09:53
	Description: Programa para exibir a sequência de fibonacci com a quantidade de elementos escolhidos pelo usuário
*/


//sessãodne importação
#include<stdio.h>

//sessão de prototipação
void calcularFibonacci(int);
void imprimirFibonacci(int, int*);
void imprimirNumeroDeOuro(int qtd, int *F);

main()
{
	int qtdElementos = 0;//qtd elementos que serão mostrados
	printf("Quala quantidade de elementos da sequência de Fibonacci devo mostrar? ");
	scanf("%d", &qtdElementos);
	
	calcularFibonacci(qtdElementos);//invoke da função
	
		
}//fim do main

//funçãa para armazenar a sequência de fibonacci em um vetor(array unidimensional)
void calcularFibonacci(int qtd)
{
	int fibo[qtd];//declaração de um vetor do tamanho do que foi digitado pelo usuário
	fibo[0]= 1;//atual
	fibo[1]= 1;//prox

		
	for( int i = 2; i < qtd; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];

	}
	
	imprimirFibonacci(qtd,fibo);
	imprimirNumeroDeOuro(qtd,fibo);
			
}

//Função para imprimir a sequência de fibonacci
void imprimirFibonacci(int qtd, int *F)
{
	puts("\n Conteudo do vetor de fibonacci");
	for(int i =0; i<qtd; i++){
		printf("%d|  ",F[i]);
	}
}

//Função para imprimir a sequência de fibonacci
void imprimirNumeroDeOuro(int qtd, int *F)
{	
	float div = 0.0;
	puts("\n Numero de ouro");
	for(int i = qtd -1; i> 0; i--){
		div = (float)F[i] / F[i-1];
		printf("%.25f|  ", div);
	}
}


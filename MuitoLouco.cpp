
/*
	Name: MuitoLouco.cpp
	Author: Rosa Marcella
	Date: 02/09/26 10:46
	Description: Programa para manipular vetores junto com funções
*/

# include <stdio.h>


//Seção de prototipação
int LerNum();
void ImprimirVetor(int *);

main()
{
	int vet[5];
	
	//	Fazer a carga do vetor
	for(int i = 0 ; i < 5 ; i++)
		vet[i] = LerNum();
		
	ImprimirVetor(vet);
}

//Função para ler e retornar um número digitado pelo usuário
int LerNum()
{
	int num = 0;
	printf("Digite um numero: ");
	scanf("%d", &num);
	return num;
}

//Função para imprimir um vetor
void ImprimirVetor(int *V) // ou void ImprimirVetor(int V[])
{
	puts("\nConteudo do vetor: ");
	//	Imprimindo o conteudo do vetor
	for(int i = 0 ; i < 5 ; i++)
		printf("%d |", *V[i]);
}		



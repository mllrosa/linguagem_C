
/*
	Name: ImprimirContrario.cpp
	Author: Rosa Marcella
	Date: 02/09/26 10:46
	Description: Programa para exibir uma sequência de carácteres do fim para o começo com o uso de uma função
*/

# include <stdio.h>


//Seção de prototipação
void ImprimirContrario(char *);
void ImprimirVetor(char *);

int main()
{
	char vet[20];
//	char letra = 'a';
	
	//	Fazer a carga do vetor
	for(int i = 0 ; i < 20 ; i++)
	{
		printf("Digite: ");
		get("%s", letra);
		vet[i] = letra;
	}

		
	ImprimirVetor(vet);
}

//Função para imprimir um vetor
void ImprimirVetor(char *V) // ou void ImprimirVetor(int V[])
{
	puts("\nConteudo do vetor: ");
	//Imprimindo o conteudo do vetor
	for(int a = 0 ; a < 20 ; a++)
		printf("%s |", V[a]);
}		



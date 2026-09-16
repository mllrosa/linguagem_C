/*
	Name: Palindromo.cpp
	Author: Rosa Marcella
	Date: 09/09/26 10:26
	Description: Programa para identifica se uma string(sequências de carcteres) é um PALÍNDROMO ou nao
*/

# include <stdio.h>
// Prototipação
int VerificarPalindromo(char *);
void RetirarEspaço(char*, char*)

int main()
{
	char palavra[50];
	int tamanho;
	int teste;
	
	
	tamanho = sizeof(palavra)/sizeof(char); // Calcula o tamanho do vetor, nao o da string
	
	printf("Digite uma palavra: ");
	gets(palavra);
	//printf("A palavra digitada eh: %s", palavra);

	teste = VerificarPalindromo(palavra);
	if(teste == 1)
		puts("\n\nEh um Palindromo!");
	else
		puts("\n\nNao eh um Palindromo!");
}

// Função para verificar se a palavra digitada pelo usuario é um palindromo
int VerificarPalindromo(char *P)
{	
	int dir, esq, i;
	for(i = 0; P[i] != '\0'; i++){
		printf("%c|", P[i]);
	}
	
	dir = i - 1;
	esq = 0;
	
	for(i = esq; esq <= dir; i++){
		if(P[esq] != P[dir])
			return 0; //Falso - Não é palindromo
		else{
			esq++;
			dir--;
		}
	}	
	
	//printf("\n\nTamanho da string: %d", i);
	
	return 1; //Verdadeiro - é um palindromo
}

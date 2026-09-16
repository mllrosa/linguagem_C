/*
	Name: Criptografia.cpp
	Author: Rosa Marcella
	Date: 09/09/26 10:26
	Description: Programa para fazer um "merge" entre dois vetores de string
*/

# include <stdio.h>
// Prototipação
void merge(char *, char*);

int main(){
	char nome[30]; char docs[21];
	printf("Digite seu nome completo: ");
	gets(nome);
	
	printf("Digite seu CPF e seu RG: ");
	gets(docs);
	
	merge(nome, docs);
}

//Função para combinar os dois vetores
void merge(char *Nome, char*Docs){
	int j,i; int tam = 0;
	for(i = 0; Nome[i] != '\0'; i++)	{printf("%c|", Nome[i]);}
	printf("\n\nTamanho da string: %d", i);
	
	tam = i+21;
	char crypto[tam];
	
	for(i = 0, j = 0; i < tam;i++){
		if(Nome[i] != '\0'){
			crypto[j] = Nome[i];
			crypto[j+1] = Docs[i];
			j=j+ 2;
		}
			
	}
	
	puts("\n\nConteudo do vetor Crypto: ");
	for(i = 0; i < tam; i++){
		printf("%c|", crypto[i]);
	}
}

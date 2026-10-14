/*
	Name: recursaoI.cpp
	Author: Rosa Marcella
	Date: 14/10/26 11:12
	Description: Programa para demonstrar a utilização de uma função por chamadas recursivas
*/

# include <stdio.h>

// Prototipação
//void funcao1();
void linha(int);
void LerNum();

int cont = 0; // Global

main(){
	//funcao1();
//	int qtde;
//	printf("Qual a quantidade de caracteres para desenhar a linha? ");
//	scanf("%d", &qtde);
//	linha(qtde);
	LerNum();
	
		
}
// Função recursiva para ler números
void LerNum(){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	
	LerNum();
	if(num == 99)
		return;
	
}


// Função recursiva que desenha uma linha com a qtde de carateres escolhida pelo usuario
void linha(int qtde){
	
	if(qtde == 0)
		return;
		
	printf("-");
	
	printf("%d", qtde);
	linha(--qtde); //invoke recursivo
}



// Função recursiva
void funcao1(){
	if(cont == 2000000)
		return;
	printf("-");
	cont++;
	printf("%d", cont);
	funcao1();
}

/*
	Name: recursaoII.cpp
	Author: Rosa Marcella
	Date: 28/10/26 09:58
	Description: Programa para demostrar a recursividade INDIRETA
*/

# include <stdio.h>

// Seção de prototipação
void lerNum();
void analisarNum(int);

main(){
	lerNum();	
}

// Função para ler um numero
void lerNum(){
	int num;
	puts("Digite um numero: ");
	scanf("%d", &num);
	
	analisarNum(num);
}

// Função para analizar um numero
void analisarNum(int num){
	
	if(num==0)
		return;
		
	if(num%2 == 0)
		puts("Numero PAR!");
	else
		puts("Numero IMPAR!!!");
		
	lerNum();
}


/*
	Name: MostrarCalculoFatorial.cpp
	Author: Rosa Marcella
	Date: 14/10/26 11:12
	Description: Programa para realizar o calculo fatorial de um numero por meio de uma função recursiva
*/

# include <stdio.h>

// Prototipação
void MostrarCalculoFatorial(int, int, int);

int num; // Global
int cont = 1;
int calculo = 1;

main(){

	
	printf("O numero para mostrar o calculo fatorial: ");
	scanf("%d", &num);

	MostrarCalculoFatorial(num, cont, calculo);
		
}

// Função para mostrar o calculo fatorial
void MostrarCalculoFatorial(int num, int cont, int calculo){
	
//	calculo = num;
	calculo = calculo + calculo * cont;
	printf("%d! = %d\n", cont, calculo);
	
	if(cont == num){
		printf("%d", calculo);
		return;}
		
	MostrarCalculoFatorial(num, ++cont, calculo);
}

 

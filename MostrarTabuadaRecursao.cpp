/*
	Name: MostrarTabuadaRecursao.cpp
	Author: Rosa Marcella
	Date: 14/10/26 11:12
	Description: Programa para imprimir uma tabuada de multiplicacao por meio de uma função recursiva. O valor é escolhido pelo usuario.
*/

# include <stdio.h>

// Prototipação
void MostrarTabuada(int, int);

int num; // Global
int cont = 0;

main(){

	
	printf("O numero para mostrar a tabuada: ");
	scanf("%d", &num);

	MostrarTabuada(num, cont);
		
}

// Função para mostrar a tabuada
void MostrarTabuada(int num, int cont){
	
	printf("%d x %d = %d \n", num, cont, cont * num);
	
	if(cont == 10){
		return;}
		
	MostrarTabuada(num, ++cont);
}

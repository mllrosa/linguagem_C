/*
	Name: ContagemRegressivaRecursao.cpp
	Author: Rosa Marcella
	Date: 14/10/26 11:12
	Description: Programa para usra uma função recursiva capas de exibir uma contagem regressiva com o usuario escolhendo o numero no main e passando para a recursao. Ao final da contagem, mostrar a mensagem "FOGO!!"
*/

# include <stdio.h>

// Prototipação
void Contar(int);

int num; // Global

main(){

	
	printf("O numero para iniciar a contagem regressiva: ");
	scanf("%d", &num);

	Contar(num);
		
}

// Função para realizar a contagem regressiva
void Contar(int num){
	printf("%d\n", num);
	
	if(num == 0){
		puts("FOGO!!");
		return;}
		
	Contar(--num);
}

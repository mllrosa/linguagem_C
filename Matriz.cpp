/*
	Name: Matriz.cpp
	Author: Rosa Marcella
	Date: 16/09/26 10:46
	Description: Programa para manipular matrizes dentro de uma função
*/

# include <stdio.h>
//Seção de prototipação
void ImprimirMatriz(int [][3]);

int main()
{
	//int vet[] = {6, 13, 89, 20, 45};
	//char semana[]; {"seg", "ter", "quar", "quin", "sex"};
	
	//int mat[3][3]; // Matriz quadrada de ordem 3
	int mat[3][3] = {{7,8,2}, {0,1,4}, {5,6,9}}; //Hardcode
	
	ImprimirMatriz(mat);
	
	
}// Fim do main

//Função para imprimir uma matriz quadrada
void ImprimirMatriz(int M[][3]){
	
	puts("Conteudo da Matriz: ");
	for(int i = 0; i < 3; i++){ //Varia a linha
		for(int j = 0; j < 3; j++)//Varia a coluna
			printf("%d\t", M[i][j]);
		puts("\n");
		}
		
}

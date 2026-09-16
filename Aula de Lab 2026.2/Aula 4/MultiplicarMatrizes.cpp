/*
	Name: MultiplicarMatrizes.cpp
	Author: Rosa Marcella
	Date: 16/09/26 10:46
	Description: Programa para realizar a multiplicação de duas matrizes quadradas de mesma ordem. As matrizes serão carregadas na função main() e passadas para uma função chamada "MultiplicarMAtrizes()" que devera realizar a soma. 
	Em uma função separada, será impressa as duas matrizes (MatA e MatB) e tambem a matriz multi
*/

# include <stdio.h>
//Seção de prototipação
void MultiplicarMAtrizes(int [][3], int [][3], int [][3]);
void ImprimirMatriz(int [][3], int [][3], int [][3]);

int main(){
	int matA[3][3] = {{3,6,2}, {1,4,9}, {5,6,7}};
	int matB[3][3] = {{2,1,9}, {5,3,7}, {8,2,6}};
	int matMulti[3][3];
	
	MultiplicarMAtrizes(matA, matB, matMulti);
	ImprimirMatriz(matA, matB, matMulti);
} 

//SomarMAtrizes
void MultiplicarMAtrizes(int A[][3], int B[][3], int SOMA[3][3]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			SOMA[i][j] = A[i][j] * B[j][i];
		}
		}
}


void ImprimirMatriz(int A[][3], int B[][3], int Multi[3][3]){
	puts("Conteudo da Matriz A: ");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
			printf("%d\t", A[i][j]);
		puts("\n");
		}
		
	puts("Conteudo da Matriz B: ");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
			printf("%d\t", B[i][j]);
		puts("\n");
		}
		
	puts("Conteudo da Matriz MULTI: ");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
			printf("%d\t", Multi[i][j]);
		puts("\n");
		}
		
		
}

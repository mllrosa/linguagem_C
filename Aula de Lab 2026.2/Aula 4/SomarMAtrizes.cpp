/*
	Name: SomarMAtrizes.cpp
	Author: Rosa Marcella
	Date: 16/09/26 10:46
	Description: Programa para realizar a soma de duas matrizes quadradas de mesma ordem. As matrizes serão carregadas na função main() e passadas para uma função chamada "SomarMatrizes()" que devera realizar a soma. 
	Em uma função separada, será impressa as duas matrizes (MatA e MatB) e tambem a matriz soma (MatSoma)
*/

# include <stdio.h>
//Seção de prototipação
void SomarMAtrizes(int [][3], int [][3], int [][3]);
void ImprimirMatriz(int [][3], int [][3], int [][3]);

int main(){
	int matA[3][3] = {{3,6,2}, {1,4,9}, {5,6,7}};
	int matB[3][3] = {{2,1,9}, {5,3,7}, {8,2,6}};
	int matSoma[3][3];
	
	SomarMAtrizes(matA, matB, matSoma);
	ImprimirMatriz(matA, matB, matSoma);
	
} 

//SomarMAtrizes
void SomarMAtrizes(int A[][3], int B[][3], int SOMA[3][3]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			SOMA[i][j] = A[i][j] + B[i][j];
		}
		}
	
}

void ImprimirMatriz(int A[][3], int B[][3], int SOMA[3][3]){
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
		
	puts("Conteudo da Matriz SOMA: ");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
			printf("%d\t", SOMA[i][j]);
		puts("\n");
		}
		
		
}

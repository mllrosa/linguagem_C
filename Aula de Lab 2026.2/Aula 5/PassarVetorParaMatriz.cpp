/*
	Name: PassarVetorParaMatriz.cpp
	Author: Rosa Marcella
	Date: 30/09/26 11:37
	Description: Programa para carregar um vetor com 25 elementos inteiros, passar para uma função e fazer a carga em uma matriz quadrada. Depois imprimir o vetor em uma função e a matriz em outra função
*/

# include <stdio.h>

// Seção de prototipação
void PassarVetorParaMatriz(int mat[][5], int *);
void ImprimirVetor(int *);
void ImprimirMatriz(int mat[][5]);



int main(){
	
	int vet[] = {1,8,4,8,3,8,0,6,3,5,7,8,9,3,2,5,7,9,1,0,7,34,1,4,6};
	int mat[5][5];
	
	PassarVetorParaMatriz(mat, vet);
	ImprimirVetor(vet);
	ImprimirMatriz(mat);
}

PassarVetorParaMatriz(int M[][5], int *V[]){
	int x = -1;
	for(int i = 0; i < 25; i++ ){
		for(int j = 0; j < 25; j++){
			x = x + 1;
			M[i][j] = *V[x];}
	}
}

void ImprimirVetor(int *V){
	int x = -1;
	puts("\n\nConteudo do VETOR:\n");
	for(int x = 0; 0 <25; x++)
		prints("%d|  ", V[x]);
	
}
void ImprimirMatriz(int mat[][5]){
	puts("\n\nConteudo da MATRIZ:\n")
	for(int i = 0; i < 25; i++ )
		for(int j = 0; j < 25; j++ )
			prints("%d|  ", M[i][j]);
	puts("\n");
}


/*
        Name: exibirMediaArredondada.cpp
        Author: Rosa Marcella
        Date: 02/09/26 10:46
        Description: Programa para carregar um vetor com 10 números reais, calcular a média e exibir a média arredondada utilizando três funções.
*/

#include <stdio.h>

// Secão de importação
void carregarVetor(float*);
float calcularMedia(float*);
void exibirMediaArredondada(float);

int main() {
    
    float vet[10];
    
    carregarVetor(vet);
    exibirMediaArredondada(calcularMedia(vet));
    
} // Fim do main

// funcao para carregar um vetor
void carregarVetor(float *vet){
    
    float num = 0.0;
    for(int i = 0; i < 10; i++){
        printf("Digite o %d° numero: ", i + 1);
        scanf("%f", &num);
        vet[i] = num;
    }
}

// funcao para calcular media
float calcularMedia(float *vet){
    float media = 0.0;
    
    for(int a = 0; a < 10; a++){
        float num = 0.0;
        num = vet[a];
        media = media + num;
    }
    
    media = media / 10;
    return media;
}

// funcao para exibir media arredondada
void exibirMediaArredondada(float media){
    printf("A media arredondada eh: %.1f", media);
}

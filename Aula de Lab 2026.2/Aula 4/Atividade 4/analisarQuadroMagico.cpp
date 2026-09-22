/*
        Name: analisarQuadroMagico.cpp
        Author: Rosa Marcella
        Date: 22/09/26 11:46
        Description: Programa para carregar uma matriz quadrada de ordem definida pelo usuário
e determinar se ela é um Quadrado Mágico por meio da função analisarQuadradoMagico().
*/


#include <stdio.h>

// Seção de prototipação
void carregarMatriz(int ordem, int[][ordem]);
void analisarQuadroMagico(int ordem, int[][ordem]);

int main() {
    int ordem = 0; 
    
    printf("Digite um numero para ser a ordem do quadro: ");
    scanf("%d", &ordem);
    
    int mat[ordem][ordem];
    
    carregarMatriz(ordem, mat);
    analisarQuadroMagico(ordem, mat);
}

void carregarMatriz(int Ordem, int M[][Ordem]){
    
    printf("Digite %d numeros para carregar o quadro: \n", Ordem);
    for(int i = 0; i < Ordem; i++)
        for(int j = 0; j < Ordem; j++)
            scanf("%d", &M[i][j]);
}

void analisarQuadroMagico(int Ordem, int M[][Ordem]){
    int soma = 0;
    int status = 0;
    int valor = 0;
    
    for(int r = 0; r < Ordem; r++)
        soma = soma + M[Ordem - 1][r];
    
    //Comparando linhas
    for(int i = 0; i < Ordem; i++){
        valor = 0;
        for(int j = 0; j < Ordem; j++)
            valor = valor + M[i][j];
        
        if(valor != soma)
            status = 1;
    }
    
    //Comparando colunas
    for(int j = 0; j < Ordem; j++){
        valor = 0;
        for(int i = 0; i < Ordem; i++)
            valor = valor + M[i][j];
        
        if(valor != soma)
            status = 1;
    }
    
    //Comparando DP
    valor = 0;
    
    for(int i = 0; i < Ordem; i++){
        for(int j = 0; j < Ordem; j++)
            if(i == j)
                valor = valor + M[i][j];
    }
    
    if(valor != soma)
        status = 1;

    
    //Comparando DS
    valor = 0;
    
    for(int i = 0; i < Ordem; i++){
        for(int j = 0; j < Ordem; j++)
            if(i + j == Ordem - 1)
                valor = valor + M[i][j];
    }
    
    if(valor != soma)
        status = 1;
    
        
    if(status == 0)
        printf("O quadrado digitado EH um QUADRADO MAGICO!");
    else
        printf("O quadrado digitado NAO EH um QUADRADO MAGICO!");
}
/*
        Name: NumeroContrario.cpp
        Author: Rosa Marcella
        Date: 02/09/26 10:46
        Description: Programa para ler um numero inteiro e passar para uma funcao que devera imprimir este numero ao contrario
*/

#include <stdio.h>

// Seção de Prototipação
void imprimirContrario(int);

int main() {
    int num = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    imprimirContrario(num);
}

// funcao para imprimir contario
void imprimirContrario(int num){
    
    while (num > 0) {
        printf("%d", num % 10);
        num = num / 10;
    }
}
/*
        Name: verificarPalindromo.cpp
        Author: Rosa Marcella
        Date: 02/09/26 10:46
        Description: Programa para carregar um vetor com uma frase e passar pra uma função para verificar se é um palindromo.
*/

#include <stdio.h>

// Seção de Prototipação
void verificarPalindromo(char *);

int main() {
    char vet[20];
    
    printf("Digite uma palavra para verificar se ela eh um palindromo: ");
    scanf("%19[^\n]", vet);
    printf("\nA palavra digitada eh: %s", vet);
    verificarPalindromo(vet);
} // Fim do main


// Funcao pare verificar palindromo
void verificarPalindromo(char *vet){
    int letras = 0; int palindromo = 1;

    
    // Descobrindo o tamanho da palavra contando quantas letras ela tem
    while (vet[letras] != '\0') { 
        letras++;}
    
    
    // Verificando se as letras são iguais
    for (int i = 0; i < letras / 2; i++) {
        if (vet[i] != vet[letras - 1 - i])
            palindromo = 0;}
    
    
    // Checando se a o status do palindromo foi alterado
    if (palindromo == 1)
        printf("\n\nA palavra eh um palindromo!");
    else 
        printf("\n\nA palavra nao eh um palindromo!");
}
/*
        Name: Crypto.cpp
        Author: Rosa Marcella
        Date: 02/09/26 10:46
        Description: Programa para carregar um vetor com nome completo e outro com CPF e RG e depois passar para uma fucao que ira criar um novo vetor com texto misturado.
*/

#include <stdio.h>


// Seção de Prototipação
void Criptografar(char *, char *, char *);
void imprimir(char *);

int main() {
    char nome[30], crypto[55], CpfRg[22];
    
    printf("Digite seu nome completo: ");
    scanf("%29[^\n]", nome);
    
    // Retira o Enter do teclado, do buffer
    getchar(); 
    
    printf("Digite seu RG e seu CPF: ");
    scanf("%21[^\n]", CpfRg);
    
    Criptografar(nome, CpfRg, crypto);
    imprimir(crypto);
} // fim do main


// função para criptrografaaah
void Criptografar(char *nome, char *CpfRg, char *crypto) {
    
    for (int i = 0; nome[i] != '\0'; i++) {
        crypto[i * 2] = nome[i];}

    for (int j = 0; CpfRg[j] != '\0'; j++) {
        crypto[j * 2 + 1] = CpfRg[j];}
}


// Função para imprimir o vetor
void imprimir(char *crypto) {
    printf("\nTexto criptografado: %s", crypto);
}
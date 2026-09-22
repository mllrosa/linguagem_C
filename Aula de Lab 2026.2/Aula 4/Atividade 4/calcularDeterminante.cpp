/*
        Name: analisarQuadroMagico.cpp
        Author: Rosa Marcella
        Date: 22/09/26 11:46
        Description: Programa para calcular o determinante de uma matriz quadrada de ordem 3
por meio da função calcularDeterminante() e analisar o resultado
por meio da função analisarDeterminante().
*/

int calcularDeterminante(int[][3]);
void analisarDeterminante(int);

#include <stdio.h>

int main() {
    int mat[3][3] = {{0,2,1}, {-3,1,1}, {4,5,1}};
    int det = 0;

    det = calcularDeterminante(mat);
    analisarDeterminante(det);

    return 0;
}

int calcularDeterminante(int M[][3]){
    int positivo = 0;
    int negativo = 0;
    int i;

    for(i = 0; i < 3; i++)
    {
        positivo += M[0][(i + 0) % 3] *
                    M[1][(i + 1) % 3] *
                    M[2][(i + 2) % 3];

        negativo += M[0][(2 - i + 3) % 3] *
                    M[1][(1 - i + 3) % 3] *
                    M[2][(0 - i + 3) % 3];
    }

    return positivo - negativo;
}


void analisarDeterminante(int Det){
    if(Det >= 0)
        printf("Determinante POSITIVO cujo valor eh igual a: %d", Det);
    else
        printf("Determinante NEGATIVO cujo valor eh igual a: %d", Det);
}
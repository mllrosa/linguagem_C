/*
        Name: determinarMaiorConjunto.cpp
        Author: Rosa Marcella
        Date: 22/09/26 11:46
        Description: Programa para carregar uma matriz quadrada de ordem 5
        e determinar o maior conjunto (dp, ds, adp, abdp, ads, abds)
        por meio da função determinarMaiorConjunto()
*/


#include <stdio.h>

// Seção de prototipação
void determinarMaiorConjunto(int [][5]);

int main() {
    int mat[5][5];

    puts("Para carregar a matriz digite vinte e cinco numeros inteiros: ");

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            scanf("%d", &mat[i][j]);

    determinarMaiorConjunto(mat);
}

void determinarMaiorConjunto(int M[][5]) {
    int dp, ds, adp, abdp, ads, abds;

    dp = ds = adp = abdp = ads = abds = 0;

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++) {

            if(i == j) // Diagonal principal
                dp = dp + M[i][j];

            if(i + j == 5 - 1) // Diagonal secundaria
                ds = ds + M[i][j];

            if(i < j) // Acima da diagonal principal
                adp = adp + M[i][j];

            if(i > j) // Abaixo da diagonal principal
                abdp = abdp + M[i][j];

            if(i + j < 5 - 1) // Acima da diagonal secundaria
                ads = ads + M[i][j];

            if(i + j > 5 - 1) // Abaixo da diagonal secundaria
                abds = abds + M[i][j];
        }

    // dp, ds, adp, abdp, ads, abds

    if(dp >= ds && dp >= adp && dp >= abdp && dp >= ads && dp >= abds)
        printf("\n\nA DIAGONAL PRINCIPAL obteve o maior resultado de soma registrado");

    if(ds >= dp && ds >= adp && ds >= abdp && ds >= ads && ds >= abds)
        printf("\n\nA DIAGONAL SECUNDARIA obteve o maior resultado de soma registrado");

    if(adp >= ds && adp >= dp && adp >= abdp && adp >= ads && adp >= abds)
        printf("\n\nA REGIAO ACIMA DA DIAGONAL PRINCIPAL obteve o maior resultado de soma registrado");

    if(abdp >= ds && abdp >= dp && abdp >= adp && abdp >= ads && abdp >= abds)
        printf("\n\nA REGIAO ABAIXO DA DIAGONAL PRINCIPAL obteve o maior resultado de soma registrado");

    if(ads >= ds && ads >= dp && ads >= abdp && ads >= adp && ads >= abds)
        printf("\n\nA REGIAO ACIMA DA DIAGONAL SECUNDARIA obteve o maior resultado de soma registrado");

    if(abds >= ds && abds >= dp && abds >= abdp && abds >= adp && abds >= ads)
        printf("\n\nA REGIAO ABAIXO DA DIAGONAL SECUNDARIA obteve o maior resultado de soma registrado");
}


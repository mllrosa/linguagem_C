/*
	Name: repitaate.cpp
	Author: Rosa MArcella
	Date: 02/04/26 10:00
	Description: Programa para calcular a múdia de 10 números inteiros
*/

//Seção de importação
#include <stdio.h>

main()
{
	int cont, num, soma;
	float media;
	
	cont = num = soma = 0;	media = 0.0;
	
	puts("Digite 10 numeros inteiros:");
	puts("===========================");
	
	do{
		printf("%do num:", cont+1);
		scanf("%d", &num);
		soma = soma + num; //Acumulador
		cont = cont +1;
	} while(cont <= 5);

	media = soma/cont;
	printf("Media: %.2f", media);
	
}//Fim do programma

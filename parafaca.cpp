/*
	Name: ParaFaça.cpp
	Author: Rosa Marcella
	Date: 02/04/26 10:32
	Description: Programa para calcular a média de 10 números inteiros com para...faça
*/
//Seção de importação
#include <stdio.h>
main()
{
	int num, soma, cont; float media;
	num = soma = 0; media = 0.0;
	
	puts("Digite 10 nuumeros inteiros:");
	puts("============================");
	
	for(cont = 0; cont<10; cont++)
	{
		printf("%d num: ", cont+);
		scanf("%d", &num);
		soma = soma + num;
	}
	
	media= (float) soma/cont;
	printf("A media eh: %.3f", media);
}

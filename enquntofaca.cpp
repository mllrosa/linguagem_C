/*
	Name: EnquantoFaça.cpp
	Author: 
	Date: 02/04/26 10:32
	Description: Programa para calcular a média de 10 números inteiros
*/

//Seção de importação
#include <stdio.h>
main()
{
	int num, soma, cont; float media;
	num = soma = cont = 0; media = 0.0;
	
	puts("Digite 10 nuumeros inteiros:");
	puts("============================");
	
	while(cont<10)
	{
		printf("%d num: ", cont+1);
		scanf("%d", &num);
		soma = soma + num;
		cont = cont +1;
		
	};
	
	media= (float) soma/cont;
	printf("A media eh: %.3f", media);
}

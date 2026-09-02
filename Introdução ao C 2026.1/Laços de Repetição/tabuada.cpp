/*
	Name: tabuada.cpp
	Author: Rosa Marcella
	Date: 02/04/26 10:32
	Description: Programa para exibir a tabuada a partir de um numero fornecido pelo usuário
*/

//Seção de importação
#include <stdio.h>
main()

{
	int num, cont;
	num = 0;
	
	puts("Digite um numero: ");
	puts("==================");
	
	scanf("%d", &num);
	
	for(cont = 0; cont<11; cont = cont+1)
	{
		printf("%d \n", num * cont);

	};
};




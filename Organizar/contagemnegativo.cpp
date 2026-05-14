/*
	Name: contagematenegativo.cpp
	Author: Rosa Marcella
	Date: 02/04/26 10:32
	Description: Programa para receber um valor e exibir uma contagem regressiva até atingir o valor digitado, só que negativo
*/

//2) Com a estrutura (Enquanto...Faça), peça para o usuário digitar um valor e exibir uma contagem regressiva até atingir o valor digitado, só que negativo.

//Seção de importação
#include <stdio.h>
main()
{
	int num, negativo, cont;
	num = cont = negativo = 0;
	
	puts("Digite um numero:");
	puts("=================");
	scanf("%d", &num);
	negativo = num * -1;
	
	while(num >= negativo)
	{
		printf("%d \n", num);
		num--;
		

		
	};
	
}

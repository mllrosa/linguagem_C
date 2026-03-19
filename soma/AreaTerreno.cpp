/*
	Name: AreaTerreno.cpp
	Author: Rosa Marcella
	Date: 05/03/26 11:25
	Description: Programa para calcular a área de um terreno
*/

//Sessão de importção
# include <stdio.h>
# include <locale.h> 

main()
{
	setlocale(LC_ALL, "Portuguese");
	float frente, fundo, area; //Variaveis reais
	frente = fundo = area = 0;
	puts("======================================");
	printf("Digite a medida da frente: ");
	scanf("%f", &frente);
	printf("Digite a medida do fundo: ");
	scanf("%f", &fundo);
	area = frente * fundo;
	printf("A área do terreno é: %.3f", area);

	
}//fim

/*
	Name: ContagemregressivaParaFaça.cpp
	Author: Rosa Marcella
	Date: 02/04/26 10:32
	Description: Programa para fazer contagem regressiva
*/

//1) utilizando o laço de repetição (repita...até) moatre uma contagem regressiva até chegar em 0 para o lançamento de um foguete. O programa deverá mostrar ao final a palavra "FOGO!";

//Seção de importação
#include <stdio.h>
main()

{
	int cont; cont = 1000;
	puts("Iniciando contagem regressiva!");

	do{
		printf("%d \n", cont );
		
		cont = cont -1;
	} while(cont > 0);
	puts("FOGO!");
}

/*
	Name: VetorBinario.cpp
	Author: Rosa Marcella
	Date: 14/05/26 10:22
	Description: Programa para carregar um vetor com elementos positivos e negativos e copiar pra um novo vetor transformando em binario
*/

# include <stdio.h>

main()
{
	int numeros[12], binario[12];
	int x = 0;
	
	puts("Carregue o vetor com 12 numeros positivos ou negativos");
	
	for( x ; x < 12 ; x++ ) 
		scanf("%d", &numeros[x]);
		
	
	//Gerando vetor de binarios - 0's e 1's
	x = 0;
	while(x < 12) {
		if(numeros[x] < 0)
			binario[x] = 0;
		else 
			binario[x] = 1;
		
	}
	
	// Impressão do vetor numeros
	puts("\n\nConteudo do vetor Numeros:");
	for(x = 0 ; x < 12 ; x ++)
		printf("%d|", numeros[x]);
		
	// Impressão do vetor binario
	puts("\n\nConteudo do vetor Binario:");
	for(x = 0 ; x < 12 ; x ++)
		printf("%d|", binario[x]);

}//Fim do programa
// putc("");
// puta("");
// puts("");

/*
	Name: Vetor1.cpp
	Author: Rosa Marcella
	Date: 14/05/26 10:22
	Description: Programa para realizar operações com arrays unidimencionais (vetor)
*/

# include <stdio.h>

main()
{
	int vet[10], i;
	puts("Digite 10 numeros inteiros:");
	i = 0;
	
	//Fazer a carga do vetor com 10 N°s inteiros
	do {
		printf("Digite o %do numero:", i+1 );
		scanf("%i", & vet[i]);
		i++;
		
		
	} while(i < 10);
	puts("\n\n===> Conteudo do vetor <===");
	i = 0;
	
	while(i<10) {
		printf("%d|", vet[i]); //pipe    
		i++;
 	}

	puts("\n\nConteudo do vetor ao contrario: ");
	for( i=9 ; i>=0 ; i--) 
		printf("%d|", vet[i]);
		
	
	
}
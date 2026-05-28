/*
	Name: Matriz.cpp
	Author: Rosa Marcella
	Date: 28/05/26 11:19
	Description: Programa para fazer uma carga em uma matriz quadrada de ordem 3.
*/

# include <stdio.h>

main()
{
	int mat[3][3];
	int i, j;
	i = j = 0;
	
	puts("Digite 9 numeros inteiros: ");
	
	do 
	{
		
		do 
		{
			printf("[%d][%d]:", i, j);
			scanf("%d", &mat[i][j]);
			j = j + 1;
		} while(j < 3);
	j = 0;
	i = i + 1;
		
	}while(i < 3);
	
//	//Exibindo o conteúdo da matriz
//	puts("\n\n Conteudo da Matriz: ");
//	for(i = 0; i < 3; i++) 
//	{
//		for(j = 0; j < 3; j++)
//			printf("%d\t", mat[i][j]);
//	puts("\n");
//	}


//	//Exibindo os elementos da diagonal principal
//	puts("Elementos da diagonal principal(DP)");
//	for(i = 0; i < 3; i++) 
//	{
//		for(j = 0; j < 3; j++)
//			if(i == j)
//				printf("%d|", mat[i][j]);
//	}		
			

//	//Exibindo os ACIMA elementos da diagonal principal
//	puts("Elementos ACIMA da diagonal principal(DP)");
//	for(i = 0; i < 3; i++) 
//	{
//		for(j = 0; j < 3; j++)
//			if(i < j)
//				printf("%d|", mat[i][j]);
//	}	


//	//Exibindo os ABAIXO elementos da diagonal principal
//	puts("Elementos ABAIXO da diagonal principal(DP)");
//	for(i = 0; i < 3; i++) 
//	{
//		for(j = 0; j < 3; j++)
//			if(i > j)
//				printf("%d|", mat[i][j]);
//	}


//	//Exibindo os elementos da diagonal SECUNDARIA
//	puts("Elementos da diagonal SECUNDARIA");
//	for(i = 0; i < 3; i++) 
//	{
//		for(j = 0; j < 3; j++)
//			if(i + j == 3 + 1)
//				printf("%d|", mat[i][j]);
//	}

//	//Exibindo os elementos ABAIXO da diagonal SECUNDARIA
//	puts("Elementos ABAIXO da diagonal SECUNDARIA");
//	for(i = 0; i < 3; i++) 
//	{
//		for(j = 0; j < 3; j++)
//			if(i + j > 3 - 1)
//				printf("%d|", mat[i][j]);
//	}

	//Exibindo os elementos ACIMA da diagonal SECUNDARIA
	puts("Elementos ACIMA  da diagonal SECUNDARIA");
	for(i = 0; i < 3; i++) 
	{
		for(j = 0; j < 3; j++)
			if(i + j < 3 - 1)
				printf("%d|", mat[i][j]);
	}

}


// ========================================================= meio metade

/*
	Name: Matriz.cpp
	Author: Rosa Marcella
	Date: 28/05/26 11:19
	Description: Programa para fazer uma carga em uma matriz quadrada de ordem 3.
*/

# include <stdio.h>

main()
{
	int mat[3][3];
	int i, j, somadp, soma_adp;
	i = j = somadp = soma_adp = 0;
	
	puts("Digite 9 numeros inteiros: ");
	
	do 
	{
		
		do 
		{
			printf("[%d][%d]:", i, j);
			scanf("%d", &mat[i][j]);
			j = j + 1;
		} while(j < 3);
	j = 0;
	i = i + 1;
		
	}while(i < 3);
	
//	//Exibindo o conteúdo da matriz
//	puts("\n\n Conteudo da Matriz: ");
//	for(i = 0; i < 3; i++) 
//	{
//		for(j = 0; j < 3; j++)
//			printf("%d\t", mat[i][j]);
//	puts("\n");
//	}


//	//Exibindo os elementos da diagonal principal
//	puts("Elementos da diagonal principal(DP)");
//	for(i = 0; i < 3; i++) 
//	{
//		for(j = 0; j < 3; j++)
//			if(i == j)
//				printf("%d|", mat[i][j]);
//	}		


//	//Exibindo os elementos da diagonal principal E A SOMA DELES
//	puts("Elementos da diagonal principal(DP)");
//	for(i = 0; i < 3; i++) 
//	{
//		for(j = 0; j < 3; j++)
//			if(i == j){
//			somadp = somadp + mat[i][j];
//			printf("%d|", mat[i][j]);
//			}
//	} printf("\n\n|%d|", somadp);
			

	//Exibindo os ACIMA elementos da diagonal principal E A SOMA DELES
	puts("Elementos ACIMA da diagonal principal(DP)");
	for(i = 0; i < 3; i++) 
	{
		for(j = 0; j < 3; j++)
			if(i < j){
			soma_adp = soma_adp + mat[i][j];
			printf("%d|", mat[i][j]);
			}
	} printf("\n\n|%d|", soma_adp);


//	//Exibindo os ABAIXO elementos da diagonal principal
//	puts("Elementos ABAIXO da diagonal principal(DP)");
//	for(i = 0; i < 3; i++) 
//	{
//		for(j = 0; j < 3; j++)
//			if(i > j)
//				printf("%d|", mat[i][j]);
//	}


//	//Exibindo os elementos da diagonal SECUNDARIA
//	puts("Elementos da diagonal SECUNDARIA");
//	for(i = 0; i < 3; i++) 
//	{
//		for(j = 0; j < 3; j++)
//			if(i + j == 3 + 1)
//				printf("%d|", mat[i][j]);
//	}

//	//Exibindo os elementos ABAIXO da diagonal SECUNDARIA
//	puts("Elementos ABAIXO da diagonal SECUNDARIA");
//	for(i = 0; i < 3; i++) 
//	{
//		for(j = 0; j < 3; j++)
//			if(i + j > 3 - 1)
//				printf("%d|", mat[i][j]);
//	}

//	//Exibindo os elementos ACIMA da diagonal SECUNDARIA
//	puts("Elementos ACIMA  da diagonal SECUNDARIA");
//	for(i = 0; i < 3; i++) 
//	{
//		for(j = 0; j < 3; j++)
//			if(i + j < 3 - 1)
//				printf("%d|", mat[i][j]);
//	}

}
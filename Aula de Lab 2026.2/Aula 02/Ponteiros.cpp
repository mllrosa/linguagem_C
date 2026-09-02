/*
	Name: Ponteiros.cpp
	Author: Rosa Marcella
	Date: 26/08/26 10:26
	Description: Programa para manipular ponteiros
*/

# include <stdio.h>



//main()
//{
//	int a = 555;
//	int *ptrA = &a;
//	
//	printf("A: %d", a);
//	printf("\n\nConteudo apontado por ptrA: %d", *ptrA);
//	printf("\n\nEndereco de A: %p", &a);
//	printf("\n\nEndereco de ptrA: %p", &ptrA);
//	
//}


main()
{
	short int vetor[20];
	for(int i = 0; i < 20; i ++)
	printf("%p|", &vetor[i]);
	
}

//double | long int | 

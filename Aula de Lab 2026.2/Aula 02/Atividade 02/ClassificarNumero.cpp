/*
	Name: ClassificarNumero.cpp
	Author: Rosa Marcella
	Date: 31/08/26 10:54
	Description: Programa para ler um número inteiro, passar pra uma função e ela deve emitir uma mensagem informando se o número é positivo, negativo ou nulo
*/

# include<stdio.h>

//Seção de importação
void ClassificarNumero(int);

int main()
{
	int num = 0;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", & num);
	
	ClassificarNumero(num);
	
}

void ClassificarNumero(int num)
{
	
	if(num == 0)
		printf("\nO numero digitado eh NULO!");
	else
		if(num > 0)
			printf("\nO numero digitado eh POSITIVO!");
		else
			printf("\nO numero digitado eh NEGATIVO!");
		
}

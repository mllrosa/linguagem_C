/*
	Name: MariorMenor.cpp
	Author: Rosa Marcella
	Date: 19/03/26 09:56
	Description: Programa para identificar qual dos dois numeros lidos é o maior
*/
//seção de importaçõo
#include <stdio.h>

main()
{

int a, b;
a = b = 0;
puts("Programa para determinat qual o maior numero");
puts("============================================");
printf("Digite o primeiro numero: "); scanf("%d", &a);
printf("Digite o segundo numero"); scanf("%d", &b);
	if(a>b)
		printf("O %d eh o mior", a);
	
	else if(a<b)
		printf("O %d eh o maior numero lido", b);
		
		else
			puts("Os dois numeros sao iguais!");
		
}

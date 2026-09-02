/*
	Name: PerímetroCircunferência.cpp
	Author: 
	Date: 05/03/26 11:50
	Description: Programa para calcular perímetro pircunferência
*/

// Sessão de importação 
# include <stdio.h>
# include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float raio, pi, perimetro;
	raio = perimetro = 0.0;	pi = 3.1416;
	puts("Programa para calcular perímetro pircunferência");
	printf("Digite o raio:");
	scanf("%f", &raio);
	
	perimetro = pi * 2 * raio;
	printf("O resultado é: %f", perimetro );
}

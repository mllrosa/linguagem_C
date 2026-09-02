/*
	Name: ConverterTemperatura.cpp
	Author: Rosa Marcella
	Date: 31/08/26 11:18
	Description: Programa para receber uma temperatura em graus Celsius e retornar o valor convertido em Fahrenheit
*/


# include <stdio.h>

//Seção de Prototipação
float ConverterTemperatura(float);

int main()
{
	float temp = 0.0;
	
	printf("Digite a temperatura em graus Celsius para converter em Fahrenheit:");
	scanf("%f", &temp);
	
	printf("\n %.2f graus Celsius convertido em Fahrenheit eh igual a: %.2f", temp, ConverterTemperatura(temp));
}

float ConverterTemperatura(float temp)
{
	temp = temp * 1.8 + 32;
	return temp;
}

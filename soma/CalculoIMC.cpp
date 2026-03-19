/*
	Name: CalculoIMC
	Author: Rosa Marcella
	Date: 05/03/26 12:29
	Description: Programa para calcular IMC com base no peso e altura
*/
 
 // Sessão de importação
 #include <stdio.h>
 #include <locale.h>
 
 main()
 {
 	setlocale(LC_ALL,"Portuguese");
 	float peso, altura, imc;
 	peso = altura = imc = 0.0;
 	
 	puts("Programa para calcular IMC com base no peso e altura");
 	printf("Digite seu peso:");
 	scanf("%f", &peso);
 	printf("Digite sua altura:");
 	scanf("%f", &altura);
 	
 	imc = peso/(altura*altura);
 	printf("Seu imc é: %.3f", imc);

}

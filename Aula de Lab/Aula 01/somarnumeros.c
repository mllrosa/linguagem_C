/*
	Name: SomaNumeros.cpp
	Author: Rosa Marcella 
	Date: 19/08/26 09:55
	Description: Programa para somar dois números por meio de uma fanção.
*/

 # include <stdio.h>
 # include <locale.h>
# include <math.h>
 
//Seção de prototopação
int somar(int, int);
int subtrair(int, int);
int multiplicar(int, int);
float dividir(int, int);
int CalcularPotencia(int, int);
int CalPot(int, int);
float CalcularRaiz(int);
 
 main()
 {
 	setlocale(LC_ALL,"Portuguese");
 	int a, b;
 	a = b = 0;
 	
 	printf("Digite o valor de A:");
	scanf("%d", &a);
	
	printf("Digite o valor de B:");
	scanf("%d", &b);
	
	printf("\n a soma de %d e %d é  igual a: %d", a, b, somar(a, b));
	printf("\n a subtração de %d e %d é  igual a: %d", a, b, subtrair(a, b));
	printf("\n a multiplicação de %d e %d é  igual a: %d", a, b, multiplicar(a, b)); 
	printf("\n a divisão de %d e %d é  igual a: %f", a, b, dividir(a, b)); 
	printf("\n o calculo da potência de de %d e %d é  igual a: %d", a, b, CalcularPotencia(a, b));
 	printf("\n o calculo da potência de de %d e %d é  igual a: %d", a, b, CalPot(a, b));
 	printf("\n o calculo da raiz quadrada de de %d: %f", a, CalcularRaiz(a));
 	
 }//fim do programa
 
  // Função para realizar a soma de dois numeros inteiros
 int somar(int a, int b)
 {
 	int result = 0;
 	result = a + b;
 	return result;
 }
 
   // Função para realizar a subtracao de dois numeros inteiros
   
 int subtrair(int a, int b)
 {
 	int result = 0;
 	result = a - b;
 	return result;
 }
 
   // Função para realizar a multiplicação de dois numeros inteiros
 int multiplicar(int a, int b)
 {
 	int result = 0;
 	result = a * b;
 	return result;
 }
 
// Função para realizar a divisao de dois numeros inteiros
 float dividir(int a, int b)
 {
 	float result = 0.0;
 	result = (float)a / b; //Casting
 	return result;
 }
 
 // Função para realizar o calculo da potencia de dois numeros inteiros
 int CalcularPotencia(int a, int b)
 {
 	int result = 1;
 	
	do { result = result * a;
	b = b - 1;
	} while(b > 0);
 	
 	return result;
 }
 
    // Função para realizar o calculo da potencia de dois numeros inteiros com funcao nativa pow
 int CalPot(int a, int b)
 {
 	return pow(a, b);
 }
 
     // Função para realizar o calculo da rais com sqrt(square root)
 float CalcularRaiz(int a)
 {
 	return (float)sqrt(a);
 }
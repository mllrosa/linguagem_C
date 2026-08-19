/*
	Name: Funcoes.cpp
	Author: Rosa Marcella
	Date: 19/08/26 12:13
	Description: Programa para demonstrar o uso e recursos da linguagem C por meio de funcoes
*/

//Seção de importação
 # include <stdio.h> // Entrada e saida padrão
 
 //sção de prototipação
void linha();
void linha2(int);
void LerNumero();
  
 main()
 {
 	linha();
 	linha2(5);
 	
 	printf("A soma de %d + %d = %d", LerNumero(), LerNumero(), LerNumero() + LerNumero());

 	
 }// Fim do main
 
 void linha()
 {
 	puts("============== (^///^) ============== \n \n");
 };
 
  void linha2(int a)
 {
 	for(int i = 0;i < a; i++) 
 	printf("(^///^)   ");
 };
 
 //Função para ler um numero digitado pelo usuario
 void LerNumero()
 {
 	int numero = 0;
 	printf("Digite um numero: ");
 	scanf("%d", & numero);
 	return numero;
 }
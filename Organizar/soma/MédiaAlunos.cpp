/*
	Name: MédiaAluno
	Author: Rosa Marcella
	Date: 05/03/26 12:12
	Description: Programa para calcular média dos alunos
*/
 
 // Sessão de importação
 #include <stdio.h>
 #include <locale.h>
 
 main()
 {
 	setlocale(LC_ALL,"Portuguese");
 	float nota1, nota2, nota3, nota4, media;
 	nota1 = nota2 = nota3 = nota4 = media = 0;
 	
 	puts("Programa para calcular a média dos alunos");
 	printf("Digite a primeira nota: ");
 	scanf("%f", &nota1);
 	
 	printf("Digite a segunda nota: ");
 	scanf("%f", &nota2);
 	
 	printf("Digite a terceira nota: ");
 	scanf("%f", &nota3);
 	
 	printf("Digite a quarta nota: ");
 	scanf("%f", &nota4);
 	
 	media = (nota1 + nota2 + nota3 + nota4)/4;
 	printf("A média é: %.3f", media);
 	
 	printf("\n\nFim do programa!");
 	
 }

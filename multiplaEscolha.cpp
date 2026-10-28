/*
	Name: multiplaEscolha.cpp
	Author: Rosa Marcella
	Date: 28/10/26 09:58
	Description: Programa para demonstrar a multipla escolha com a estrutura swtchi...case
*/

# include <stdio.h>
# include <windows.h>

main(){
	while(1){
		int opc = 0;
		puts("-----------------");
		puts("1 - Voce digitou o numero 1\n2 - Voce digitou o numero 2\n3 - Voce digitou o numero 3\n 0 - Encerrar o programa");
		puts("-----------------\n");
		puts("Ecolha sua opcao:");
		scanf("%d", &opc);
		
	
		switch(opc){
			case 1: puts("Usuario digitou o numero 1\n");
					break;
			
			case 2: puts("Usuario digitou o numero 2\n");
					break;
			
			case 3: puts("Usuario digitou o numero 3\n");
					break;
					
			case 0: exit(0);
					
			default: puts("Opcao invalida - REDIGITE!");
		} // Fim do switch
		
		system("pause");
		system("cls");
	
	} // Fim do while
	
} // Fim do main


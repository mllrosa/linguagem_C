/*
	Name: operacoesFinanceiras.cpp
	Author: Rosa Marcella
	Date: 28/10/26 09:58
	Description: Programa para realizar operacoes financeiras em uma conta corrente de um cliente com operacoes (Consultar saldo, Realizar deposito, Efetuar saque, Trocar senha)
*/

# include <stdio.h>
# include <windows.h>
# include <string.h>


// Seção de prototipação
void consultarSaldo();
void realizarDeposito();
void efetuarSaque();
void trocarSenha();
void verConta();
void verSenha();

// Variaveis globais
int conta = 507810;
char user[] = "ROSA"; int senha = 1234; int cont = 1;

float saldo = 13.00; int AA;

main(){
	while(1){
		int opc = 0;
		puts("-----------------");
		puts("1 - Consultar saldo\n2 - Realizar deposito\n3 - Efetuar saque\n4 - Trocar senha\n0 - Encerrar o programa");
		puts("-----------------\n");
		puts("Ecolha sua opcao:");
		scanf("%d", &opc);
		
	
		switch(opc){
			case 1: 
					verConta();
					consultarSaldo();
					break;
			
			case 2: 
					verConta();
					realizarDeposito();
					break;
			
			case 3: 
					verConta();
					efetuarSaque();
					break;
					
			case 4: 
					verConta();
					trocarSenha();
					break;
					
			case 0: exit(0);
					
			default: puts("Opcao invalida - REDIGITE!");
		} // Fim do switch
		
		system("pause");
		system("cls");
	
	} // Fim do while	
}

void consultarSaldo() // 1 
{
	system("cls");
	printf("Seu SALDO eh: R$ %.2f \n\n", saldo);
}

void realizarDeposito() // 2
{
	system("cls");
	
	float valor = 0.0;
	printf("Digite o valor do DEPOSITO: ");
	scanf("%f", &valor);
	saldo = saldo + valor;
	
	consultarSaldo();
}


void efetuarSaque() // 3
{
	system("cls");
	
	float valor = 0.0;
	printf("Digite o valor do SAQUE: ");
	scanf("%f", &valor);
		if(valor > saldo){
			printf("Saldo insuficiente. REDIGITE!\n");
			efetuarSaque();}
		
		else{
			saldo = saldo - valor;
			printf("Saque efetuado!\nSaldo disponivel: %.2f.", saldo);
		}
		
}

void trocarSenha() // 4
{	
	AA = 4;
	puts("Para proseguir digite sua senha: ");
	verConta();
	puts("utyfi");
	system("cls");
	
	
//	int pwd;
//	printf("Digite a nova senha: ");
//	
//	puts("AA");
}


// Função para verificar login do usuario
void verConta(){
	system("cls");
	int numConta = 0;
	puts("Para prosseguir digite o numero da conta: ");
	scanf("%d", &numConta);
	
		if(numConta == conta)
			verSenha();
		else
			verConta();
}


// Função para a verificação da senha
void verSenha(){
	int pwd; //password
	
	puts("Senha: ");
	scanf("%d", &pwd);
	
	if(pwd == senha && AA == 4)
		AA = 1234;
		return;
	
	if(pwd == senha)
		puts("Login efetuado com sucesso!");
	else
		if(cont == 3){
		cont = 0;
		puts("Senha errada 3 vezes! Identifique o usuario novamente.\n");
		fflush(stdin); // limpa o buffer do teclado
		verConta();
		}

		else{
			cont++;
			verSenha();
		}
}


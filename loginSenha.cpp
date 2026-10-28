/*
	Name: loginSenha.cpp
	Author: Rosa Marcella
	Date: 28/10/26 09:58
	Description: Programa para simular o login e senha por meio de recursividade indireta
*/

# include <stdio.h>
# include <string.h>

// Seção de prototipação
void verLogin();
void verSenha();

// Variaveis globais
char user[] = "ROSA"; int senha = 1234; int cont = 1;

main(){
	verLogin();	
}

// Função para verificar login do usuario
void verLogin(){
	char login[20];
	puts("Login: ");
	gets(login);
	
		if(strcmp(login, user) == 0) //string compare
			verSenha();
		else
			verLogin();
}


// Função para a verificação da senha
void verSenha(){
	int pwd; //password
	puts("Senha: ");
	scanf("%d", &pwd);
	
	if(pwd == senha)
		puts("Login efetuado com sucesso!");
	else
		if(cont == 3){
		cont = 0;
		puts("Senha errada 3 vezes! Identifique o usuario novamente.\n");
		fflush(stdin);
		verLogin();
		}

		else{
			cont++;
			verSenha();
		}
}




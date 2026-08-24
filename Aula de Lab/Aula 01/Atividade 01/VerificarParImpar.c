/*
        Name: VerificarParImpar.cpp
        Author: Rosa Marcella
        Date: 22/08/26 11:55
        Description: Programa para fazer verificação de um número por meio de uma função.
*/

# include <stdio.h>
# include <locale.h>

// Seção de prototipação
int lerNum(void);
void verificarParImpar(int);

int main(void)
{
    setlocale(LC_ALL,"portuguese");
    
    verificarParImpar(lerNum());
    
} // Fim do main 

int lerNum(void)
{
    int num = 0;
    printf("Digite um número:");
    scanf("%d", &num);
    return num;
}

void verificarParImpar(int num)
{    
    int quoc, resto;
    quoc = resto = 0;
    
    quoc = num / 2;
    resto = num -(quoc*2);
    
    if(resto == 0)
        printf("%d é par!", num);
    else
        printf("%d é ímpar!", num);
}
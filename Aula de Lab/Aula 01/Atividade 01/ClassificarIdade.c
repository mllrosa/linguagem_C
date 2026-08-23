/*
        Name: ClassificarIdade.cpp
        Author: Rosa Marcella
        Date: 22/08/26 17:54
        Description: Programa para classificar idade por meio de uma função.
*/

# include <stdio.h>
# include <locale.h>

// Seção de prototipação
void ClassificarIdade(char[100], int);

int main(void)
{
    setlocale(LC_ALL,"portuguese");
    char nome[100];
    int idade = 0;

    printf("Para classificar sua idade, digite seu nome:");
    fgets(nome, 100, stdin);

    printf("\nDigite sua idade:");
    scanf("%d", &idade);

    ClassificarIdade(nome, idade);

} // Fim do main 

void ClassificarIdade(char nome[100], int idade)
{
    if(idade < 3)
        printf("\n%s, você tem %d anos e sua classificação etária é: Bebê.", nome, idade);
        
    else if(idade < 12)
        printf("\n%s, você tem %d anos e sua classificação etária é: Criança.", nome, idade);
    
    else if(idade < 19)
        printf("\n%s, você tem %d anos e sua classificação etária é: Adolescente.", nome, idade);
    
    else if(idade < 59)
        printf("\n%s, você tem %d anos e sua classificação etária é: Adulto.", nome, idade);
    
    else if(idade < 90)
        printf("\n%s, você tem %d anos e sua classificação etária é: Idoso.", nome, idade);
    
    else
        printf("\n%s, você tem %d anos e sua classificação etária é: Matusalém.", nome, idade);
}

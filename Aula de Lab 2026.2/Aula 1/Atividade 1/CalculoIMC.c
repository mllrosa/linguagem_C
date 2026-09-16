/*
        Name: CalcularIMC.cpp
        Author: Rosa Marcella
        Date: 22/08/26 11:55
        Description: Programa para calcular IMC por meio de uma função.
*/

# include <stdio.h>
# include <locale.h>

// Seção de prototipação
void CalcularIMC(char[100], float, float);

int main(void)
{
    setlocale(LC_ALL,"portuguese");
    char nome[100];
    float peso, altura;
    
    peso = altura = 0.0;
    
    printf("Para calcular seu IMC, digite seu nome:");
    scanf("%100[^\n]", nome);

    
    printf("\nDigite seu peso:");
    scanf("%f", &peso);
    
    printf("\nDigite sua altura:");
    scanf("%f", &altura);
    
    CalcularIMC(nome, peso, altura);
    
} // Fim do main 

void CalcularIMC(char nome[], float peso, float altura)
{
    float imc = 0.0;
    imc = peso/(altura*altura);
    printf("\n%s, seu peso é %.2fkg, sua altura é %.2fm e seu IMC é %f.", nome, peso, altura, imc);
    return 0;
}
    
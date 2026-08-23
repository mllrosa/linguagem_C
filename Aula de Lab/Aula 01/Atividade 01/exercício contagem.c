/*
        Name: ContagemRegressiva.cpp
        Author: Rosa Marcella
        Date: 22/08/26 11:55
        Description: Programa para fazer contagem regressiva por meio de uma função.
*/

# include <stdio.h>
# include <locale.h>

// Seção de prototipação
void Contar(int);

int main(void)
{
    setlocale(LC_ALL,"portuguese");
    int num = 0;
    
    printf("Para fazer uma contagem regressiva digite um número:");
    scanf("%d", &num);
    
    Contar(num);
    
} // Fim do main 

void Contar(int num)
{
    int inicio = num;
    for(inicio ; inicio >= 0 ; inicio--)
    {
        if(inicio >= 0)
            printf("\n%d!", inicio);
    }
    printf("\nFOGO!!!");
}
    
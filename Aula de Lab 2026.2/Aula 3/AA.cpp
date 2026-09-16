
/*
	Name: ImprimirContrario.cpp
	Author: Rosa Marcella
	Date: 02/09/26 10:46
	Description: Programa para receber um vetor com 6 notas de um aluno e calcular sua média aritmética apontando se ele foi aprovado ou não em uma outra função especifica para tal
*/

# include <stdio.h>


//Seção de prototipação
float calcularMedia(float *);
void analisarMedia(float);

int main()
{
	
	float vet[6]; float media = 0.0;
	
	printf("Digite 6 notas: \n");
	//	Fazer a carga do vetor
	for(int i = 0 ; i <= 5 ; i++)
	{
		float num = 0.0;
		scanf("%f", &num);
		vet[i] = num;
	}
	
	media = calcularMedia(vet);
	analisarMedia(media);
		
}

//Função para imprimir um vetor ao contario
float calcularMedia(float *vet)
{
	float media = 0.0;
	for(int i = 0 ; i < 6 ; i++)
		media = media + vet[i];
		return media /6;
}		

void analisarMedia(float media)
{
	if(media >= 6)
		printf("Aprovado!");
	else if(media < 6)
		printf("Exame!");
	else
		printf("Reprovado!");
}


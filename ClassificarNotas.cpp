/*
	Name: ClassificarNotas.cpp
	Author: Rosa Marcella
	Date: 31/08/26 11:51
	Description: 
*/

//4) (Desafio) Um professor, muito legal, fez 3 provas durante um semestre mas só vai levar em conta as duas notas mais altas para calcular a média.
//Faça uma aplicação em C que peça o valor das 3 notas, passepara uma função e mostre como seria a média comessas 3 provas, a média com as 2 notas mais altas,
// bem como sua nota mais altaesuanota mais baixa. 




# include <stdio.h>

//Seção de Prototipação
void ClassificarNotas(float *nota1, float *nota2, float *nota3, float *PrimeiraNota, float *SegundaNota, float *MediaPrimeiraSegundaNota, float *MediaTotal, float *TerceiraNota);

int main()
{
	float nota1, nota2, nota3;
	nota1 = nota2 = nota3 = 0.0;
	
	float PrimeiraNota,	SegundaNota, MediaPrimeiraSegundaNota, MediaTotal, TerceiraNota;
	PrimeiraNota = SegundaNota = MediaPrimeiraSegundaNota = MediaTotal = TerceiraNota = 0.0;
	
	printf("Digite a nota da sua primeira prova: ");
	scanf("%f", &nota1);
	
	printf("Digite a nota da sua segunda prova: ");
	scanf("%f", &nota2);
	
	printf("Digite a nota da sua terceira prova: ");
	scanf("%f", &nota3);
	
	ClassificarNotas(float *nota1, float *nota2, float *nota3, float *PrimeiraNota,	float *SegundaNota, float *MediaPrimeiraSegundaNota, float *MediaTotal, float *TerceiraNota);
	
	printf("Média com 3 provas: %f", MediaTotal);
	
}

void ClassificarNotas(float *nota1, float *nota2, float *nota3, float *PrimeiraNota, float *SegundaNota, float *MediaPrimeiraSegundaNota, float *MediaTotal, float *TerceiraNota)
{
	*MediaTotal = (*nota1 + *nota2 + *nota3)/3;
	
	if(*nota1 > *nota2)
		*MediaPrimeiraSegundaNota = *MediaPrimeiraSegundaNota + nota1;
	else
		*MediaPrimeiraSegundaNota = *MediaPrimeiraSegundaNota + nota2;
	
	if(*nota2 > *nota3)
		*MediaPrimeiraSegundaNota = *MediaPrimeiraSegundaNota + nota2;
	else
		*MediaPrimeiraSegundaNota = *MediaPrimeiraSegundaNota + nota3;
		
	*MediaPrimeiraSegundaNota = *MediaPrimeiraSegundaNota / 2;
	
	
	
}

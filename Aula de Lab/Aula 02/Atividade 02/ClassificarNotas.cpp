/*
        Name: ClassificarNotas.cpp
        Author: Rosa Marcella
        Date: 31/08/26 11:51
        Description: 
*/


# include <stdio.h>

//Seção de Prototipação
void ClassificarNotas(float *nota1, float *nota2, float *nota3, float *PrimeiraNota, float *SegundaNota, float *MediaPrimeiraSegundaNota, float *MediaTotal, float *TerceiraNota);

int main()
{
        float nota1, nota2, nota3;
        nota1 = nota2 = nota3 = 0.0;

        float PrimeiraNota,        SegundaNota, MediaPrimeiraSegundaNota, MediaTotal, TerceiraNota;
        PrimeiraNota = SegundaNota = MediaPrimeiraSegundaNota = MediaTotal = TerceiraNota = 0.0;

        printf("Digite a nota da sua primeira prova: ");
        scanf("%f", &nota1);

        printf("Digite a nota da sua segunda prova: ");
        scanf("%f", &nota2);

        printf("Digite a nota da sua terceira prova: ");
        scanf("%f", &nota3);

        ClassificarNotas( &nota1, &nota2, &nota3, &PrimeiraNota, &SegundaNota, &MediaPrimeiraSegundaNota, &MediaTotal, &TerceiraNota);

        printf("\nMédia com 3 provas: %.2f", MediaTotal);
        printf("\nMédia com as duas notas mais altas: %.2f", MediaPrimeiraSegundaNota);
        printf("\nSua nota mais alta: %.2f", PrimeiraNota);
        printf("\nSua nota mais baixa: %.2f", TerceiraNota);
}

void ClassificarNotas(float *nota1, float *nota2, float *nota3, float *PrimeiraNota, float *SegundaNota, float *MediaPrimeiraSegundaNota, float *MediaTotal, float *TerceiraNota)
{
        *MediaTotal = (*nota1 + *nota2 + *nota3)/3;

        if (*nota1 >= *nota2 && *nota1 >= *nota3)
    {
        *PrimeiraNota = *nota1;

        if (*nota2 >= *nota3)
        {
            *SegundaNota = *nota2;
            *TerceiraNota = *nota3;
        }
        else
        {
            *SegundaNota = *nota3;
            *TerceiraNota = *nota2;
        }
    }
    else if (*nota2 >= *nota1 && *nota2 >= *nota3)
    {
        *PrimeiraNota = *nota2;

        if (*nota1 >= *nota3)
        {
            *SegundaNota = *nota1;
            *TerceiraNota = *nota3;
        }
        else
        {
            *SegundaNota = *nota3;
            *TerceiraNota = *nota1;
        }
    }
    else
    {
        *PrimeiraNota = *nota3;

        if (*nota1 >= *nota2)
        {
            *SegundaNota = *nota1;
            *TerceiraNota = *nota2;
        }
        else
        {
            *SegundaNota = *nota2;
            *TerceiraNota = *nota1;
        }
    }

        *MediaPrimeiraSegundaNota = (*PrimeiraNota+*SegundaNota) / 2;



}
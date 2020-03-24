#include <stdio.h>
#include <stdlib.h>

void MergeSort(int v[]);
void Merge(int v[], int comeco, int fim);

int main()
{
    int vTest[7] = {38 , 27 , 43 , 3 , 9 , 82 , 10};
    MergeSort(vTest);
    system("pause");
}

void MergeSort(int v[])
{
    Merge(v, 0, 7);
    
}

void Merge(int v[], int comeco, int fim)
{
    //int aux;
    int metadeVetor_BASE ,comecoVetor_A ,fimVetor_A, comecoVetor_B, fimVetor_B;
    if(comeco == fim)return;

    metadeVetor_BASE  = (int)(comeco+fim)/2;

    comecoVetor_A     = comeco;
    fimVetor_A        = metadeVetor_BASE;

    comecoVetor_B     = metadeVetor_BASE + 1;
    fimVetor_B        = fim;


    Merge(v, comecoVetor_A, fimVetor_A);
    Merge(v, comecoVetor_B, fimVetor_B);

    printf("comeco: %d fim: %d\n", comeco, fim);
    for(int i = comeco; i < fim ; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n\n");

    /*if(v[comecoVetor_A] > v[comecoVetor_B])
    {

    }*/
}


/*
void MergeSort(int v[])
{
    int tamanhoVetor = sizeof(v), half = tamanhoVetor/2;
    int vetor1[half], vetor2[half(tamanhoVetor%2 == 0)?(+0):(+1)], i, j, k;
    for(i = j = k = 0; i < tamanhoVetor; i++)
    {
        if(i<half)
        {
            vetor1[j] = v[i];
            j++
        }
        else
        {
            vetor2[k] = v[i];
            k++
        }
    }
    MergeSort(vetor1);
    MergeSort(vetor2);
    return 
}
*/
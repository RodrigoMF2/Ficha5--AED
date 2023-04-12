#include <stdio.h>

int main()
{
    int vetor[50], aux;

    for(int i = 0; i < 50; i++)
    {
        printf("Digite o numero %d do vetor: \n",i);
            scanf("%d", &vetor[i]);
    }

    for(int x = 0; x < 50; x++)
    {
        for( int y = x; y < 50; y++)
        {
            if(vetor[x]>vetor[y])
            {
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
        }
    }

    for ( int i = 0; i < 50; i++)
    {
        printf("numero %d eh: %d \n",i ,vetor[i]);
    }
    
}
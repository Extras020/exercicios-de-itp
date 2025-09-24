#include <stdio.h>
#include <stdlib.h>

void define_vetor(int vet[], int x);

int main()
{
    int m, n, a;
    printf("informe a quantidade de figurinhas da coleção:\n");
    scanf("%d", &m);
    printf("informe a quantidade de figurinhas que você possui:\n");
    scanf("%d", &n);
    int figurinhas[n];
    printf("informe as figurinhas que você tem:\n");
    define_vetor(figurinhas, n);
    for(a = 0; a < m; a++){
        if(a != figurinhas[a]){
            printf("%d ", a);
        }
    }
    return 0;
}
void define_vetor(int vet[], int x){
    int i;
    for(i = 0; i < x; i++){
        scanf("%d", &vet[i]);
    }
}

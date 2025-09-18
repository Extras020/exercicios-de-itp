#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int verifica_altura(float a, float b);
void verifica_seguranca(float a, float b);

int main()
{
    float x, y;
    int status_ponto;
    scanf("%f %f", &x, &y);
    status_ponto = verifica_altura(x, y);
    if(status_ponto == 1){
        printf("troque de coordenada\n");
    }
    else{
        verifica_seguranca(x, y);
    }
    return 0;
}
int verifica_altura(float a, float b){
    float altura;
    altura = sin(cos(b)+a)+cos(b+sin(a));
    if(altura < 0 || altura > 2){
        return 1;
    }
    else{
        return 0;
    }
}
void verifica_seguranca(float a, float b){
    int cont = 0, i;
    float pontoa, pontob, pontoc, pontod;
}

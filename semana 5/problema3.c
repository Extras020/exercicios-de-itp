#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int verifica_altura(float a, float b);
int verifica_seguranca(float a, float b);

int main()
{
    float x, y;
    int status_ponto, maior_seguranca;
    scanf("%f %f", &x, &y);
    status_ponto = verifica_altura(x, y);
    if(status_ponto == 1){
        printf("troque de coordenada\n");
    }
    else{
        maior_seguranca = verifica_seguranca(x, y);
        if(maior_seguranca == 0 || maior_seguranca == 1){
            printf("inseguro\n");
        }
        else if(maior_seguranca == 2 || maior_seguranca == 3){
            printf("relativamente seguro\n");
        }
        else if(maior_seguranca == 4){
            printf("seguro\n");
        }
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
int verifica_seguranca(float a, float b){
    int cont = 0, i;
    float altura;
    altura = sin(cos(b)+a+2)+cos(b+sin(a+2));
    if(altura < 0 || altura > 2){
        cont++;
    }
    altura = sin(cos(b)+a-2)+cos(b+sin(a-2));
    if(altura < 0 || altura > 2){
        cont++;
    }
    altura = sin(cos(b-2)+a)+cos(b-2+sin(a));
    if(altura < 0 || altura > 2){
        cont++;
    }
    altura = sin(cos(b+2)+a)+cos(b+2+sin(a));
    if(altura < 0 || altura > 2){
        cont++;
    }
    return cont;
}

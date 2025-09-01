#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cap_inicial, juros, tempo, montante;
    scanf("%f %f %f", &cap_inicial, &juros, &tempo);
    montante = cap_inicial * pow((1 + juros / 100), tempo);
    printf("Montante: %.2f", montante);
    return 0;
}

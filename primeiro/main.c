#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, IMC;
    scanf("%f %f", &peso, &altura);
    IMC = peso/(altura*altura);
    printf("IMC = %.2f", IMC);
    return 0;
}

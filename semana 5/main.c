#include <stdio.h>
#include <stdlib.h>

void define_rondas(int x, int y, int z);

int main()
{
    int hora, minuto, formato;
    scanf("%d %d %d", &hora, &minuto, &formato);
    define_rondas(hora, minuto, formato);
    return 0;
}
void define_rondas(int x, int y, int z){
    int a, b;
    a = 0;
    b = 0;
    if(z == 0){
         printf("%d:%d\n", x, y);

         a = x + 1;
         if(a > 23){
            a = 00;
         }
         printf("%d:%d\n", a, y);

         b = 0;
         a = 0;
         b = y + 10;
         if(b == 60){
            b = 0;
            a += 1;
         }
         else if(b > 60){
            b = b - 60;
            a += 1;
         }
         a = a + x + 2;
         if(a > 23){
            a = a - 24;
         }
         printf("%d:%d\n", a, b);

         b = 0;
         a = 0;
         b = y + 40;
         if(b == 60){
            b = 0;
            a += 1;
         }
         else if(b > 60){
            b = b - 60;
            a += 1;
         }
         a = a + x + 4;
         if(a > 23){
            a = a - 24;
         }
         printf("%d:%d\n", a, b);

         b = 0;
         a = 0;
         b = y + 5;
         if(b == 60){
            b = 0;
            a += 1;
         }
         else if(b > 60){
            b = b - 60;
            a += 1;
         }
         a = a + x + 12;
         if(a > 23){
            a = a - 24;
         }
         printf("%d:%d\n", a, b);
    }
    if(z == 1){
        printf("%d:%d\n", x, y);

         a = x + 1;
         if(a > 12){
            a = 1;
         }
         printf("%d:%d\n", a, y);

         b = 0;
         a = 0;
         b = y + 10;
         if(b == 60){
            b = 0;
            a += 1;
         }
         else if(b > 60){
            b = b - 60;
            a += 1;
         }
         a = a + x + 2;
         if(a > 12){
            a = a - 12;
         }
         printf("%d:%d\n", a, b);

         b = 0;
         a = 0;
         b = y + 40;
         if(b == 60){
            b = 0;
            a += 1;
         }
         else if(b > 60){
            b = b - 60;
            a += 1;
         }
         a = a + x + 4;
         if(a > 12){
            a = a - 12;
         }
         printf("%d:%d\n", a, b);

         b = 0;
         a = 0;
         b = y + 5;
         if(b == 60){
            b = 0;
            a += 1;
         }
         else if(b > 60){
            b = b - 60;
            a += 1;
         }
         a = a + x + 12;
         if(a > 12){
            a = a - 12;
         }
         printf("%d:%d\n", a, b);
    }
}

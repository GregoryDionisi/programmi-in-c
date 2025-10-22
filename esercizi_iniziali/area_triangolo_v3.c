#include <stdio.h>
#include <math.h>   // serve per fmod

int main() {
    float b, h, area, resto;
    printf("Inserisci la base: \n");
    scanf("%f", &b);
    printf("Inserisci l'altezza: \n");
    scanf("%f", &h);
    area = (b*h) / 2.0;
    resto = fmod(b*h, 2.0);   // resto con float
    printf("Area triangolo: %f\n", area);
    printf("Resto: %f\n", resto);
    return 0;
}

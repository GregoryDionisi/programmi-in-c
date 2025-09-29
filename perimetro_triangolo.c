#include <stdio.h>
#include <math.h>

int main() {
    float a, b, ipotenusa, perimetro;
    printf("Inserisci il primo cateto: \n");
    scanf("%f", &a);
    printf("Inserisci il secondo cateto: \n");
    scanf("%f", &b);
    ipotenusa = sqrt(a*a+b*b);
    printf("L'ipotenusa è: %f\n", ipotenusa);
    perimetro = a+b+ipotenusa;
    printf("Il perimetro è: %f\n", perimetro);
    return 0;
}

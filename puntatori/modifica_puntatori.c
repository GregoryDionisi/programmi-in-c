#include <stdio.h>

void modifica(int *a, int y);

int main() {
    int x, y;
    printf("Inserisci il valore da modificare:\n");
    scanf("%d", &x);

    printf("Inserisci il valore che modifica:\n");
    scanf("%d", &y);

    modifica(&x, y);

    printf("Il nuovo valore è: %d\n", x);

    return 0;
}

void modifica(int *a, int y) {
    *a = y;
}

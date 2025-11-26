#include <stdio.h>
#include <stdlib.h>

void riempi(int v[], int n);

int main() {
    const int N = 10;
    int a[N], b[N], c[N];
    int i;

    riempi(a, N);
    riempi(b, N);

    // SOMMA usando aritmetica dei puntatori
    for (i = 0; i < N; i++) {
        *(c + i) = *(a + i) + *(b + i);
    }

    printf("PRIMO VETTORE:\n");
    for (i = 0; i < N; i++){
        printf("%d\t", *(a + i));
    }

    printf("\nSECONDO VETTORE:\n");
    for (i = 0; i < N; i++){
        printf("%d\t", *(b + i));
    }

    printf("\nVETTORE SOMMA:\n");
    for (i = 0; i < N; i++){
        printf("%d\t", *(c + i));
    }

    return 0;
}

void riempi(int v[], int n){
    int i;
    for (i = 0; i < n; i++){
        *(v + i) = rand() % 10;  // numeri da 0 a 9
    }
}

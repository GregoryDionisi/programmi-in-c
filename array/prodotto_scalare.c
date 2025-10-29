#include <stdio.h>

int main(){
    const int N = 5;
    int i, v[N], w[N], prodotto = 0;

    printf("Inserisci il primo array (%d numeri):\n", N);
    for(i=0; i<N; i++){
        scanf("%d", &v[i]);
    }

    printf("Inserisci il secondo array (%d numeri):\n", N);
    for(i=0; i<N; i++){
        scanf("%d", &w[i]);
    }

    for(i=0; i<N; i++){
        prodotto+=v[i]*w[i];
    }
    printf("Il prodotto scalare è: %d\n", prodotto);
    return 0;
}
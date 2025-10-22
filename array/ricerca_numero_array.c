#include <stdio.h>

int main(){
    const int N = 8;
    int i, v[N], numero, trovato = 0;

    printf("Inserisci 8 numeri:\n");
    for(i=0; i<N; i++){
        scanf("%d", &v[i]);
    }
    printf("Inserisci un numero da cercare:\n");
    scanf("%d", &numero);

    for(i=0; i<N; i++){
        if(v[i] == numero){
            printf("Numero trovato nella posizione: %d\n", i);
            trovato++;
        }
    }
    if(trovato == 0){
        printf("Il numero non è stato trovato\n");
    }
    return 0;
}
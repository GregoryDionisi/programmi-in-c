#include <stdio.h>
int main(){
    const int N = 5;
    int i, v[N], somma = 0;

    printf("Inserisci 5 numeri:\n");
    for(i=0; i<N; i++){
        scanf("%d", &v[i]);
        somma+=v[i];
    }
    printf("La somma degli elementi è: %d\n", somma);
    return 0;
}
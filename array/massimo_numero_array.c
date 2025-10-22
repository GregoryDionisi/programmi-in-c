#include <stdio.h>

int main(){
    const int N = 10;
    int i, v[N], max;

    printf("Inserisci 10 numeri:\n");
    for(i=0; i<N; i++){
        scanf("%d", &v[i]);
    }
    max = v[0];

    for(i=1; i<N; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    printf("Il massimo valore è: %d\n", max);
    return 0;
}
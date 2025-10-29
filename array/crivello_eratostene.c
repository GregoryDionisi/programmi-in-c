#include <stdio.h>

int main(){
    const int N = 100;
    int i, j, v[N+1], multiplo;

    for(i=0; i<N+1; i++){
        v[i] = 1;
    }

    //PER CONTROLLARE CHE SIANO TUTTI A 1
    /*for(i=0; i<N+1; i++){
        printf("%d\n", v[i]); //senza & stampi il valore e non l'indirizzo di memoria
    }*/

    for(i=2; i<N+1; i++){
        if(v[i] == 1){
            for(j=i+i; j<N; j=j+i){
                v[j] = 0;
            }
        }
    }

    for(i=2; i<N+1; i++){
        if(v[i] == 1){
            printf("%d\n", i);
        }
    }
    return 0;
}
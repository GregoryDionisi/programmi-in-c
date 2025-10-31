#include <stdio.h>
#include <string.h> //fondamentale per usare strlen() = ritorna la lunghezza della riga

int main(){
    const int N = 101;

    int conta, i, n, trovato=0;
    char stringa1[N];

    printf("Inserisci la prima riga: ");
    scanf("%s", stringa1);
    n = strlen(stringa1);

    for(i=0; i < n/2; i++){
        if(stringa1[i] != stringa1[n-1-i]) trovato = 1;
    }

    if(trovato == 0){
        printf("PALINDROMA!!!!\n");
    } else {
        printf("NON PALINDROMA!!!!\n");
    }
}
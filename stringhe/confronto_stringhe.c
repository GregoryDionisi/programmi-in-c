#include <stdio.h>

int main(){
    const int MAX = 50;
    char stringa[MAX], stringa1[MAX], i, j, n, n1;

    printf("Inserisci la prima stringa:\n");
    scanf("%s", stringa);
    printf("Inserisci la seconda stringa:\n");
    scanf("%s", stringa1);

    i = 0;
    while(stringa[i] != '\0'){
        i++;
    }
    n = i;
    
    i = 0;
    while(stringa1[i] != '\0'){
        i++;
    }
    n1 = i;

    if(n != n1){
        printf("Le stringhe sono diverse!\n");
    } else {
        i = 0;
        while (i < n && stringa[i] == stringa1[i]) { //metti i < n sennò il ciclo va oltre la fine della stringa
            i++;
        }
        if(i == n){
            printf("Le stringhe sono uguali!\n");
        } else {
            printf("Le stringhe sono diverse!\n");
        }
    }
}
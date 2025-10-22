#include <stdio.h>

int main(){
    int numero, i, prodotto;
    do{
        printf("Inserisci un numero per visualizzare la tabellina (0 per uscire):\n");
        scanf("%d", &numero);
        if (numero != 0){
        for (i = 1; i < 11; i++){
            prodotto = numero * i;
            printf("%d * %d = %d\n", numero, i, prodotto);
        }
    }
    } while (numero != 0);
    return 0;
}
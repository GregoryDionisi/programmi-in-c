#include <stdio.h>

int main(){
    int numero, i, prodotto;
    do{
        printf("Inserisci un numero per visualizzare la tabellina (0 per uscire):\n");
        scanf("%d", &numero);
        if (numero != 0){
        for (i = 0; i < 10; i++){
            prodotto = numero * (i+1);
            printf("%d * %d = %d\n", numero, i+1, prodotto);
        }
    }
    } while (numero != 0);
    return 0;
}
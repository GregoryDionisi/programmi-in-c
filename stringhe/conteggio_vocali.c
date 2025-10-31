#include <stdio.h>

int main(){
    const int MAX = 101;
    char stringa[MAX], i, n, contatore;
    printf("Inserisci una stringa:\n");
    scanf("%s", stringa); //%s per stringhe, in cui non serve &, e %c per caratteri dove c'è bisogno del &

    i = 0;
    while(stringa[i] != '\0'){ //\0 è il terminatore, ovvero segna la fine della stringa in modo che se scriviamo meno caratteri di quelli massimi non utilizzi anche quelli vuoti
        i++;
    }
    n = i;
    //STAMPARE LA STRINGA
    printf("Hai inserito la stringa: %s\n", stringa);
    for(i=0; i<n; i++){
        if(stringa[i] == 'a' || stringa[i] == 'e' || stringa[i] == 'i' || stringa[i] == 'o' || stringa[i] == 'u'){
            contatore++;
        }
    }
    printf("La stringa ha %d caratteri\n", n);
    printf("La stringa ha %d vocali\n", contatore);
}
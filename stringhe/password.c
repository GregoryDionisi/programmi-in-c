//GENERAZIONE AUTOMATICA DI PASSWORD CAUSALI DI 8 CARATTERI
#include <stdio.h>
#include <stdlib.h> //fondamentale per usare rand()
#include <time.h> //includo questa libreria per avere sempre password diversa

int main(){
    char s[9];
    int i, scelta;

    //rand genera i numeri che non sono veramente casuali, ma dipendono da un valore iniziale chiamato seme (seed)
    srand(time(NULL)); //srand() serve proprio per impostare questo seme che di default rimane sempre 1. time dice che quando il programma viene eseguito in un momento diverse il seme cambia ogni volta

    for(i=0; i<8; i++){
        scelta = rand() % 3;

        //s[i] = rand() % 26 + '97'; //genera una lettera dell'alfabeto inglese (che ha 26 lettere) che è minuscola (le minuscole si trova da 97 a 122 nell'ASCII)
        if(scelta==0) s[i] = rand() % 26 + 'a'; //'a' fa la stessa cosa visto che ha codice ASCII 97
        if(scelta==1) s[i] = rand() % 26 + 'A'; //genera lettera maiuscola
        if(scelta==2) s[i] = rand() % 10 + '0'; //genera un numero da 0 a 9
    }
    printf("%s\n", s);
}
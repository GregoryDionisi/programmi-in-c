/* Scrivere un programma C che acquisisca da tastiera 5 terne di valori che rappresentano nome, ore mensili, lavorate (in h/mese) e stipendio orario (in euro) di un lavoratore. 

Il programma deve:

- Dichiarare una struttura dati per rappresentare un lavoratore;
- Implementare una funzione che dato un lavoratore calcoli e restituisca il salario mensile.
- Determinare e visualizzare la persona con il salario mensile più alto. */

#include <stdio.h>
#define MAX_LENGTH 100

//RICORDATI sempre di definire la struct prima del main
typedef struct {
        char nome[MAX_LENGTH];
        int ore;
        int paga;
    } tLavoratore;  

int calcolaSalario(tLavoratore x);

int main(){
    /* tLavoratore a;
    printf("Inserisci il nome: ");
    scanf("%s", a.nome); //ricordati che per le stringhe non serve &
    printf("Inserisci quante ore al mese: ");
    scanf("%d", &a.ore);
    printf("Inserisci la paga oraria: ");
    scanf("%d", &a.paga); */
    int i, max;
    tLavoratore v[5];
    for(i = 0; i < 5; i++){
        printf("Inserisci il nome: ");
        scanf("%s", v[i].nome); //ricordati che per le stringhe non serve &
        printf("Inserisci quante ore al mese: ");
        scanf("%d", &v[i].ore);
        printf("Inserisci la paga oraria: ");
        scanf("%d", &v[i].paga);
    }
    max = 0;
    for(i = 0; i < 5; i++){
        if(calcolaSalario(v[i]) > calcolaSalario(v[max])){
            max = i;
        }
    }
    printf("Il lavoratore con paga mensile più alta: %s", v[max].nome);
}

int calcolaSalario(tLavoratore x){
    return x.ore * x.paga;
}
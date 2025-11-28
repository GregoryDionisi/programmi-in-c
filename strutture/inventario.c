#include <stdio.h>

const int N = 30;

typedef struct{
        int number;
        char name[N];
        int quanti;
    } tPezzo;
void riempi(tPezzo *x); //usiamo il puntatore perchè vogliamo rendere la struttura modificabile. Se usassimo la x normale daremmo solo una copia del parametro passato
/* 🔴 Senza puntatore

È come dare una fotocopia di un documento a qualcuno.
Lui scrive sulla fotocopia, ma l’originale non cambia.

🟢 Con puntatore

È come dare l’originale:
se qualcuno scrive, cancella, modifica… cambia l’originale. */

void stampa(tPezzo x); //in questo caso visto, che devi solo stampare e non modifchi niente, puoi anche non usare il puntatore


int main(){
    //STRUTTURA SENZA ARRAY
    /* tPezzo p1, p2;

    riempi(&p1);
    riempi(&p2);

    stampa(p1);
    stampa(p2); */

    //ARRAY DI STRUTTURE
    tPezzo v[5];
    int i;
    printf("RIEMPI MAGAZZINO");
    for(i = 0; i < 5; i++){
        riempi(&v[i]);
    }

    printf("STAMPA MAGAZZINO");
    for(i = 0; i < 5; i++){
        stampa(v[i]);
    }
}
void riempi(tPezzo *x) {
    printf("Inserisci il codice: ");
    scanf("%d", &(*x).number); //con le struct si usa la sintassi (*puntatore)

    printf("Inserisci il nome del pezzo: ");
    scanf("%s", (*x).name); //TI RICORDO che le stringhe non hanno mai bisogno di &

    printf("Inserisci la quantita in magazzino: ");
    scanf("%d", &(*x).quanti);
}

void stampa(tPezzo x) {
    printf("Codice: %d\n", x.number);
    printf("Nome: %s\n", x.name);
    printf("Quantita: %d\n", x.quanti);
}


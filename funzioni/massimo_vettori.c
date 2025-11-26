/*
RIEMPIRE 2 ARRAY CON VALORI LETTI DA TASTIERA
STAMPARE I DUE VETTORI
STAMPARE IL MASSIMO DI ENTRAMBI I VETTORI
*/

#include <stdio.h>

void riempi(int array[], int n); //parametri formali
void stampa(int array[], int n);
int massimo(int array[], int n);
void scambia(int *x, int *y);

int main(){
    const int N = 5;
    int v[N], w[N], i, a, b;

    /* printf("Riempi il primo vettore:\n");
    riempi(v, N); //ricordati v senza parentesi quadre

    printf("Riempi il secondo vettore:\n");
    riempi(w, N);

    printf("\nPrimo vettore:\n");
    stampa(v, N);

    printf("\nSecondo vettore:\n");
    stampa(w, N);

    printf("\nMassimo del primo vettore: %d\n", massimo(v, N)); //ricordati che una funzione che ritorna mettila nel printf */

    printf("Inserisci a:\n");
    scanf("%d", &a);
    printf("Inserisci b:\n");
    scanf("%d", &b);

    //CONCETTO DI PUNTATORI
    scambia(&a, &b); //parametri attuali
    printf("Dopo lo scambio: a = %d, b = %d\n", a, b);

}

void riempi(int array[], int n){
    //AMBITO DI VISIBILITà O SCOPE = dove la variabile esiste ed è utilizzata
    int i;
    printf("Inserisci un valore:\n");
    for(i=0; i<n; i++){
        scanf("%d", &array[i]); //& è un tipo di puntatore (guarda lezione sui puntatori) che punta all'indirizzo di memoria della variabile
    }
}

void stampa(int array[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d\n", array[i]);    
    }
}

int massimo(int array[], int n){
    int i, max = array[0];

    for(i=1; i<n; i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    return max;
}

//CONCETTO DI PUNTATORI
void scambia(int *x, int *y) {
    int temp = *x; //*x significa “il valore memorizzato all’indirizzo contenuto in x”, cioè *x = a = 5, quindi temp = 5
    *x = *y; //*y è il valore dentro b (cioè 10), *x è il valore dentro a, quindi ora a diventa 10.
    *y = temp; //temp vale 5, *y è il valore dentro b, quindi b diventa 5
}

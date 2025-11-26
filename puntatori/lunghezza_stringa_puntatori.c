#include <stdio.h>

int main() {

    const int N = 100;
    char s[N];
    char *p;

    printf("Inserisci una stringa: ");
    gets(s); 

    
    for (p = s; *p != '\0'; p++) // parte da p=s ovvero p punta al primo termine di s
        ;  // corpo vuoto: serve solo per avanzare p finché non trova '\0'

    printf("Numero di caratteri: %d\n", p - s); // fa la differenza tra p (indirizzo del terminatore) e s (indirizzo del primo termine)

    return 0;
}
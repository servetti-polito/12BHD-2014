#include<stdio.h>

/* LAB-07 ES-03 */

// Helper library for character classification
#include<ctype.h>

#define DENTRO  1
#define FUORI   0

int main(){

	//Assegnalazione delle variabili
	char carattere = ' ';

	int caratteri_tot = 0;
	int maiuscoli = 0;
	int alfabetici = 0;
	int decimali = 0;
	int spaziatura = -1;
	int parole = 0;

	//variabile temporanea introdotta per capire quando inizia una parola
	int stato = FUORI;


	while ( carattere != '\n' ){

		carattere = getchar();

		// verifica se carattere e' in maiuscolo
		if ( isupper(carattere) )
			maiuscoli++;
		//verifica se carattere e' una cifra
		if ( isdigit(carattere) ){
			decimali++; //se lo e' allora incremente la variabile decimali
		}
		//verifica se il carattere e' uno spazio
		if ( isspace(carattere) ){
			spaziatura++; // se lo e' allora incrementa la variabile spaziatura
		}
		//verifica se il carattere e' alfanumerico
		if ( isalpha (carattere) ){
			alfabetici++; //se lo e' incrementa la varibile degli alfanumerici
		}
		caratteri_tot++; //incrementa la quantita' di caratteri totali inseriti

		/* calcolo delle parole */
        if( isalpha(carattere) ){
            /* dentro una parola */
            if(stato == DENTRO) {
                /* continuo ad essere nella stessa parola */
            } else {
                /* stato == FUORI, passo da fuori della parola a dentro = nuova parola */
                parole++;
            }
            stato = DENTRO;
        }
        if( isspace(carattere) ){
            /* fuori da una parola */
            stato = FUORI;
        }

 	}

	//Stampa a video tutte le variabili che chiede l'esercizio
	printf("Caratteri totali = %d\nMaiuscoli = %d\nAlfabetici = %d\nDecimali = %d\nSpazi = %d\nParole = %d\n ",caratteri_tot,maiuscoli,alfabetici,decimali,spaziatura,parole);
}




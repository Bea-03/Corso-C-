// Una funzione è un sottoprogramma
// Funzioni VOID

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

// Le funzioni si mettono fuori dal main, che è esso stesso una funzione: non si mette una funzione una dentro l'altra
// Esempi di funzioni con 0 parametri
void newline () {
  cout << endl;
}

void threeline () {
  newline ();
  newline ();
  newline ();
}

// Il valore da assegnare alla variabile lo dichiaro una volta che uso la funzione (non mi serve prima)
// Esempi di funzioni con 1 parametri
void printtwice (char car) {
  cout << car << car << endl;
}

// Esempi di funzioni con 2 parametri
void printtime (int hour, int minute) // si ripete il tipo di variabile
{
  cout << hour << ":" << minute << endl;
}

// Esempi di chiamate di funzioni
int main () { 
  cout << "sperimento 3 volte newline: ";
  newline ();
  newline ();
  newline ();
  cout << "sperimento printtwice ('a'): ";
  // è in questo momento che assegno un valore alla variabile, si può fare in due modi:
  printtwice ('a');
  // oppure
  cout << "sperimento printtwice (alfa): ";
  char alfa = 'a';
  printtwice (alfa);
  alfa = 'b';
  printtwice (alfa);
  // altro esempio
  cout << "sperimento printtime (11, 59): ";
  printtime (11, 59);
}



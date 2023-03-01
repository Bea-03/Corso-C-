// Una funzione è un sottoprogramma
// Funzioni VOID

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

// Esempi di funzioni con 0 parametri
void newline () {
  cout << endl;
}

void threeline () {
  newline ();
  newline ();
  newline ();
}

// Esempi di funzioni con 1 parametri
void printtwice (char car) {
  cout << car << car << endl;
}

// Esempi di funzioni con 2 parametri
void printtime (int hour, int minute) // devo ripetere il tipo di variabile?? 
{
  cout << hour << ":" << minute << endl;
}

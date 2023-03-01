#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {

  // una variabile non è una incognita, è un errore concettuale usare una variabile senza o prima di assegnarne un valore

  // variabile di tipo intero
  int x = 124;
  cout << "x = " << x << endl;
  // se la riuso non se ne ripete il tipo
  x = 125;
  cout << "x = " << x << endl;

  // variabile di tipo reale
  double y = 124.5;
  cout << "y = " << y << endl;

  // variabile di tipo carattere (si usano gli apici)
  char carattere = 'a';
  cout << "carattere = " << carattere << endl;

  // dunque si può vedere lo stesso oggetto in maniere diverse (ossia come oggetti distinti)
  cout << "5" << endl;
  cout << '5' << endl;
  cout << 5 << endl;
  cout << 5. << endl;

  int hour, minute; 
  char colon;
  hour = 11;
  minute = 59;
  colon = ':';
  cout << "The current time is " << hour << colon << minute << endl;

  char letter;
  letter = 'a' + 1; // stampa b, il successore di a 
  cout << letter << endl;

  // (int) scambia il carattere con il numero corrispondente 
  cout << "numero del carattere = " << (int)letter << endl;

}

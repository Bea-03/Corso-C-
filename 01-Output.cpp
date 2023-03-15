// come iniziare: mettere SEMPRE librerie

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
  cout << "stampa dell'intero 2: " << 2 << endl;
  cout << "stampa del reale 100.0: " << 100.0 << endl;

  // esempi 4 operazioni (tra le virgolette ci va il "testo dell'esercizio", senza virgolette invece "fa il conto" 
  cout << "10+10 = " << 10 + 10 << endl;
  cout << "10-10 = " << 10 - 10 << endl;
  cout << "10*10 = " << 10 * 10 << endl;
  cout << "10/10 = " << 10 / 10 << endl;

  // esempi funzioni libreria math
  cout << "10 elevato a 10 = " << pow(10, 10) << endl;
  cout << "10 elevato a 2 = " << pow(10, 2) << endl;
  cout << "sqrt(100)= " << sqrt(100) << endl;

  //  in questo caso, il valore di 10 elevato a 1000 è visto come tendente all'infinito
  cout << "10 elevato a 1000 = " << pow(10, 1000) << endl;

  // errori: cout << 1/0 << endl;

  // su campo R (Z in questo caso) il valore cercato non esiste, quindi "non è un numero", è un valore "nan", ossia "not a number"
  cout << "sqrt(-1) = " << sqrt(-1) << endl;

  // a meno che sia specificato, si lavora su campo Z (posso operare solo tra oggetti appartenenti allo stesso campo)
  cout << "1/10 = " << 1 / 10 << endl; // dunque, causa arrotondamento alla parte principale, si ottiene 0

  // per lavorare su R si usa .
  cout << "1./10. = " << 1 / 10. << endl;

  // si può mascherare ("casting") un intero da reale usando (double)
  cout << "1/10 = " << 1 / (double)10 << endl;

}
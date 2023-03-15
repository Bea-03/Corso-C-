#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {

  // una variabile non è una incognita, è un errore concettuale usare una variabile senza o prima di assegnarne un valore

  // variabile di tipo intero
  int h = 124;
  cout << "h = " << h << endl;
  // se la riuso non se ne ripete il tipo
  h = 125;
  cout << "h = " << h << endl;

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


  // ES 3.2.2.1/2
  double base = 5, altezza = 3.2, raggio = 2.8, π = 3.14159265;
  cout << "base = " << base << endl;
  cout << "altezza = " << altezza << endl;
  cout << "area rettangolo = " << base*altezza << endl;
  cout << "perimetro rettangolo = " << 2*(base+altezza) << endl;
  cout << "diagonale = " << sqrt(base*base+altezza*altezza) << endl;
  cout << "raggio = " << raggio << endl;
  cout << "area cerchio = " << π*raggio*raggio << endl;
  cout << "diametro = " << 2*raggio << endl;
  cout << "circonferenza = " << 2*π*raggio << endl;

  cout << endl;

  // ES 3.3.1.1/2
  cout << "abbcccdddd" << endl;
  cout << "a" << endl;
  cout << "bb" << endl; // ecc.

  cout << endl;

  // ES 3.3.1.3
  char c = 'l';
  int t = 9;
  cout << c+1 << endl;  // nota la differenza da:
  c = 'l'+1;
  cout << c << endl; 
  cout << t-1 << endl;

  cout << endl;

  // Es 3.3.1.4
  int p = 5, q = 13;
  cout << "p = " << p << endl;
  cout << "q = " << q << endl;
  cout << "p+q = " << p+q << endl;
  cout << "p-q = " << p-q << endl;
  cout << "p*q = " << p*q << endl;
  cout << "p/q = " << p/q << endl;
  cout << "sqrt(p) = " << sqrt(p) << endl;
  cout << "pow(13, 5) = " << pow(13, 5) << endl;
  cout << "log(q) = " << log(q) << endl;
  int i = -1;
  cout << "i = " << i << endl;
  cout << "sqrt(i) = " << sqrt(i) << endl;
  int j = 1000;
  cout << "j = " << j << endl;
  cout << "pow(p, j) = " << pow(p, j) << endl;
  int k = 0, m = 1;
  cout << "k = " << k << endl;
  cout << "log(k) = " << log(k) << endl;
  cout << "m = " << m << endl;
  cout << "log(m) = " << log(m) << endl;

  cout << endl;

  // ES 3.3.1.5
  double a = 3, b = 5.5, d = 7;
  cout << "a = " << a << "; b = " << b << "; c = " << c << endl;
  double perimetro = a+b+d;
  cout << "perimetro triangolo = " << perimetro << endl;
  double formulaErone = sqrt((perimetro/2)*(perimetro/2-a)*(perimetro/2-b)*(perimetro/2-d));
  cout << "area triangolo = " << formulaErone << endl;

  cout << endl;

  // ES 3.3.1.6
  int x = 194572;
  cout << "numero intero non negativo = " << x << endl;
  int migliaia, centinaia, decine, unità;
  migliaia = x/1000;
  cout << "migliaia = " << migliaia << endl;
  centinaia = x/100-migliaia*10;
  cout << "centinaia = " << centinaia << endl;
  decine = x/10-migliaia*100-centinaia*10;
  cout << "decine = " << decine << endl;
  unità = x-migliaia*1000-centinaia*100-decine*10;
  cout << "unità = " << unità << endl;

  // % calcola il resto, si dice modulo di a rispetto a b
  // a % b = a - (a/b)*b
  cout << 10%6 << endl;
}
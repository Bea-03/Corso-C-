#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

/* If, è di diversi tipi:
If tronco: se la condizione è verificata esegue le istruzioni, altrimenti non fa nulla
if (condizione) {
  istruzione1;
  istruzione2;
}

If a due rami: se la condizione è vera viene eseguito il primo gruppo di istruzioni, altrimenti il secondo
if (condizione) {
  istruzione1;
  istruzione2;
} 
else {
  istruzione3;
  istruzione4;
}

Catena di if
if (condizione1) {
  istruzione1;
}
else if (condizione2) {
  istruzione2;
}
else {
  istruzione3;
}
Si possono inserire condizionali dentro condizionali */

// Esempi
void printparity (int x) {
  if (x%2==0) {
    cout << x << " è pari" << endl;
  }
  else {
    cout << x << " è dispari" << endl;
  }
}

void printlogarithm (double x) {
  if (x>0) {
    double r = log(x);
    cout << "log(x) = " << r << endl;
  }
  else {
    cout << "la funzione logaritmo non accetta argomenti non positivi" << endl;
  }
  //oppure: { if (x>0) {... return;} cout << "la funzione logaritmo non accetta argomenti non positivi" << endl; } 
  }

// Es 4.2.2.2
void risolviEq(double a, double b) {
  if (a!=0 && b!=0) {
    double x = b/a;  
    cout << "l'equazione ax=b ha soluzione: " << x << endl;
  }
  else if (a==0 && b==0) {
    cout << "l'equazione ax=b ha infinite soluzioni" << endl;
  }
  else {
    cout << "l'equazione ax=b è impossibile" << endl;
  }
  }

// Es 4.2.2.3
void radice () {
  double x;
  cout << "inserire un valore per x: x = "; 
  cin >> x;
  if (x>=0) {
    cout << "la radice quadrata del valore immesso è: " << sqrt(x) << endl;
  }
  else {
    cout << "la funzione radice quadrata non ammette argomento negativo" << endl;
  }
}

// Es 4.3.1.1
void saluto () {
  cout << "enter a language between italian, english, french, deutch or spanish: " << endl;
  char lingua;
  cin >> lingua;
  lingua = tolower(lingua); // serve a rendere minuscole le maiuscole
  if (lingua == 'i') {
    cout << "Ciao" << endl;
  }
  else if (lingua == 'e') {
    cout << "Hello" << endl;
  }
  else if (lingua == 'f') {
    cout << "Salut" << endl;
  }
  else if (lingua == 'd') {
    cout << "Tschuss" << endl;
  }
  else if (lingua == 's') {
    cout << "Hola" << endl;
  }
  else {
    cout << "Sorry, I don't speak your language" << endl;
  }
}

// Es 4.3.1.2
void distanzaeuclidea () {
  cout << "inserire le coordinate di due punti nel piano: ";
  double a, b, c, d;
  cout << "x1 = ";
  cin >> a;
  cout << "y1 = ";
  cin >> b;
  cout << "x2 = ";
  cin >> c;
  cout << "y2 = ";
  cin >> d;
  cout << "la distanza euclidea tra i due punti è: " << sqrt((a-c)*(a-c)+(b-d)*(b-d)) <<endl;
}

// Es 4.3.1.3
void eq2 () {
  cout << "risolutore equazioni di secondo grado del tipo ax^2+bx+c=0" << endl;
  double a, b, c;
  cout << "inserire valore di a: ";
  cin >> a;
  cout << "inserire valore di b:";
  cin >> b;
  cout << "inserire valore di c: ";
  cin >> c;
  double delta = b*b-4*a*c;
  if (delta == 0) {
    cout << "le soluzioni dell'equazione sono: x1 = x2 = " << -b/2*a << endl;
  }
  else if (delta >=0) {
    cout << "le soluzioni dell'equazione sono: x1 = " << (-b-sqrt(delta))/2*a << "; x2 = " << (-b+sqrt(delta))/2*a << endl; 
  }
  else {
    cout << "le soluzioni dell'equazione sono: x1 = " << -b/2*a << " + " << -sqrt(-delta)/2*a << "i" << "; x2 = " << -b/2*a << " + " << sqrt(-delta)/2*a << "i" << endl;
  }
} 

// Es 4.3.1.4
void rette () {
  
}

int main () {
  printparity (54);
  printlogarithm (4.3);
  risolviEq (0, 0);
  radice ();
  saluto ();
  distanzaeuclidea ();
  eq2 ();
}
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

// Es 5.2.1.1
void età () {
  int e;
  cout << "inserire un'età in anni: ";
  cin >> e;
  if (e>=0 && e<18) {
    cout << "sei un minorenne";
  }
  else if (e>=18 && e<65) {
    cout << "sei un adulto";
  }
  else if (65<=e) {
    cout << "sei un anziano";
  }
  else {
    cout << "non si può avere un'età negativa";
  }
  cout << endl << endl;
}

// Es 5.2.1.2
int valoredimezzo () {
  int x, y, z;
  cout << "qual è il valore di mezzo tra tre interi x, y, z?" << endl;
  cout << "inserire valore di x: ";
  cin >> x;
  cout << "inserire valore di y: ";
  cin >> y;
  cout << "inserire valore di z: ";
  cin >> z;
  if ((x>=y && x<=z) || (x<=y && x>=z)) {
    cout << x;
  }
  else if ((y>=x && y<=z) || (y<=x && y>=z)) {
    cout << y;
  }
  else {
    cout << z;
  }
  cout << endl << endl;
}

// Es 5.2.1.3
void morracinese () {
  cout << "giochiamo a morra cinese!" << endl;
  char m1, m2;
  cout << "giocatore 1: inserisci la tua mossa tra sasso, carta e forbice: ";
  cin >> m1;
  system("clear");
  cout << "giocatore 2: inserisci la tua mossa tra sasso, carta e forbice: ";
  cin >> m2;
  if ((m1!='s' && m1!='f' && m1!='c') || (m2!='s' && m2!='f' && m2!='c')) {
    cout << "mossa non valida";
  }
  else if (m1==m2) {
    cout << "pareggio";
  }
  else if (m1=='s') {
    cout << "vittoria al giocatore 1";
  }
  else if (m2=='s') {
    cout << "vittoria al giocatore 2";
  }
  else if (m1=='f') {
    cout << "vittoria al giocatore 1";
  }
  else if (m2=='f') {
    cout << "vittoria al giocatore 2";
  }
  cout << endl << endl;
}

int main () {
  età ();
  valoredimezzo ();
  morracinese ();

  // Es 5.3.1.1
  cout << "dammi 4 interi a, b, c, d e ti calcolerò la somma dei numeri pari e quella dei numeri dispari" << endl;
  int a, b, c, d, sp, sd;
  sp = sd = 0;
  cout << "inserire valore di a: ";
  cin >> a;
  cout << "inserire valore di b: ";
  cin >> b;
  cout << "inserire valore di c: ";
  cin >> c;
  cout << "inserire valore di d: ";
  cin >> d;
  if (a%2==0) {
    sp += a;
  }
  else {
    sd += a;
  }
  if (b%2==0) {
    sp += b;
  }
  else {
    sd += b;
  }
  if (c%2==0) {
    sp += c;
  }
  else {
    sd += c;
  }
  if (d%2==0) {
    sp += d;
  }
  else {
    sd += d;
  }
  cout << "la somma dei numeri pari è: " << sp << endl << "la somma dei numeri dispari è: " << sd << endl << endl;

  // Es 5.3.1.2
  cout << "dammi 3 numeri interi e te li restituirò in ordine decrescente" << endl;
  int x, y, z;
  cout << "inserire valore di x: ";
  cin >> x;
  cout << "inserire valore di y: ";
  cin >> y;
  cout << "inserire valore di z: ";
  cin >> z;
  if (x>=y && x>=z && y>=z) {
    cout << x << "; " << y << "; " << z;
  }
  else if (x>=y && x>=z && z>=y) {
    cout << x << "; " << z << "; " << y;
  }
  else if (y>=x && y>=z && x>=z) {
    cout << y << "; " << x << "; "<< z;
  }
  else if (y>=x && y>=z && z>=x) {
    cout << y << "; " << z << "; " << x;
  }
  else if (z>=x && z>=y && x>=y) {
    cout << z << "; " << x << "; " << y;
  }
  else {
    cout << z << "; " << y << "; " << x;
  }  
  cout << endl << endl;
  retta ();
}

// es 5.3.1.3
void retta () {
  cout << "inserisci le coordinate di due punti nel piano e ti restituirò la retta per essi passante" << endl;
  double x1, y1, x2, y2;
  cout << "inserire ascissa e ordinata del primo punto: ";
  cin >> x1, y1;
  cout << "inserire ascissa e ordinata del secondo punto: ";
  cin >> x2, y2;
  double m, q;
  m = (y2-y1)/(x2-x1);
  q = 
  cout << "la retta per i due punti è: y = " << m << "x + " << q << endl; 
}

// Es 5.3.1.4
void distanza () {
  
}

// Es 5.3.1.5
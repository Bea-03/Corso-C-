#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

// Es 4.1.2.1 
// Decomponi un intero non negativo in migliaia, centinaia, decine e unità
void decomponiInt (int x) {
  int decine, centinaia, unità;
  centinaia = (x%1000)/100;
  cout << "centinaia = " << centinaia << endl;
  decine = (x%100)/10;
  cout << "decine = " << decine << endl;
  unità = (x%10);
  cout << "unità = " << unità << endl;
}

// Es 4.1.2.2
// Decomponi un reale non negativo in centinaia, decine, unità e parte decimale
void decomponiDouble (double y) {
  decomponiInt ((int)y);
  double partedecimale;
  partedecimale = (y-(int)y);
  cout << "parte decimale = "<< partedecimale << endl;
}

int main () {
  decomponiInt (74982635); 
  cout << endl;
  decomponiDouble (398324.166);
}
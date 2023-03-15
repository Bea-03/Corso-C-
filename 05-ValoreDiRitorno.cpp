#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

// Es 5.1.2.1
bool divide (int d, int n) {
  cout << "d divide n?" << endl;
  cout << "inserire valore intero di d: ";
  cin >> n;
  cout << "inserire valore intero di n: " << endl;
  cin >> d;
  if (n%d==0) {
    return true;
  }
  else {
    return false;
  }
}

// Es 5.1.2.3
int massimo (int x, int y) {
  cout << "qual è il massimo tra due interi x e y?" << endl;
  cout << "inserire valore di x: ";
  cin >> x;
  cout << "inserire valore di y: ";
  cin >> y;
  if (x>=y) {
    return x;
  }
  else {
    return y;
  }
}

// Es. 5.1.2.3
bool multipli (int a, int b) {
  cout << "gli interi a e b sono multipli tra di loro?" <<< endl;
  cout << "inserire valore di a: ";
  cin >> a;
  cout << "inserire valore di b: ";
  cin >> b;
  if (a%b==0 || b%a==0) {
    return true;
  }
  else {
    return false;
  }
} //oppure uso la funzione divide FARE

// Es 5.1.2.4
int minimo (int x, int y, int z, int t) { //finire
  cout << "qual è il minimo tra 4 interi x, y, z, t?" << endl;
  cout << "inserire valore di x: ";
  cin >> x;
  cout << "inserire valore di y: ";
  cin >> y;
  cout << "inserire valore di z: ";
  cin >> z;
  cout << "inserire valore di t: ";
  cin >> t;
  
}

int main () {
}


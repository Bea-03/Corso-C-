#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

void countdown (int n) {
  if (n == 0) {
    cout << "partenza";
  }
  else {
    cout << n << endl;
    countdown (n-1);
  } // dovrebbe stampare partenza alla fine
}

void newlines (int n) {
  if (n > 0) {
    cout << endl;
    newlines (n-1);
  }
}

int fact (int n) { //devo considerare i casi n<0, che sono impossibili
  if (n == 0) {
    return 1;
  }
  else if (n > 0) {
    return n * fact(n-1);
  }
  else 
    return printf("impossible");
}

int fibonacci (int n) {
  if (n == 0 || n == 1)  {
    return 1;
  }
  else {
    return n + fibonacci(n-1);
  }//ma così facendo non definisco Fn
}

// Es 6.1.2.1


int main () {
  countdown(4);
  newlines(3);
  // int fa = fact(-4);
  cout << " 4! = " << fact(-4) << endl;
  cout << " l'ottavo termine della serie di fibonacci è: " << fibonacci(8) << endl;
}
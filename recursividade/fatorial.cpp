#include "iostream"
#include "cstdlib"
#include "math.h"
#include "iomanip"

using namespace std;


int fatorial(int n);

int main() {
  int number = 0;
  int res = 0;

  cout << "Digite um número para obter o seu fatorial: \n";
  cin >> number;

  res = fatorial(number);
  cout << "Fatorial de " << number << ": " << res << endl;

  return 0;
}

int fatorial(int n){
  if(n == 0 || n == 1){
    return 1;
  }
  return n*fatorial(n-1);
}

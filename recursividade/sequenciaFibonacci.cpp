//FIBONACCI COM FUNÇÃO RECURSIVA
#include "iostream"
#include "cstdlib"
#include "math.h"
#include "iomanip"

using namespace std;

int fibo(int n);

int main() {

  int n;
  for (n = 0; n < 9; n++){
    cout << fibo(n) << " ";
  }

  return 0;
}

int fibo(int n){
  if(n == 0)
    return 0;

  else if(n == 1 || n == 2)
    return 1;

  else
    return fibo(n-1) + fibo(n-2);

}

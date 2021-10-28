#include "iostream"
#include "cstdlib"
#include "math.h"
#include "iomanip"

using namespace std;

void contador(int num, int cont);//inicialização padrão

int main() {
  contador(10, 1);
  return 0;
}

void contador(int num, int cont){
    cout << cont << "\n";
    if(num < cont){
      contador(num, ++cont);//++cont pré incremento
    }
}

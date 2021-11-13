/*


3.Reescreva a função abaixo tornando-a recursiva:
int Digitos( int N ) {
  int cont = 1;
  while( abs( N ) > 9) {

  N = N / 10; cont++;

  }

  return cont;

       }


*/

#include "iostream"
#include "cstdlib"
#include "math.h"
#include "iomanip"

using namespace std;

int digitos( int n, int cont );


int main(int argc, char const *argv[])
{
    cout << digitos(20, 1);

    return 0;
}

int digitos( int n, int cont ) {

    if(n > 9){

        cont++;
        digitos(abs(n) / 10, cont);
        

        return cont;
    }
    else{
        return 0;
    }

}



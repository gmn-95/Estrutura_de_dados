/*

4-Escreva uma função recursiva que recebe como parâmetros um número real X e 
um inteiro N e retorna o valor de X^N. Obs.: N pode ser negativo.    

*/

#include "iostream"
#include "cstdlib"
#include "math.h"
#include "iomanip"

using namespace std;

float potencia(float x, int n);

int main(int argc, char const *argv[])
{
    cout << potencia(2.0, 4);
    return 0;
}

float potencia(float x, int n){
    if(n == 0){
        return 1;
    }
    else if(n < 0){
        return (1 / (x * potencia(x, abs(n) - 1)));
    }
    else{
        return x * potencia(x, n - 1);
    }
}
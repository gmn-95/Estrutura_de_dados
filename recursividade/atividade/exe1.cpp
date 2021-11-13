/*

1.Escreve uma função que recebe como parâmetro um inteiro positivo N e retorna a soma 
de todos os números inteiros entre 0 e N.

*/

#include "iostream"
#include "cstdlib"
#include "math.h"
#include "iomanip"

using namespace std;

int soma(int n);

int main(int argc, char const *argv[])
{   
    int n = 0;

    cout << "Digite um número: ";
    cin >> n;

    cout << soma(n) << "\n";
    
    return 0;
}

int soma(int n){

    int soma = 0;

    for(int i = 1; i <= n; i++){
        soma += i;
    }

    return soma;
    

}
#include "iostream"
#include "cstdlib"
#include "math.h"
#include "iomanip"

using namespace std;

int const tam = 4;

int soma(int *vetor, int i, int n);

int main(int argc, char const *argv[])
{
    int i = 0;
    int n = tam - 1;
    int r;

    int vetor[tam] = {6, 7, 8, 9};
    r = soma(vetor, i, n);

    cout << "\n" << r << "\n";

    return 0;
}

int soma(int *vetor, int i, int n){

    if(i > n){
        return 0;
    }

    return soma(vetor, i + 1, n) + vetor[i];  

}

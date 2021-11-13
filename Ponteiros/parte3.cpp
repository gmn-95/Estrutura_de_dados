//associar ponteiros com funções

#include "cstdlib"
#include "iostream"
#include "iomanip"
#include "math.h"

using namespace std;

//ponteiro var que vai receber o endereço da variavel num, para alterar o valor da variável num que está na função main
void somar(float *var, float valor);

void iniVetor(float *v);

int main()
{
    float num = 0, vetor[5];
    
    somar(&num, 15);
    iniVetor(vetor);

    cout << num << "\n";

    for(int i = 0; i < 5; i++){
        cout << vetor[i] << "\n";
    }

    return 0;
}

void somar(float *var, float valor)
{
    *var += valor;
}

void iniVetor(float *v)
{
    for(int i = 0; i < 5; i++){
        v[i] = 5;
    }
}

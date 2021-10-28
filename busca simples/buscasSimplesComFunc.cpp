#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;

int const TAM = 10;

bool busca_simples(int vet[TAM], int valorProcurado, int *posicaoEncontrada);
void imprime_vet(int vet[TAM]);

int main(int argc, char const *argv[])
{
    int vetor[] = {3, 14, 22, 56, 75,82, 90, 98, 113, 128};
    int valorProcurado;
    int posicaoEncontrada;

    imprime_vet(vetor);

    cout << "\n\nQual o número que deseja encontrar? ";
    cin >> valorProcurado;

    if(busca_simples(vetor, valorProcurado, &posicaoEncontrada) == 1){
        cout << "O valor foi encontrado na posição = " << posicaoEncontrada << endl;
    }
    else{
        cout << "O valor não foi encontrado" << endl;
    }

    return 0;
}

bool busca_simples(int vet[TAM], int valorProcurado, int *posicaoEncontrada){

    for(int i = 0; i < TAM; i++){
        if(vet[i] == valorProcurado){
            *posicaoEncontrada = i;
            return true;
        }
    }

    return false;
}

void imprime_vet(int vet[TAM]){
    for(int i = 0; i < TAM; i++){
        cout << vet[i] << " ";
    }
}
#ifndef imprimeVetor_h
#define imprimeVetor_h

#include "cstdlib"
#include "iostream"

using namespace std;

void imprime_vetor(int *vet, int tamanho){

	cout << "\n";

	for(int i = 0; i < tamanho; i++){
		cout << " |" << vet[i] << "| ";
	}

	cout << "\n";
}


#endif
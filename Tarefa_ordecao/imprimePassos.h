#ifndef imprimePasos_H
#define imprimePasos_H

#include "iostream"
#include "string"

using namespace std;


void imprime_passoApasso(int *vet, int tamanho){

	cout << "\n";

	for(int i = 0; i < tamanho; i++){
		cout << " |" << vet[i] << "| ";
	}

	cout << "\n";
}

#endif
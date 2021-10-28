#ifndef bubbleSort_H
#define bubbleSort_H

#include "cstdlib"
#include "string.h"
#include "iostream"
#include "time.h"

#include "imprimePassos.h"
#include "imprimeVetor.h"

using namespace std;

int bu;

void bubble_sort(int *vet, int tamanho){
	
	int x;
	int y;
	int aux;	

	for(x = 0; x < tamanho; x++){ // valor da esquerda sendo analisado
		
		for(y = x + 1; y < tamanho; y++){ // valor da direita sendo analisado

			// confere se precisa fazer a troca
			if(vet[x] > vet[y]){
				aux = vet[x];
				vet[x] = vet[y];
				vet[y] = aux;
		
			}
			
		}
		
		//imprime_passoApasso(vet, tamanho);
		bu++;

	}

}

double bubble(int *vet, int tamanho){

	bu = 0;

    cout << "\nAntes do bubble: " << "\n";
    imprime_vetor(vet, tamanho);

    cout << "\n-----------------------------------------------------------------\n";

    cout << "Depois do bubble: " << "\n";
	
	clock_t tBubble = clock();
    bubble_sort(vet, tamanho);
	tBubble = clock() - tBubble;

    imprime_vetor(vet, tamanho);

	return ((double)tBubble)/((CLOCKS_PER_SEC/1000));
}

int iteracaoBubble(){
	cout << "bubble......: " << bu << "\n";
	return bu;
}

#endif 
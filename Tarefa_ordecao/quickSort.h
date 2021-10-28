#ifndef quickSort_H
#define quickSort_H

#include "cstdlib"
#include "string.h"
#include "iostream"
#include "time.h"

#include "imprimePassos.h"
#include "imprimeVetor.h"

using namespace std;

int q;

void quick_sort(int vet[], int inicio, int fim, int tamanho){

	int esq;
	int dir;
	int pivo;
	int meio;
	int aux;

	//limites da esquerda e direita da região analisada
	esq = inicio;
	dir = fim;

	//auxiliares do centro
	meio = (int) ((esq + dir) / 2);
	pivo = vet[meio];

	while(dir > esq){

		while(vet[esq] < pivo){
			esq++;
		}

		while(vet[dir] > pivo){
			dir--;
		}

		if(esq <= dir){

			//realiza uma troca
			aux = vet[esq];
			vet[esq] = vet[dir];
			vet[dir] = aux;

			esq++;
			dir--;		 
		}
	
		//imprime_passoApasso(vet, tamanho);
		q++;
	}


	//recursçao para continuar ordenando
	if(inicio < dir){
		quick_sort(vet, inicio, dir, tamanho);
	}

	if(esq < fim){
		quick_sort(vet, esq, fim, tamanho);
	}
	

}

double quick(int *vet, int tamanho){

	q = 0;

    cout << "\nAntes do quick: " << "\n";
    imprime_vetor(vet, tamanho);

    cout << "\n-----------------------------------------------------------------\n";

    cout << "Depois do quick: " << "\n";

	clock_t tQuick = clock();
    quick_sort(vet, 0, tamanho - 1, tamanho);
	tQuick = clock() - tQuick;

	imprime_vetor(vet, tamanho);

	return (double) tQuick / ((CLOCKS_PER_SEC/1000));

}

int iteracaoQuick(){
	cout << "quick.......: " << q << "\n";
	return q;
}

#endif

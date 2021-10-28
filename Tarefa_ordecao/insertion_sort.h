#ifndef insertionSort_H
#define insertionSort_H

#include "cstdlib"
#include "iostream"
#include "string"
#include "time.h"

#include "imprimePassos.h"
#include "imprimeVetor.h"

using namespace std;

int in;

void insertion_sort(int *vet, int tamanho){

	int atual, j;

	for(int i = 1; i < tamanho; i++){
		
		// elemento atual em análise
		atual = vet[i];
		
		//Elemento anterior já análisado
		j = i - 1;


		// analisando membros anteriores
		while((j >= 0) && (atual < vet[j])){

			// reposiciona os elementos uma posição para frente
			vet[j + 1] = vet[j];

			// faz o aneterior_analisado andar para trás
			j--;
		}

		// agora que o espaço foi aberto, colocamos o atual [menor número] na posição correta
		vet[j + 1] = atual;

		//imprime_passoApasso(vet, tamanho);
		in++;
	}

}

double insertion(int *vet, int tamanho){
	in = 0;

    cout << "\nAntes do insertion: " << "\n";
    imprime_vetor(vet, tamanho);

    cout << "\n-----------------------------------------------------------------\n";

    cout << "Depois do insertion: " << "\n";

	
	clock_t tInsertion = clock();
    insertion_sort(vet, tamanho);
	tInsertion = clock() - tInsertion;
	
    imprime_vetor(vet, tamanho);

	return ((double)tInsertion)/((CLOCKS_PER_SEC/1000));

}

int iteracaoInsertion(){
	cout << "insertion...: " << in << "\n";
	return in;
}

#endif
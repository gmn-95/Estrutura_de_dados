#ifndef selectionSort_H
#define selectionSort_H

#include "cstdlib"
#include "string.h"
#include "iostream"
#include "time.h"

#include "imprimePassos.h"
#include "imprimeVetor.h"

int s;

void selection_sort(int *vet, int tamanho){

	/*
		vet[j] -> sempre posição posterior

 	*/

	int posicaoDoMenorValor, aux;

	for(int i = 0; i < tamanho; i++){
		
		//posição do menor valor no vetor
		posicaoDoMenorValor = i;

		for(int j = i + 1; j < tamanho; j++){

			// se houver um elemento menor que o anterior, atualiza a posiçãoDoMenorValor
			if(vet[j] < vet[posicaoDoMenorValor]){
				posicaoDoMenorValor = j;
			}
		}

		// troca as posições para ordenar
		if(posicaoDoMenorValor != i){ // verifica se a posição do menor valor foi
									  // atualizado, se sim..

			aux = vet[i];             // o valor que deve ser trocado é passado
								      // para uma variável auxiliar

			vet[i] = vet[posicaoDoMenorValor]; // aqui, o menor valor, vai para a
											   // sua posição correta

			vet[posicaoDoMenorValor] = aux;   // o valor maior que o verifiçado
											  // pode assumir uma posição temporária
											  // ou definitiva
		}
		
		//imprime_passoApasso(vet, tamanho);
		s++;
	}


}

double selection(int *vet, int tamanho){
	
	s = 0;

    cout << "\nAntes do selection: " << "\n";
    imprime_vetor(vet, tamanho);

    cout << "\n-----------------------------------------------------------------\n";

    cout << "Depois do selection: " << "\n";

	clock_t tSelection = clock();
    selection_sort(vet, tamanho);
	tSelection = clock() - tSelection;

    imprime_vetor(vet, tamanho);

	return ((double)tSelection)/((CLOCKS_PER_SEC/1000));
   
}

int iteracaoSelection(){
	cout << "selection...: " << s << "\n";
	return s;
}

#endif 
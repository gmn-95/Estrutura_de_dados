#ifndef shellSort_H
#define shellSort_H

#include "cstdlib"
#include "string.h"
#include "iostream"
#include "time.h"

#include "imprimePassos.h"
#include "imprimeVetor.h"

using namespace std;

void insertion_sort(int *vet, int h, int tamanho);

int sh;

void shell_sort(int *vet, int tamanho){

	int h = 1;
	
	// de quantos em quantos será o pulo entre análises
	while(h < tamanho){
		h = 3 * h + 1;
	}

	while(h > 1){

		// reduz a distância entre as análises
		h = h / 3;
		insertion_sort(vet, h, tamanho);

	}

}

void insertion_sort(int *vet, int h, int tamanho){

	int atual, j;

	for(int i = h; i < tamanho; i++){
		
		// elemento atual em análise
		atual = vet[i];
		
		//Elemento anterior já análisado
		j = i - h;


		// analisando membros anteriores
		while((j >= 0) && (atual < vet[j])){

			// reposiciona os elementos uma posição para frente
			vet[j + h] = vet[j];

			// faz o aneterior_analisado andar para trás
			j--;
		}

		// agora que o espaço foi aberto, colocamos o atual [menor número] na posição correta
		vet[j + 1] = atual;

		//imprime_passoApasso(vet, tamanho);
		sh++;
	}

}


double shell(int *vet, int tamanho){

	sh = 0;
	
    cout << "\nAntes do shell: " << "\n";
    imprime_vetor(vet, tamanho);

    cout << "\n-----------------------------------------------------------------\n";
	//int *vet, int inicio, int fim, int tamanho, string mostrar
    cout << "Depois do shell: " << "\n";

	clock_t tShell = clock();
    shell_sort(vet, tamanho);
	tShell = clock() - tShell;

	imprime_vetor(vet, tamanho);
	
	return ((double)tShell)/((CLOCKS_PER_SEC/1000));
}

int iteracaoShell(){
	cout << "shell.......: " << sh << "\n";
	return sh;
}

#endif

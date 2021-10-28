/*
USA PARTICIIONAMENTO - troca rápida	
*/

#include "cstdlib"
#include "iostream"
#include "string"

int const TAM = 10;

using namespace std;

void imprime_vetor(int vet[TAM]);
void quick_sort(int vet[TAM], int inicio, int fim);


int main(int argc, char const *argv[])
{
	int vet[TAM] = {91, 12, 10, 8, 5, 19, 3, 90, 12, 1}; //lista decrescente

	imprime_vetor(vet);
	quick_sort(vet, 0, TAM - 1);
	imprime_vetor(vet);

	return 0;
}

void quick_sort(int vet[TAM], int inicio, int fim){

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

		imprime_vetor(vet);

	}



	//recursçao para continuar ordenando
	if(inicio < dir){
		quick_sort(vet, inicio, dir);
	}

	if(esq < fim){
		quick_sort(vet, esq, fim);
	}
	

}

void imprime_vetor(int vet[TAM]){

	cout << "\n";

	for(int i = 0; i < TAM; i++){
		cout << " |" << vet[i] << "| ";
	}

	cout << "\n";
}
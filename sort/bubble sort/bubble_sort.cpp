/* ordenação bubble sort -> compara os elementos em pares 
	A ideia é percorrer o vetor diversas vezes, e a cada passagem fazer "flutuar"
	para o topó o maior elemento da sequência
*/

#include "iostream"
#include "cstdlib"
#include "string"

using namespace std;

int const TAM = 10;

void imprime_vetor(int vet[TAM]);
void bubble_sort(int vet[TAM]);

int main(int argc, char const *argv[]){

	int vet[TAM] = {10, 9, 7, 6, 5, 4, 3, 2, 1}; //lista decrescente

	imprime_vetor(vet);

	bubble_sort(vet);

	imprime_vetor(vet);

	return 0;
}


void bubble_sort(int vet[TAM]){
	
	int x, y, aux;

	for(x = 0; x < TAM; x++){ // valor da esquerda sendo analisado
		
		for(y = x + 1; y < TAM; y++){ // valor da direita sendo analisado

			// confere se precisa fazer a troca
			if(vet[x] > vet[y]){
				aux = vet[x];
				vet[x] = vet[y];
				vet[y] = aux;
			}
		}
		imprime_vetor(vet);
	}
}

void imprime_vetor(int vet[TAM]){

	cout << "\n";

	for(int i = 0; i < TAM; i++){
		cout << " |" << vet[i] << "| ";
	}

	cout << "\n";
}
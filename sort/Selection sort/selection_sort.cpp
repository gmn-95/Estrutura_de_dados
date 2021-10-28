/*sort -> selecionar o menor e colocar na primeira posição

	

	A ordenação por seleção (do inglês, selection sort) é um algoritmo de ordenação baseado 
	em se passar sempre o menor valor do vetor para a primeira posição (ou o maior dependendo
	da ordem requerida), depois o de segundo menor valor para a segunda posição, e assim é 
	feito sucessivamente com os n − 1 {\displaystyle n-1} n-1 elementos restantes, até os 
	últimos dois elementos. 

	Descrição do algoritmo

	É composto por dois laços, um laço externo e outro interno. O laço externo serve para controlar o índice inicial e o interno percorre todo o vetor. Na primeira iteração do laço externo o índice começa de 0 e cada iteração ele soma uma unidade até o final do vetor e o laço mais interno percorre o vetor começando desse índice externo + 1 até o final do vetor. Isso ficará mais explícito no exemplo.

	Exemplo:

	vetor = 9 - 7 - 8 - 1 - 2 - 0 - 4

	O primeiro laço o índice inicial é 0. O laço mais interno começa do índice 1 
	(índice_inicial_externo + 1) e percorre o vetor até achar o menor elemento, neste caso o 
	número zero. O zero passa para a posição inicial do vetor que na primeira iteração do laço 
	é 0.

	0 - 7 - 8 - 1 - 2 - 9 - 4

	Ao fim do laço interno, o laço externo incrementa uma unidade, agora a posição inicial 
	do vetor passa a ser 1, pois o zero já se encontra no lugar dele, não é preciso mais 
	fazer verificações pois ele é o menor elemento deste vetor. Agora o processo se repete, 
	buscando o segundo menor elemento, neste caso o um.

	0 - 1 - 8 - 7 - 2 - 9 - 4

	Consequentemente o terceiro menor, quarto menor,...

	Assim sucessivamente até o vetor está ordenado.

	0 - 1 - 2 -7 - 8 - 9 - 4

	...

	0 - 1 - 2 - 4 - 8 - 9 - 7

	...

	0 - 1 - 2 - 4 - 7 - 9 - 8

	...

	0 - 1 - 2 - 4 - 7 - 8 - 9
	Complexidade

	O selection sort compara a cada interação um elemento com os outros, visando encontrar o 
	menor. Dessa forma, podemos entender que não existe um melhor caso mesmo que o vetor esteja 
	ordenado ou em ordem inversa serão executados os dois laços do algoritmo, o externo e o 
	interno. A complexidade deste algoritmo será sempre O ( n 2 )  O(n^{2}) 
	enquanto que, por exemplo, os algoritmos heapsort e mergesort possuem complexidades O 
	( n log ⁡ n ) . 

*/

#include "cstdlib"
#include "iostream"

int const TAM = 10;

using namespace std;

void imprime_vetor(int vet[TAM]);
void selection_sort(int vet[TAM]);

int main(int argc, char const *argv[])
{
				  //1  2  3  4  5  6   7  8  9
	int vet[TAM] = {5, 9, 8, 6, 3, 10, 2, 0, 4, 1}; //lista decrescente

	imprime_vetor(vet);
	selection_sort(vet);
	imprime_vetor(vet);

	return 0;
}

void selection_sort(int vet[TAM]){

	/*
		vet[j] -> sempre posição posterior

 	*/


	int posicaoDoMenorValor, aux;

	for(int i = 0; i < TAM; i++){
		
		//posição do menor valor no vetor
		posicaoDoMenorValor = i;

		for(int j = i + 1; j < TAM; j++){

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
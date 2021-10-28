/*
é o mais eficiente algoritmo de classificação dentre os de complexidade quadrática. 
É um refinamento do método de inserção direta.[2] O algoritmo difere do método de inserção 
direta pelo fato de no lugar de considerar o array a ser ordenado como um único segmento, 
ele considera vários segmentos sendo aplicado o método de inserção direta em cada um deles.[3]
 Basicamente o algoritmo passa várias vezes pela lista dividindo o grupo maior em menores. 
 Nos grupos menores é aplicado o método da ordenação por inserção. Implementações do algoritmo.
*/

#include "cstdlib"
#include "iostream"
#include "string"

int const TAM = 10;

using namespace std;

void imprime_vetor(int vet[TAM]);
void shell_sort(int vet[TAM]);
void insertion_sort(int vet[TAM], int h);

int main(int argc, char const *argv[])
{
	
	int vet[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; //lista decrescente
	
	imprime_vetor(vet);
	shell_sort(vet);
	imprime_vetor(vet);

	return 0;
}

void shell_sort(int vet[TAM]){

	int h = 1;
	
	// de quantos em quantos será o pulo entre análises
	while(h < TAM){
		h = 3 * h + 1;
	}

	while(h > 1){

		// reduz a distância entre as análises
		h = h / 3;
		insertion_sort(vet, h);

	}

}


void insertion_sort(int vet[TAM], int h){
 	
 	/*
 		vet[j] -> sempre posição atual
		vet[j - 1] -> sempre posição anterior

 	*/


	int aux;

	for(int i = h; i < TAM; i++){

		int j = i;

		while(j > 0 && vet[j] < vet[j - h]){

			aux = vet[j];		  //variável auxiliar recebe o valor que é menor que o anterior
			vet[j] = vet[j - h];  //vet[j] recebe o valor da posição anterior, pois o valor da posição anterior
			                      // é maior do que a atual

			vet[j - h] = aux;    //posição anterior, recebe o valor que é menor

			j--;
			imprime_vetor(vet);
		}

		
	}
}

void imprime_vetor(int vet[TAM]){

	cout << "\n";

	for(int i = 0; i < TAM; i++){
		cout << " |" << vet[i] << "| ";
	}

	cout << "\n";
}
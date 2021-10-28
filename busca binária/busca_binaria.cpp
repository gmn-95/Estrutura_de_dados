#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;

int const TAM = 11;

void imprime_vetor(int vetor[TAM]);
int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada);

int main(int argc, char const *argv[]){
	int vetor[TAM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};
    int valorProcurado;
    int posicao, posicaoEncontrada;

    //Auxiliar contador
    int cont;

    imprime_vetor(vetor);

    cout << "Qual numero deseja encontrar? ";
    cin >> valorProcurado;
    

    if(busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1){
        cout << "O valor foi encontrado na posicao: " << posicaoEncontrada << endl;
    }else{
        cout << "Valor nao encontrado\n";
    }

    return 0;
}


int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){

	int esquerda = 0;		//limite da esquerda
	int direita  = TAM - 1;	// limite da direita
	int meio;				//O meio onde fica o cursor/pivô

	while(esquerda <= direita){
		// encontra o meio da análise
		meio = (esquerda + direita) / 2;

		// quando o valor do meior é encontrado
		if(valorProcurado == vetor[meio]){
			*posicaoEncontrada = meio;
			return 1;
		}

		// Ajustando os limites laterais
		if(vetor[meio] < valorProcurado){ // se o valor que eu estou, for menor que o valor procurado...
			esquerda = meio + 1;
		}
		else{
			direita = meio - 1;
		}
	}

	return -1;
}

void imprime_vetor(int vetor[TAM]){

    //Auxiliar contador
    int cont;

     //Imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }
}

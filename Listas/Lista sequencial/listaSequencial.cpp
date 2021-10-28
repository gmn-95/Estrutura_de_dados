#include <iostream>
#include <cstdlib>
#include <new>

using namespace std;

int const TAM = 3;

void imprime_sequencial(int *vetor, int tamanhoDaListaSequencial);
//int* alocaVetor(int tam);
void digitaValores(int *vetor, int tamanhoDaListaSequencial);
void limpaTela();

int main(int argc, char const *argv[])
{
	
	int vetor[TAM] = {1, 2, 3};
	int tamanhoDaListaSequencial;

	imprime_sequencial(vetor, 3);

	digitaValores(vetor, TAM);

	imprime_sequencial(vetor, 3);


	// Pedindo tamanho do vetor
	cout << "Digite o tamanho do vetor: ";
	cin >> tamanhoDaListaSequencial;


	//Alocação e memória em C++
	int *novoVetor = new int[tamanhoDaListaSequencial];

	digitaValores(novoVetor, tamanhoDaListaSequencial);

	imprime_sequencial(novoVetor, tamanhoDaListaSequencial);


	return 0;
}

void digitaValores(int *vetor, int tamanhoDaListaSequencial){
	//lendo novos valores
	cout << "Digite os valores: \n";
	for(int i = 0; i < tamanhoDaListaSequencial; i++){
		cin >> vetor[i];
	}
	cout << endl;
}

void imprime_sequencial(int *vetor, int tamanhoDaListaSequencial){

	for(int i = 0; i < tamanhoDaListaSequencial; i++){
		cout << "Valor " << i << ": " << vetor[i] << endl;
	}

	cout << endl;
}


//	//Passa o espaço da memória q foi criado para o vetor
//	vetorLidoNaHora = alocaVetor(tamanhoDaListaSequencial);

//	//Ponteiro para o novo vetor
//	int *vetorLidoNaHora;


/*
//Aloca um vetor do tamanho pedido
int* alocaVetor(int tam){

	//cria ponteiro auxiliar
	int *v;

	//aloca memoória para o novo vetor
	v = (int *) malloc(tam * sizeof(int));

	return v;
}
*/
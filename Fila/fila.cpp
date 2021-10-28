/*Primeiro a entrar é o Primeiro a sair -> FIFO*/

#include "cstdlib"
#include "iostream"
#include "string"

int const TAM = 10;

using namespace std;

void fila_construtor(int *frente, int *tras);
void fila_enfileirar(int fila[TAM], int valor, int *tras);
void imprime_fila(int fila[TAM], int tamanho);
void inicializa_fila(int fila[TAM]);
int fila_tamanho(int tras, int frente);
void fila_desenfileirar(int fila[TAM], int *frente, int tras);
bool fila_vazia(int frente, int tras);


int main(int argc, char const *argv[]){

	int fila[TAM];
	int frente, tras;
	int valor;

	inicializa_fila(fila);

	fila_construtor(&frente, &tras);

	fila_enfileirar(fila, 1, &tras);
	fila_enfileirar(fila, 2, &tras);
	fila_enfileirar(fila, 3, &tras);
	fila_enfileirar(fila, 4, &tras);
	fila_enfileirar(fila, 5, &tras);
	fila_enfileirar(fila, 6, &tras);

	fila_desenfileirar(fila, &frente, tras);
	fila_desenfileirar(fila, &frente, tras);
	fila_desenfileirar(fila, &frente, tras);
	fila_desenfileirar(fila, &frente, tras);
	fila_desenfileirar(fila, &frente, tras);
	fila_desenfileirar(fila, &frente, tras);
	fila_desenfileirar(fila, &frente, tras);

	fila_enfileirar(fila, 7, &tras);
	fila_enfileirar(fila, 8, &tras);
	fila_enfileirar(fila, 9, &tras);
	fila_enfileirar(fila, 10, &tras);


	imprime_fila(fila, fila_tamanho(tras, frente));

	return 0;
}


bool fila_cheia(int tras){
	if(tras == TAM - 1){
		return true;
	}
	else{
		return false;
	}
}

void fila_desenfileirar(int fila[TAM], int *frente, int tras){

	if(fila_vazia(*frente, tras)){
		cout << "Fila Vazia!" << endl;
	}
	else{
		cout << "O valor " << fila[*frente] << " foi removido!" << endl;
		fila[*frente] = 0;
		*frente = *frente + 1;
	}

}

bool fila_vazia(int frente, int tras){

	if(frente > tras){
		return true;
	}
	else{
		return false;
	}
}

void fila_construtor(int *frente, int *tras){
	*frente = 0;// primeira pessoa
	*tras = -1; // última pessoa
}

void fila_enfileirar(int fila[TAM], int valor, int *tras){


	if(fila_cheia(*tras)){
		cout << "Fila Cheia!" << endl;
	}
	else{
		*tras = *tras + 1;
		fila[*tras] = valor;
	}
}

int fila_tamanho(int tras, int frente){

	return (tras - frente) + 1;
}

void imprime_fila(int fila[TAM], int tamanho){

	for(int i = 0; i < TAM; i++){
		cout << fila[i] << " - ";
	}
	cout << endl;
}

void inicializa_fila(int fila[TAM]){

	for(int i = 0; i < 10; i++){
		fila[i] = 0;
	}
}

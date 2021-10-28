/*
last in - First out
*/

#include "iostream"
#include "cstdlib"
#include "string"

using namespace std;

int const tam = 10;

void imprime_pilha(int vetor[tam], int topo);
void pilha_push(int pilha[tam], int valor, int *topo);
void pilha_pop(int pilha[tam], int *topo);
bool pilha_vazia(int *topo);
bool pilha_cheia(int *topo);
void pilha_construtor(int pilha[tam], int *topo);
int pilha_tamanho(int *topo);
int pilha_get(int pilha[tam], int *topo);


int main(int argc, char const *argv[]){
		
	int pilha[tam];
	int topo = -1;		//topo da pilha
	int valorRetirado;

	
	pilha_construtor(pilha, &topo);

	imprime_pilha(pilha, topo);

	if(pilha_vazia(&topo)){
		cout << "\nPilha Vazia!" << endl;
	}

	cout << "\n";
	for(int i = 1; i < 11; i++){
		pilha_push(pilha, i, &topo);
		cout << "Adicionando valor: " << i << "\n";
	}

	cout << "\nÚltimo elemento da pilha: " << pilha_get(pilha, &topo) << endl;

	cout << "\n";
	cout << "Nova pilha: " << "\n";
	imprime_pilha(pilha, topo);

	if(pilha_cheia(&topo)){
		cout << "\n\nPilha cheia!\n\n";
	}

	cout << "Tamanho da pilha: " << pilha_tamanho(&topo) << endl;
	
	pilha_pop(pilha, &topo);

	cout << "\n";
	cout << "Nova pilha: " << "\n";
	imprime_pilha(pilha, topo);

	cout << "\nÚltimo elemento da pilha: " << pilha_get(pilha, &topo) << "\n\n";

	cout << "Tamanho da pilha: " << pilha_tamanho(&topo) << endl;

	return 0;
}

//obter último valor da pilha
int pilha_get(int pilha[tam], int *topo){
	if(pilha_vazia(pilha)){
		cout << "Pilha Vazia!" << endl;
		return 0;
	}
	else{
		return pilha[*topo];
	}
}

//mostrar tamanho da pilha
int pilha_tamanho(int *topo){
	return *topo + 1;
}

//criar pilha / limpa pilha
void pilha_construtor(int pilha[tam], int *topo){

	//Coloca o topo negativo, para indicar uma pilha vazia
	*topo = -1;

	int cont;

	for(cont = 0; cont < tam; cont++){
       pilha[cont] = 0;
    }
}

//verificar se a pilha está cheia
bool pilha_cheia(int *topo){
	if(*topo == tam - 1){
		return true;
	}
	else{
		return false;
	}
}

//verificar se a pilha está vazia
bool pilha_vazia(int *topo){
	if(*topo == -1){
		return true;
	}
	else{
		return false;
	}
}

// empurra valores à pilha
void pilha_push(int pilha[tam], int valor, int *topo){

	//verficar se a pilha está cheia

	//caso n possa colocar mais valores
	if(pilha_cheia(topo)){
		cout << "Pilha cheia!" << endl;
	}
	else{
		*topo = *topo + 1;
		pilha[*topo] = valor;   
	}
}

// retirar da pilha
void pilha_pop(int pilha[tam], int *topo){

	//verificar se está vazia
	if(pilha_vazia(topo)){
		cout << "A Pilha já está vazia!" << endl;
	}
	else{
		cout << "\n\nValor Removido: " << pilha[*topo] << "\n";	//mostrar o valor que foi retirado
		pilha[*topo] = 0;
		*topo = *topo - 1;		//remover elemento
	}
}

void imprime_pilha(int vetor[tam], int topo){

    //Auxiliar contador
    int cont;

     //Imprime o vetor
    for(cont = 0; cont < tam; cont++){
        cout << vetor[cont] << " - ";
    }

    cout << "\nTopo Posição: " << topo << endl;

}
#include <iostream>
#include <cstdlib>
#include <new>
#include <string.h>

using namespace std;

int const TAM = 3;

struct pessoa
{
	string nome;
	int rg;
};

void limpaTela();
void imprime_listaSequencial(pessoa *ponteiroSequencial, int tamanhoDaLista);
void menu_de_controle();
void adiciona_no_inicio(string nome, int rg, int *tamanhoDaLista, pessoa *&ponteiroSequencial);


int main(int argc, char const *argv[])
{
	
	limpaTela();

	

	menu_de_controle();



	return 0;
}

void menu_de_controle(){

	int funcaoDesejada = 1;
	string nome;
	int rg;


	//Ponteiro para a lista sequencial
	pessoa *ponteiroSequencial;

	//Tamanho da lista
	int tamanhoDaLista = 0;


	//exemplo:
	pessoa *exemploListaSequencial = new pessoa[2];

	/*//cria Dois registros de exemplo.
	exemploListaSequencial[0].nome = "John";
	exemploListaSequencial[0].rg = 123;
	exemploListaSequencial[1].nome = "Maicon";
	exemploListaSequencial[1].rg = 321;*/


	//faz o ponteiro principal apontar para o novo vetor
	ponteiroSequencial = exemploListaSequencial;

	


	//Menu
	while(funcaoDesejada < 10 && funcaoDesejada > 0){

		imprime_listaSequencial(ponteiroSequencial, tamanhoDaLista);

		//mostrando o menu
		cout << "\n\nOPERAÇÕES" << "\n"; 
		cout << "1 - Inserção de um node no início da lista....:" << "\n";
		cout << "2 - Inserção de um node no fim da lista.......:" << "\n";
		cout << "3 - Inserção de um node na posição N da lista.:" << "\n";
		cout << "4 - Retirar um um node no início da lista.....:" << "\n";
		cout << "5 - Retirar um um node no fima da lista.......:" << "\n";
		cout << "6 - Retirar um um node na posição N da lista..:" << "\n";
		cout << "7 - Procurar um node com o campo RG...........:" << "\n";
		cout << "8 - Imprimir a Lista..........................:" << "\n";
		cout << "9 - Sair do sistema...........................:" << "\n";
		cout << "\n" << "Escolha um número e pressiona ENTER" << "\n";
		cout << "---> ";
		cin >> funcaoDesejada;

		limpaTela();

		switch(funcaoDesejada){
			case 1:
				cout << "função escolhida: 1 - Inserção de um node no início da lista" << "\n";

				cout << "Digite um nome: ";
				cin >>  nome;

				cout << "Digite o rg: ";
				cin >> rg;

				adiciona_no_inicio(nome, rg, &tamanhoDaLista, ponteiroSequencial);

				break;

			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				funcaoDesejada = 0;
				break;
		}
	}

	
}

void adiciona_no_inicio(string nome, int rg, int *tamanhoDaLista, pessoa *&ponteiroSequencial){

	// se a lista for vazia, cria uma lista nova
	if(*tamanhoDaLista == 0){
		pessoa *novaListaSequencial = new pessoa[1];

		novaListaSequencial[0].nome = nome;
		novaListaSequencial[0].rg = rg;

		ponteiroSequencial = novaListaSequencial;
	}
	else{
		//caso a lista já tenha membros
		pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

		//insere o primeiro novo elemento
		novaListaSequencial[0].nome = nome;
		novaListaSequencial[0].rg = rg;

		//passa os elementos do vetor antigo para o novo
		for(int i = 0; i < *tamanhoDaLista; i++){
			novaListaSequencial[i + 1].nome = ponteiroSequencial[i].nome;
			novaListaSequencial[i + 1].rg = ponteiroSequencial[i].rg;
		}

		//atualiza o ponteiro pra a lista nova
		ponteiroSequencial = novaListaSequencial;
	}
	

	//atualiza o tamanho da lista
	*tamanhoDaLista = *tamanhoDaLista + 1;

}

void imprime_listaSequencial(pessoa *ponteiroSequencial, int tamanhoDaLista){

	for(int i = 0; i < tamanhoDaLista; i++){
		cout << i << " - " << ponteiroSequencial[i].nome << ", " << ponteiroSequencial[i].rg << endl;
	}
}

void limpaTela(){
	system("clear");
}
#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;


typedef struct no {
	
	int conteudo;
	struct no *esquerda;
	struct no *direita;

}No;

typedef struct{
	No *raiz;
	int tam;
}ArvB;


//void inserir(ArvB *arv, int valor);
void inserirEsquerda(No *no, int valor);
void inserirDireita(No *no, int valor);
void imprimir(No *raiz);
No* inserirNovaVersao(No *raiz, int valor);
int tamanho(No *raiz);


int main(int argc, char const *argv[])
{
	int opcao;
	int valor;
	ArvB arv;
	arv.raiz = NULL;

	No *raiz = NULL;

	do{
		cout << "\n" << "0 - Sair......:" << "\n";
		cout << "1 - Inserir...:" << "\n";
		cout << "2 - Imprimir..:" << "\n";
		cout << "--> ";
		cin >> opcao;

		switch (opcao)
		{
		case 0:
			cout << "Saindo..." << "\n";
			break;

		case 1:
			cout << "Digite um valor: ";
			cin >> valor;
			//inserir(&arv, valor);
			raiz = inserirNovaVersao(raiz, valor);
			break;
		
		case 2:
			cout << "Impressão da árvore binária: " << "\n";
			imprimir(raiz);
			cout << "\nTamanho: " << tamanho(raiz);
			cout << "\n";
			
			break;
		
		default:
			cout << "Opção inválida" << "\n";
			break;
		}

	}while (opcao != 0);
	
	
	return 0;
}


void inserirEsquerda(No *no, int valor){
	if(no->esquerda == NULL){
		No *novo = (No*)malloc(sizeof(No)); //malloc = alocação dinamica

		novo->conteudo = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;

		no->esquerda = novo;
	}
	else{
		if(valor < no->esquerda->conteudo){
			inserirEsquerda(no->esquerda, valor);
		}
		else if(valor > no->esquerda->conteudo){
			inserirDireita(no->esquerda, valor);
		}
	}
}


void inserirDireita(No *no, int valor){
	if(no->direita == NULL){
		No *novo = (No*)malloc(sizeof(No)); //malloc = alocação dinamica

		novo->conteudo = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;

		no->direita = novo;
	}
	else{
		if(valor > no->direita->conteudo){
			inserirDireita(no->direita, valor);
		}
		else if(valor < no->direita->conteudo){
			inserirEsquerda(no->direita, valor);
		}
	}
}


void inserir(ArvB *arv, int valor){
	
	//para uma raiz nula - verifica se a arvore está vazia
	if(arv->raiz == NULL){

		//criando um novo nó, alocando memória determinada pelo malloc e retornando o endereço do no (No*)
		No *novo = (No*)malloc(sizeof(No)); //malloc = alocação dinamica

		novo->conteudo = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;
		arv->raiz = novo;
	}
	else{ 
		if(valor < arv->raiz->conteudo){
			inserirEsquerda(arv->raiz, valor);
		}
		if(valor > arv->raiz->conteudo){
			inserirDireita(arv->raiz, valor);
		}
	}
	
}

No* inserirNovaVersao(No *raiz, int valor){
	if(raiz == NULL){

		No *novo = (No*)malloc(sizeof(No)); //malloc = alocação dinamica

		novo->conteudo = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;

		return novo;

	}
	else{
		if(valor < raiz->conteudo){
			raiz->esquerda = inserirNovaVersao(raiz->esquerda, valor);
		}
		else if(valor > raiz->conteudo){
			raiz->direita = inserirNovaVersao(raiz->direita, valor);
		}

		return raiz;
	}
	
}

int tamanho(No *raiz){
	if(raiz == NULL){
		return 0;
	}
	else{
		return 1 + tamanho(raiz->esquerda) + tamanho(raiz->direita);
	}
}

void imprimir(No *raiz){

	if(raiz != NULL){
		imprimir(raiz->esquerda);
		cout << raiz->conteudo << " ";
		imprimir(raiz->direita);	
		
	}

}
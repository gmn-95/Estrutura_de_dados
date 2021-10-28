#include<stdio.h>//para utilizar printf
#include<iostream>
#include<new>
#include<string>
#include<stdlib.h>
#define TAM 10

using namespace std;//para utilizar cout

void imprime_vetor (int vetor[TAM]){
	
	//auxiliar contador
	int i;
	
	//imprime o vetor
	for(i=0;i<TAM;i++){
		cout <<	vetor[i] << " - ";
	}	
}

int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){
	
	//auxiliar contador
	int i;
	
	//verifica se o valor foi encontrado
	bool valorFoiEncontrado;
	
	//percorre a lista em busca do valor
	for(i=0;i<TAM;i++){
		if(vetor[i] == valorProcurado){
			valorFoiEncontrado = true;
			*posicaoEncontrada = i;
		}
	}
	if(valorFoiEncontrado){//for VERDADEIRO
		return 1;
	}
	else{
		return -1;
	}	
}


int main(){

	int vetor[TAM]={3,14,22,56,75,82,90,98,113,128};
	int valorProcurado;
	int posicao, posicaoEncontrada;
	int i;
	bool valorFoiEncontrado; //na declaração valor FALSO
	
	imprime_vetor(vetor);
	
	printf("Qual numero deseja encontrar?");
	scanf("%d",&valorProcurado);
	
	if(busca_simples(vetor,valorProcurado, &posicaoEncontrada)== 1){
		cout << "o valor foi encontrado na posicao: " << posicaoEncontrada;
	}
	else{
		cout << "O valor nao foi encontrado";
	}
	
	return 0;
}

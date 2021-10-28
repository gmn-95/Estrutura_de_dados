#include<stdio.h>//para utilizar printf
#include<iostream>
#include<new>
#include<string>
#include<stdlib.h>
#define TAM 10

using namespace std;//para utilizar cout


int main(){
	int vetor[TAM]={3,14,22,56,75,82,90,98,113,128};
	int valorProcurado;
	int posicao, posicaoEncontrada;
	int i;
	bool valorFoiEncontrado; //na declara��o valor FALSO
	//imprime o vetor
	for(i=0;i<TAM;i++){
		cout <<	vetor[i] << " - ";
	}
	
	printf("Qual numero deseja encontrar?");
	scanf("%d",&valorProcurado);
	
	//percorre a lista em busca do valor
	for(i=0;i<TAM;i++){
		if(vetor[i] == valorProcurado){
			valorFoiEncontrado = true;
			posicaoEncontrada = i;
		}
	}
	if(valorFoiEncontrado){//for VERDADEIRO
		cout << "O valor foi encontrado na posicao: " << posicaoEncontrada;
	}
	else{
		cout << "Valor nao encontrado";
	}
	
	return 0;
}

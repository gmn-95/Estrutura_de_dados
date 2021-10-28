#ifndef mergeSort_H
#define mergeSort_H


#include "cstdlib"
#include "string.h"
#include "iostream"
#include "time.h"

#include "imprimePassos.h"
#include "imprimeVetor.h"

using namespace std;
int me;
 
//mergeSort(vetor, 0, TAM - 1);
void merge(int *vetor, int indiceEsquerdo, int meio, int indiceDireito);


void mergeSort(int *vetor, int indiceEsquerdo, int indiceDireito, int tamanho){
 
    int meio;
 
    if(indiceEsquerdo < indiceDireito){
 
        //Encontra o meio:
        meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo) / 2;
        
        //Metade de trás:
        mergeSort(vetor, indiceEsquerdo, meio, tamanho);
 
        //Metade da frente:
        mergeSort(vetor, meio + 1, indiceDireito, tamanho);
        
		//imprime_passoApasso(vetor, tamanho);
        me++;
        
        //une os dois subarrays
        merge(vetor, indiceEsquerdo, meio, indiceDireito);
 
    }
    
   

}
 
void merge(int *vetor, int indiceEsquerdo, int meio, int indiceDireito){
 
    int i;
    int j;
    int k;
 
    //Criando duas arrays temporarios
    int n1 = meio - indiceEsquerdo +1;
    int n2 = indiceDireito - meio;
    int vetorEsquerdo[n1], vetorDireito[n2];
 
    //Passa os elementos do vetor principal para o auxiliar esquerdo:
    for(i = 0; i < n1; i++){
        vetorEsquerdo[i] = vetor[indiceEsquerdo + i];
    }
 
     //Passa os elementos do vetor principal para o auxiliar direito:
    for(j = 0; j < n2; j++){
        vetorDireito[j] = vetor[meio + 1 + j];
    }
 
    i = 0;
    j = 0;
    k = indiceEsquerdo;
 
    while(i < n1 && j < n2){
 
        //Caso valor na esquerda seja menor:
        if(vetorEsquerdo[i] <= vetorDireito[j]){
 
            //Passa para o vetor principal o valor menor:
            vetor[k] = vetorEsquerdo[i];
            //Incrementa o auxiliar para passar a analise para o proximo vetor:
            i++;
 
        } else {
            vetor[k] = vetorDireito[j];
            j++;
            
        }
 
        //Aumemta o indice de posicionamento no vetor: 
        k++;
    }
 
    //Se faltar alguns elementos do array esquerdo, passa eles para o array principal:
    while(i < n1){
        vetor[k] = vetorEsquerdo[i];
        i++;
        k++;
    }
    
    //Se faltar alguns elementos do array direito, passa eles para o array principal:
    while(j < n2){
        vetor[k] = vetorDireito[j];
        j++;
        k++;
    }
    
}

double merge_(int *vet, int tamanho){

    me = 0;

    cout << "\nAntes do merge: " << "\n";
    imprime_vetor(vet, tamanho);

    cout << "\n-----------------------------------------------------------------\n";

    cout << "Depois do merge: " << "\n";

    clock_t tMerge = clock();
    mergeSort(vet, 0, tamanho - 1, tamanho);
    tMerge = clock() - tMerge;

    imprime_vetor(vet, tamanho);

    return ((double)tMerge)/((CLOCKS_PER_SEC/1000));
}

int iteracaoMerge(){
    cout << "merge_......: " << me << "\n";
	return me;
}

#endif
#include "iostream"
#include "cstdlib"
#include "new"
#include "time.h"

using namespace std;

void imprimeVet(int *vetor, int tamanho);

/*
    -> Retorna um ponteiro par a nova região de memória
    -> Se o ponteiro for nulo, ela aloca memória
    -> Se o novo tamanho for zero, a memória é liberada
    -> Se não houver memória suficiente, retorna null.

*/

int main(int argc, char const *argv[])
{
 
   int *vet;
   int tam;

   cout << "Digite o tamanho do vetor: ";
   cin >> tam;
   srand(time(NULL));

    //alocação dinâmica de vetor
    vet = (int*) malloc(tam * sizeof(int));

    if(vet){
        cout << "Memória alocada com sucesso!" << "\n";
        for(int i = 0; i < tam; i++){
            *(vet + i) = rand() % 100;
        }
        cout << "\n";
        imprimeVet(vet, tam);

        cout << "\n" << "Digite o novo tamanho do vetor: ";
        cin >> tam;


        //realocando vetor (aumentando)
        vet = (int*) realloc(vet, tam);

        cout << "\n" << "Vetor realocado: " << "\n";
        imprimeVet(vet, tam);

        //libera memória
        free(vet);

    }
    else{
        cout << "Erro ao alocar memória" << "\n";
    }


    return 0;
}

void imprimeVet(int *vetor, int tamanho){

    cout << "\n" << "Imprime vetor" << "\n";

    for(int i = 0; i < tamanho; i++){
        cout << i << " - " << vetor[i] << "\n";
    }

}
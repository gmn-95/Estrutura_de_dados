#include "iostream"
#include "cstdlib"
#include "math.h"

int const TAM = 10;

using namespace std;

int main(int argc, char const *argv[])
{
    int vetor[] = {3, 14, 22, 56, 75,82, 90, 98, 113, 128};
	int valorProcurado;
    int i;
	bool valorFoiEncontrado; //na declara��o valor FALSO
	//imprime o vetor
	for(i=0;i<TAM;i++){
		cout <<	vetor[i] << " - ";
	}
	
	cout << "\nQual numero deseja encontrar? ";
	cin >> valorProcurado;
	
	//percorre a lista em busca do valor
	for(int i=0;i<TAM;i++){
        
        if(resposta==vetor[i])
        {
            resposta=true;
        }
    }
    if(resposta==true)
    {
        cout<<"Valor foi encontrado!";
    }
    else
    {
        cout<<"Valor não foi encontrado";
    }


    

    

    return 0;
}

#include "cstdlib"
#include "iostream"

using namespace std;

//malloc = (memory aloc)Retorna um ponteiro para  a região de memória alocada ou NULL


int main(int argc, char const *argv[])
{
    int *x; //ponteiro

    x = (int*) malloc(sizeof(int)); //(tipo de retorno) malloc(tamanho que de vede ser alocado (quantidade de bytes));

    //x != NULL
    if(x){
        cout << "Memória alocada com sucesso" << "\n";
        cout << "X: " << *x << "\n";
        *x = 50;
        cout << "X: " << *x << "\n";
    }
    else{
        cout << "Erro ao alocar memória" << "\n";
    }

    return 0;
}

#include "cstdlib"
#include "iostream"
#include "iomanip"
#include "math.h"

using namespace std;

int main()
{
    string veiculo = "Carro";
    //declarar um ponteiro
    string *pv;
    
    //adicionando o endereço da variavel ao ponteiro
    pv = &veiculo; //pv recebe o endereço da variavel veiculo
    
    //imprimindo endereço da variavel veiculo
    cout << pv << "\n" << &veiculo << endl;

    //manipular o valor da variavel veiculo através do ponteiro
    *pv = "Moto";//no endereço apontado por *pv, adicione o valor "Moto"

    cout << "\n" << veiculo << "\n" << *pv << endl;

    return 0;
}

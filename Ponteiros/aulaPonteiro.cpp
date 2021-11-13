#include "cstdlib"
#include "iostream"

using namespace std;

int const tam = 1000;

//int teste(int *n);
void minMax(int n, int *v, int *min, int *max);

int main()
{
    /*
    int x;
    int y;
    int *px;
    int *py;

    cout << "Digite Valor de X: ";
    cin >> x;

    cout << "Digite Valor de Y: ";
    cin >> y;

    px = &x;
    py = &y;

    cout << "\n\nValor de X: " << *px << "\n";
    cout << "Endereço da variável X: " << px << "\n\n";

    cout << "Valor de Y: " << *py << "\n";
    cout << "Endereço da variável Y: " << py << "\n\n";

    cout << "Digite Valor de X: ";
    cin >> *px;

    cout << "\nValor de X: " << *px << "\n";
    cout << "Endereço da variável X: " << px << "\n\n";
    */

    int n;
    int v[tam];
    int menor = 0;
    int maior = 0;
    

    cout << "Digite o comprimento da sequência: ";
    cin >> n;

    cout << "Digite uma sequência de " << n << " números inteiros: " << "\n";

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    minMax(n, v, &menor, &maior);

    cout << menor << " é o elemento mínimo da sequencia" << "\n";
    cout << maior << " é o elemento máximo da sequencia" << "\n";

    return 0;
}

void minMax(int n, int *v, int *min, int *max){

    *min = v[0];
    *max = v[0];

    for(int i = 0; i < n; i++){
        if(v[i] < *min){
            *min = v[i];
        }
        else if(v[i] > *max){
            *max = v[i];
        }
    }


}


/*int teste(int &n){
    cout << "Endereço de N: " << &n;

    n += 5;

    cout << "\n\nValor de N: " << n << "\n";

    return n;
}*/

/*int teste(int *n){
    
    cout << "Endereço de N: " << n;

    *n += 5;

    cout << "\n\nValor de N: " << *n << "\n";

    return *n;
}*/


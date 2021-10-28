/*


OBS: ESSE CÓDIGO USA ALGUMAS SINTAXES DE C++
EX: cout (que substitui o printf) e o cin (que substitui o scanf);


*/

/*

2) Criar um algoritmo que leia os elementos de uma matriz de ordem 5 e imprima - toda a matriz e:

a)Uma outra matriz formada pelos números que se encontram em posições cuja a linha mais coluna formam um número par.
b)A matriz gerada só com números ímpares.
c)A matriz quadrada da soma dos quadrados dos números impares localizados abaixo da DS
*/

#include "iostream"
#include "cstdlib"
#include "math.h"
#include "iomanip"
#include "ctime"

using namespace std;

int const tam = 5;

void imprimeMat(int mat[tam][tam]);
void LinhasColunasFormamPar(int mat[tam][tam]);
void matSomenteImpares(int mat[tam][tam]);
void somaDosQuadrados(int mat[tam][tam]);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    
    int mat[tam][tam];

    cout << "Matriz original:  \n";
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "  ";
        for(int j = 0; j < tam; j++){
            int x = rand() % 10;
            mat[i][j] = x;
            cout << "[" << " " << mat[i][j] << "]";
        }
        cout << "\n";
        
    }

    cout << "\nÍmpares:  \n";
    matSomenteImpares(mat);

    cout << "\nA matriz quadrada da soma dos quadrados dos números " <<
    "impares localizados abaixo da DS: \n";
    somaDosQuadrados(mat);

    cout << "\nmatriz formada pelos números que se encontram em posições " <<
    "cuja a linha mais coluna formam um número par:  \n";
    LinhasColunasFormamPar(mat);

    
    return 0;
}

void imprimeMat(int mat[tam][tam]){

    cout << "Matriz original:  \n";
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "  ";
        for(int j = 0; j < tam; j++){
            cout << "[" << " " << mat[i][j] << "]";
        }
        cout << "\n";
        
    }
}

void LinhasColunasFormamPar(int mat[tam][tam]){
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "  ";
        for(int j = 0; j < tam; j++){
            if((i + j) % 2 == 0){
                cout << "[" << " " << mat[i][j] << "]";
            }
            else{
                cout << "[  ]";
            }
        }
        cout << "\n";
    }


}

void matSomenteImpares(int mat[tam][tam]){
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "  ";
        for(int j = 0; j < tam; j++){
            if((mat[i][j] % 2) != 0){
                cout << "[" << " " << mat[i][j] << "]";
            }
            else{
                cout << "[  ]";
            }
        }
        cout << "\n";
    }

}

void somaDosQuadrados(int mat[tam][tam]){
    int mat2[tam][tam];
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if ((i + j) > tam - 1)
            {
                if(mat[i][j] % 2 != 0){

                    mat2[i][j] = pow(mat[i][j], 2); 
                    mat2[i][j] += mat2[i][j];
                    cout << "[" << " " << mat2[i][j] << "]";
                }
                else{
                    cout << "[  ]";
                }
            }
            else{
                cout << "[  ]";
            }
        }
        cout << "\n";
    }

}
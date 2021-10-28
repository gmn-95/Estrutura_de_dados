/*


OBS: ESSE CÓDIGO USA ALGUMAS SINTAXES DE C++
EX: cout (que substitui o printf) e o cin (que substitui o scanf);

*/

/*

Lista de exercícios

1) Criar um algoritmo que leia os elementos de uma matriz inteira 10x10 e escreva:

a)todos os elementos, exceto os elementos da diagonal principal.
b)somente os elementos que estão acima da diagonal principal.
c)somente os elementos que estão abaixo da diagonal principal.
d)os elementos da diagonal secundária.
e)todos os elementos, exceto os elementos da diagonal secundária.
f)somente os elementos que estão acima da diagonal secundária.
g)somente os elementos que estão abaixo da diagonal secundária.

*/

#include "iostream"
#include "cstdlib"
#include "math.h"
#include "iomanip"
#include "ctime"

using namespace std;

int const tam = 10;

// subrotinas apenas para organização do código
void matrizOriginal(int mat[tam][tam]);
void excetoDiagonalPrincipal(int mat[tam][tam]);
void trianguloSupDP(int mat[tam][tam]);
void trianguloInfDP(int mat[tam][tam]);
void elementosDiagonalSec(int mat[tam][tam]);
void excetoDiagonalSec(int mat[tam][tam]);
void trianguloSupDS(int mat[tam][tam]);
void trianguloInfDS(int mat[tam][tam]);

int main(int argc, char const *argv[])
{   
    srand(time(NULL));
    
    int mat[tam][tam];

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            //valores aleatorios gerados de 0 a 9 e adicionado a matriz
            /*caso deseja inserir os valores manualmente, faça:
              cin >> mat[i][j], e exclua ou comente: int x = rand() % 10;
            */
            int x = rand() % 10;
            mat[i][j] = x;

        }
    }

    matrizOriginal(mat);
    excetoDiagonalPrincipal(mat);
    trianguloSupDP(mat);
    trianguloInfDP(mat);
    elementosDiagonalSec(mat);
    excetoDiagonalSec(mat);
    trianguloSupDS(mat);
    trianguloInfDS(mat);
    
    
    return 0;
}

void matrizOriginal(int mat[tam][tam]){
    
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

void excetoDiagonalPrincipal(int mat[tam][tam]){

    cout << "\n\n\nTodos os elementos, exceto os elementos da diagonal principal:\n";
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "  ";
        for(int j = 0; j < tam; j++){
            if(!(i == j)){
                cout << "[" << " " << mat[i][j] << "]";
            }
            else{
                cout << "[  ]";
            }
            
        }
        cout << "\n";
    }
}

void trianguloSupDP(int mat[tam][tam]){

    cout << "\n\n\nSomente os elementos que estão acima da diagonal principal:\n";
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "  ";
        for(int j = 0; j < tam; j++){
            if(i < j){
                cout << "[" << " " << mat[i][j] << "]";
            }
            else{
                cout << "[  ]";
            }
            
        }
        cout << "\n";
    }
}

void trianguloInfDP(int mat[tam][tam]){
    cout << "\n\n\nSomente os elementos que estão abaixo da diagonal principal:\n";
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "  ";
        for(int j = 0; j < tam; j++){
            if(i > j){
                 cout << "[" << " " << mat[i][j] << "]";
            }
            else{
                cout << "[  ]";
            }
            
        }
        cout << "\n";
    }
}

void elementosDiagonalSec(int mat[tam][tam]){
    cout << "\n\n\nOs elementos da diagonal secundária:\n";
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "  ";
        for(int j = 0; j < tam; j++){
            if((i + j) == tam - 1){
                cout << "[" << " " << mat[i][j] << "]";
            }
            else{
                cout << "[  ]";
            }
        }
        cout << "\n";
    }
    
}

void excetoDiagonalSec(int mat[tam][tam]){

    cout << "\n\n\nTodos os elementos, exceto os elementos da diagonal secundária:\n";
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "  ";
        for(int j = 0; j < tam; j++){
            if(!((i + j) == tam - 1)){
                cout << "[" << " " << mat[i][j] << "]";
            }
            else{
                cout << "[  ]";
            }

        }
        cout << "\n";
    }
}

void trianguloSupDS(int mat[tam][tam]){
    cout << "\n\n\nSomente os elementos que estão acima da diagonal secundária:\n";
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "  ";
        for(int j = 0; j < tam; j++){
    
            if((i + j) < tam - 1){ //i+j<=ordem
                cout << "[" << " " << mat[i][j] << "]";
            }
            else{
                cout << "[  ]";
            }
            

        }
        cout << "\n";
    }
        
}

void trianguloInfDS(int mat[tam][tam]){
    cout << "\n\n\nSomente os elementos que estão abaixo da diagonal secundária:\n";
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "  ";
        for(int j = 0; j < tam; j++){
    
            if(i + j > tam - 1 ){
                cout << "[" << " " << mat[i][j] << "]";
            }
            else{
                cout << "[  ]";
            }
        }
        cout << "\n";
    }
}
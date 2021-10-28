#include "cstdlib"
#include "iostream"

using namespace std;

int const tam = 5;

int main(int argc, char const *argv[])
{
    int mat[tam][tam];
    int cont = 1;
    //matriz
    cout << "Matriz original: \n";
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
    
    //diagonal principal
    cout << "\n\n";
    cout << "DP: \n";
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
        for(int j = 0; j < tam; j++){
            if(i == j){
                cout << "[" << " " << mat[i][j] << "]";
            }
            else{
                cout << "[  ]";
            }
            
        }
        cout << "\n";
    }

    //triangulo sup
    cout << "\n\n";
    cout << "triangulo superior da DP: \n";
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
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

    //triangulo inferior
    cout << "\n\n";
    cout << "triangulo inferior da DP: \n";
    cout << "     ";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
    }
    cout << "\n\n";
    for(int i = 0; i < tam; i++){
        cout << i << "   ";
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

   // diagonal sec
   cout << "\n\n";
    cout << "DS: \n";
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

    // triangulo sup sec
    cout << "\n\n";
    cout << "triangulo superior da DS: \n";
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

    //triangulo inferior diagonal sec
    cout << "\n\n";
    cout << "triangulo inferior da DS: \n";
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

   
    return 0;
}

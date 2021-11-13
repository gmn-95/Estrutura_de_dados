//ponteiros com array - manipular arrays com ponteiros

#include "cstdlib"
#include "iostream"
#include "iomanip"
#include "math.h"

using namespace std;

int main()
{   //variaveis int tem em cada vvalor 4 bytes
    int *p, vetor[10], num, *pt, teste[10];

    //manipular array
    //1 - associar 
    p = vetor; //atribuindo o endereço de memoria do primeiro elemento do vetor

    //*p = 10; //adiconando valor na segunda posição do vetor
    
    //cout << "\n" << *p << "\n";

    //*(p++); //incrementando o ponteiro

   // *p = 20;

   // cout << "\n" << *p << "\n";

   /* for(int i = 0; i < 3; i++){
        cout << "--> ";
        cin >> num;
        *p = num;
         p++;
    }

    for(int i = 0; i < 3; i++){
        cout << "\n" << vetor[i] << "\n";
    }*/

    //-----------------------------------
    pt = teste;

    for(int i = 1; i < 10; i++){
        *pt = i;
         cout << *pt << "\n";
         pt++;
    }

    return 0;
}


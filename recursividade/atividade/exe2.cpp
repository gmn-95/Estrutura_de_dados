/*


2.Refaça o exercício anterior, mas desta vez não utilize nenhum tipo de laço 
(for, while, do while, etc...).

*/

#include "iostream"
#include "cstdlib"
#include "math.h"
#include "iomanip"

using namespace std;

int soma(int n);

int main(int argc, char const *argv[])
{
    cout << soma(2) << "\n";
    return 0;
}

int soma(int n){


    if(n == 0){
       return 0;
    }
    else{
        return n + soma(n - 1);
    }

}
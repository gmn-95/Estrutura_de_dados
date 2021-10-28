#include "iostream"
#include "cstdlib"
#include "math.h"
#include "iomanip"

using namespace std;

void impVetCauda(int *v, int i, int n);
void impComRecursao(int *v, int i, int n);

int main(int argc, char const *argv[])
{
	
	int i = 0;
	int n = 2;

	int v[3] = {50, 51, 52};

	impVetCauda(v, i, n);
	cout << "\n";
	impComRecursao(v, i, n);
	cout << "\n";
	


	return 0;
}


//imprime normalmente o vet
void impVetCauda(int *v, int i, int n){
	if(i <= n){
		cout << v[i] << " ";
		impVetCauda(v, i + 1, n);
	}
}

//imprime invertido o vet
void impComRecursao(int *v, int i, int n){
	if(i <= n){
		impComRecursao(v, i + 1, n);
		cout << v[i] << " ";
	}
}
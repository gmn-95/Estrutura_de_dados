#include "iostream"
#include "cstdlib"
#include "math.h"
#include "iomanip"

using namespace std;


int parImpar(int num);
int par(int num);
int impar(int num);


int main(int argc, char const *argv[])
{
	
	int num = 0;
	int res = 0;

	cout << "Digite um número: ";
	cin >> num;

	//res = parImpar(num);

	//recursão

	res = par(num);

	if(num != 0 && res == 0){
		cout << num << " é ímpar" << endl;
	}
	else{
		cout << num << " é par" << endl;
	}


	return 0;
}

int parImpar(int num){
	if(num % 2 == 0){
		return 1; 
	}
	else{
		return 0;
	}
}


// com recursão

int par(int num){
	
	return num == 0 ? 0 : impar(num - 1);
}

int impar(int num){
	if(num == 0){
		return 0;
	}

	return num == 1 ? 1 : par(num - 1);

}
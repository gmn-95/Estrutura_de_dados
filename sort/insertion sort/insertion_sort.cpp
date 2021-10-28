/*
	Insertion Sort, ou ordenação por inserção, é um algoritmo de 
	ordenação que, dado uma estrutura (array, lista) constrói uma matriz 
	final com um elemento de cada vez, uma inserção por vez. Assim como 
	algoritmos de ordenação quadrática, é bastante eficiente para problemas 
	com pequenas entradas, sendo o mais eficiente entre os algoritmos desta ordem de classificação.

	Podemos fazer uma comparação do Insertion Sort com o modo como algumas pessoas organizam um 
	baralho num jogo de cartas. Imagine que você está jogando ás cartas. Você está com as cartas 
	na mão e elas estão ordenadas. Você recebe uma nova carta e deve colocá-la na posição correta 
	da sua mão de cartas, de forma a que as cartas obedeçam à ordenação.

	A cada nova carta adicionada à sua mão de cartas, a nova carta pode ser menor que algumas das 
	cartas que você já tem na mão ou maior, e assim, você começa a comparar a nova carta com todas 
	as cartas na sua mão até encontrar sua posição correta. Você insere a nova carta na posição 
	correta, e, novamente, a sua mão é composta de cartas totalmente ordenadas. Então, você recebe 
	outra carta e repete o mesmo procedimento. Então outra carta, e outra, e assim em diante, até 
	não receber mais cartas.

	Esta é a ideia por trás da ordenação por inserção. Percorra as posições do array, começando com 
	o índice 1 (um). Cada nova posição é como a nova carta que você recebeu, e você precisa inseri-la 
	no lugar correto no subarray ordenado à esquerda daquela posição. 

*/

#include "cstdlib"
#include "iostream"

int const TAM = 10;

using namespace std;

void imprime_vetor(int vet[TAM]);
void insertion_sort(int vet[TAM]);

int main(int argc, char const *argv[])
{		          //0  1  2  3  4  5  6  7  8   9
	int vet[TAM] = {2, 1, 8, 7, 6, 5, 3, 9, 10, 0}; //lista decrescente

	imprime_vetor(vet);

	insertion_sort(vet);

	imprime_vetor(vet);


	return 0;
}


void insertion_sort(int vet[TAM]){
 	
 	/*
 		vet[j] -> sempre posição atual
		vet[j - 1] -> sempre posição anterior

 	*/


	int aux;

	for(int i = 1; i < TAM; i++){

		int j = i;

		while(j > 0 && vet[j] < vet[j - 1]){

			aux = vet[j];		  //variável auxiliar recebe o valor que é menor que o anterior
			vet[j] = vet[j - 1];  //vet[j] recebe o valor da posição anterior, pois o valor da posição anterior
			                      // é maior do que a atual

			vet[j - 1] = aux;    //posição anterior, recebe o valor que é menor

			j--;
			imprime_vetor(vet);
		}

		

	}
}



/*
void insertion_sort(int vet[TAM]){

	int atual, j;

	for(int i = 1; i < TAM; i++){
		
		// elemento atual em análise
		atual = vet[i];
		
		//Elemento anterior já análisado
		j = i - 1;


		// analisando membros anteriores
		while((j >= 0) && (atual < vet[j])){

			// reposiciona os elementos uma posição para frente
			vet[j + 1] = vet[j];

			// faz o aneterior_analisado andar para trás
			j--;
		}

		// agora que o espaço foi aberto, colocamos o atual [menor número] na posição correta
		vet[j + 1] = atual;

		imprime_vetor(vet);
	}

}
*/
void imprime_vetor(int vet[TAM]){

	cout << "\n";

	for(int i = 0; i < TAM; i++){
		cout << " |" << vet[i] << "| ";
	}

	cout << "\n";
}
/*
    @autor Gustavo Macedo

    Realizei a atividade dividindo em diversas partes, para facilitar a
    compreensão, organização e uso do programa, por esse motivo existe os arquivos ".h" 
    (arquivos de cabeçalho) 
    que contém as ordenações sort e métodos de impressão

    O método de "impressão passo a passo"  está como comentado no programa, pois o seu uso
    estava alterando na velocidade/tempo para a verificação de qual tipo de ordenação 
    é a mais rápida. Para usá-lo é só remover o "//".



*/

#include "cstdlib"
#include "iostream"
#include "string"
#include "time.h"

#include "bubble_sort.h"
#include "insertion_sort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "selection_sort.h"
#include "shellSort.h"
#include "imprimeVetor.h"

using namespace std;

int TAM;

void add_valores_no_vetor(int *vet );
void menu_de_controle();
void sortMaisRapido(double *tempo,  string *ordencao);
void limpaTela(int sistema);
void pausa(int sistema);
void menosIteracoes(int *iterecoes);
void menu_opcoes();
int saber_sistema();

int main(int argc, char const *argv[])
{
    
    menu_de_controle();
    cout << "\n\n\n\n\n";

    return 0;
}

void menu_de_controle(){

    int resp = 1;
    int sistema = 0;
    double tempo[6];
    int iteracao[6];
    string ordenacoes[6] = {"bubble......: ", "insertion...: ", "merge_......: ", 
                            "quick.......: ", "selection...: ", "shell.......: "};

    string mostrar;

    sistema = saber_sistema();

    while (resp < 8)
    {   
        limpaTela(sistema);
        menu_opcoes();
        cin >> resp;

        if(resp == 1){
            cout << "\n\nApós vários testes, pude perceber, que para \n";
            cout << "vetores acima de 110, quick sort é mais rápido!";
        }

        if(resp != 8){
            cout << "\n\nDigite o tamnho do vetor: ";
            cin >> TAM;
        }
        
        int vet[TAM];
    
        switch (resp)
        {
        case 1:

            //zera tempo
            for(int i = 0; i < 6; i++){
                tempo[i] = 0;
            }
            
            add_valores_no_vetor(vet);
            tempo[0] = bubble(vet, TAM);
       
            cout << "\n\n\n-------------------------------------------------------------\n";
        
            add_valores_no_vetor(vet);
            tempo[1] = insertion(vet, TAM);
     
            cout << "\n\n\n-------------------------------------------------------------\n";

            add_valores_no_vetor(vet);
            tempo[2] = merge_(vet, TAM);
            
            cout << "\n\n\n-------------------------------------------------------------\n";

            add_valores_no_vetor(vet);
            tempo[3] = quick(vet, TAM);
           
            cout << "\n\n\n-------------------------------------------------------------\n";

            add_valores_no_vetor(vet);
            tempo[4] = selection(vet, TAM);
        
            cout << "\n\n\n-------------------------------------------------------------\n";

            add_valores_no_vetor(vet);
            tempo[5] = shell(vet, TAM); 
        
            cout << "\n\n\n-------------------------------------------------------------\n";

            cout << "Tempo: \n";
            sortMaisRapido(tempo, ordenacoes);

            cout << "\n-------------------------------------------------------------\n";
            cout << "Iterações: " << "\n";
            iteracao[0] = iteracaoBubble();
            iteracao[1] = iteracaoInsertion();
            iteracao[2] = iteracaoMerge();
            iteracao[3] = iteracaoQuick();
            iteracao[4] = iteracaoSelection();
            iteracao[5] = iteracaoShell();

            cout << "\n";

            menosIteracoes(iteracao);

            break;

        case 2:
            add_valores_no_vetor(vet);
            tempo[0] = bubble(vet, TAM);
            cout << "\n\n\n-------------------------------------------------------------\n";
            cout << "\n\nTempo: \n";
            cout << ordenacoes[0] << tempo[0] << "\n";

            cout << "\n-------------------------------------------------------------\n";
            cout << "Iterações: " << "\n";
            iteracaoBubble();
            
            break;

        case 3:
            add_valores_no_vetor(vet);
            tempo[1] = insertion(vet, TAM);
            cout << "\n\n\n-------------------------------------------------------------\n";
            cout << "\n\nTempo: \n";
            cout << ordenacoes[1] << tempo[1] << "\n";

            cout << "\n-------------------------------------------------------------\n";
            cout << "Iterações: " << "\n";
            iteracaoInsertion();

            break;

        case 4:
        
            add_valores_no_vetor(vet);
            tempo[2] = merge_(vet, TAM);
            cout << "\n\n\n-------------------------------------------------------------\n";
            cout << "\n\nTempo: \n";
            cout << ordenacoes[2] << tempo[2] << "\n";

            cout << "\n-------------------------------------------------------------\n";
            cout << "Iterações: " << "\n";
            iteracaoMerge();

            break;

        case 5:
            add_valores_no_vetor(vet);
            tempo[3] = quick(vet, TAM);
            cout << "\n\n\n-------------------------------------------------------------\n";
            cout << "\n\nTempo: \n";
            cout << ordenacoes[3] << tempo[3] << "\n";

            cout << "\n-------------------------------------------------------------\n";
            cout << "Iterações: " << "\n";
            iteracaoQuick();

            break;

        case 6:
            add_valores_no_vetor(vet);
            tempo[4] = selection(vet, TAM);
            cout << "\n\n\n-------------------------------------------------------------\n";
            cout << "\n\nTempo: \n";
            cout << ordenacoes[4] << tempo[4] << "\n";

            cout << "\n-------------------------------------------------------------\n";
            cout << "Iterações: " << "\n";
            iteracaoSelection();

            break;

        case 7:
            add_valores_no_vetor(vet);
            tempo[5] = shell(vet, TAM);
            cout << "\n\n\n-------------------------------------------------------------\n";
            cout << "\n\nTempo: \n";
            cout << ordenacoes[5] << tempo[5] << "\n";


            cout << "\n-------------------------------------------------------------\n";
            cout << "Iterações: " << "\n";
            iteracaoShell();

            break;

        case 8:
            resp = 8;
            break; 

        default:
            resp = 8;
            break;
        }

        pausa(sistema);

    }

}

int saber_sistema(){

    int sistema;

    cout << "Qual é o seu sistema operacional? " << "\n";
    cout << "1 - Windows \n";
    cout << "2 - Linux \n";
    cout << "--> ";
    cin >> sistema;

    return sistema;
}

void menu_opcoes(){
    
    cout << "\n\n***Menu***" << "\n";
    cout << "1 - Ver todas as ordenações.........:" << "\n";
    cout << "2 - bubble sort.....................:" << "\n";
    cout << "3 - insertion sort..................:" << "\n";
    cout << "4 - merge sort......................:" << "\n";
    cout << "5 - quick sort......................:" << "\n";
    cout << "6 - selection sort..................:" << "\n";
    cout << "7 - shell sort......................:" << "\n";
    cout << "8 - Sair............................:" << "\n";
    cout << "--> ";
}

void menosIteracoes(int *iterecoes){

    cout << "A ordenação que menos fez iterações para ordernar foi: " << "\n";

    int i = 0;
    int menos_iterecoes = iterecoes[0];
    int index_menos_iteracoes = 0;

    while (i < 6)
    {
        if(iterecoes[i] < menos_iterecoes){
            menos_iterecoes = iterecoes[i];
            index_menos_iteracoes = i;
        }
        i++;
    }

    switch (index_menos_iteracoes)
    {
    case 0:
        iteracaoBubble();
        break;
    
    case 1:
        iteracaoInsertion();
        break;

    case 2:
        iteracaoMerge();
        break;
    
    case 3:
        iteracaoQuick();
        break;
    
    case 4:
        iteracaoSelection();
        break;
    
    case 5:
        iteracaoShell();
        break;

    default:
        break;
    }
    
    
}

void sortMaisRapido(double *tempo, string *ordenacoes){
    double media[6];
    
    string listaDeOrd[6] = {"bubble ", "insertion", "merge ", 
                            "quick ", "selection ", "shell "};
    
    for(int i = 0; i < 6; i++){
        cout << ordenacoes[i];
        cout << tempo[i] << "\n";
    }

    int i = 0;
    double maisRapido = tempo[0];
    int index_ordMaisRapida;

    while (i < 6)
    {
        if(tempo[i] < maisRapido){
            maisRapido = tempo[i];
            index_ordMaisRapida = i;
        }  
        
        i++;

    }
    
    cout << "\n\nOrdenação mais rápida: " << listaDeOrd[index_ordMaisRapida] << "\n";
   
}

void add_valores_no_vetor(int *vet){
    
    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        vet[i] = rand() % 100;
    }

}

void limpaTela(int sistema){
    if(sistema == 1){
        system("cls");
    }
    else{
        system("clear");
    }
}

void pausa(int sistema){
    if(sistema == 1){
        cout << "\n\nPressione ENTER..." << "\n";
        system("PAUSE");
    }
    else{
        cout << "\n\nPressione ENTER..." << "\n";
        cin.ignore();
        getchar();
    }
}

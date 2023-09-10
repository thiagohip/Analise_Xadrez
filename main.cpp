#include <iostream>
#include "tabuleiro.h"
#include <fstream>

using namespace std;

Tabuleiro tab;

void printTabuleiro() {
    cout << "\t";
    for(int i=0; i<8; i++){
        cout << "  " << tab.letra(i) << " ";
    }
    cout << endl;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(j==0){
                cout << i+1 << "\t";
            }
            if(tab.tabuleiro[i][j] == NULL){
                cout << " | " << "x" ;
            }else{
                cout << " | " << tab.tabuleiro[i][j]->getValor();
            }
        }
        cout << "|" << endl;
    }
}

string valor_total(){
    int total_preta = 0;
    int total_branca = 0;
    for(int i=0; i < 8; i++){
        for(int j=0; j < 8; j++){
            if(tab.tabuleiro[i][j]->getValor() != 0){
                if(tab.tabuleiro[i][j]->getCor() == tab.tabuleiro[i][j]->COR_BRANCA){
                    total_branca+=tab.tabuleiro[i][j]->getValor();
                }else if(tab.tabuleiro[i][j]->getCor() == tab.tabuleiro[i][j]->COR_PRETA){
                    total_preta+=tab.tabuleiro[i][j]->getValor();
                }      
            }
            
        }
    }
    string out;
    out = "\nO valor total das peças brancas é de " + to_string(total_branca) + " e o valor total de pecas pretas e de " + to_string(total_preta);
    return out;
}

int main(){

    fstream arq;

    arq.open("analise.txt", fstream::in|fstream::out|fstream::trunc);

    int op1, op2;
    bool cor, flag=false;

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            tab.tabuleiro[i][j] = new SemPeca();
        }
    }

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            system("cls");
            printTabuleiro();
            cout << "Qual peca da posicao " << i+1 << tab.letra(j) << ": \n";
            cout << "[1]Sem peca" << endl;
            cout << "[2]Rei" << endl;
            cout << "[3]Dama" << endl;
            cout << "[4]Bispo" << endl;
            cout << "[5]Cavalo" << endl;
            cout << "[6]Torre" << endl;
            cout << "[7]Peao" << endl;
            cout << "[8]Finalizar" << endl;
            cout << "Opcao: ";
            cin >> op1;

            if(op1 > 1 && op1 < 8){
                cout << "Qual a cor da peca: \n";
                cout << "[1]Branca" << endl;
                cout << "[2]Preta" << endl;
                cout << "Cor: ";
                cin >> op2;
            }

            cor = op2 == 2 ? true : false;

            switch (op1)
            {
                case 1:
                    tab.tabuleiro[i][j] = new SemPeca();
                    break;
                case 2:
                    tab.tabuleiro[i][j] = new Rei(cor);
                    break;
                case 3:
                    tab.tabuleiro[i][j] = new Dama(cor);
                    break;
                case 4:
                    tab.tabuleiro[i][j] = new Bispo(cor);
                    break;
                case 5:
                    tab.tabuleiro[i][j] = new Cavalo(cor);
                    break;
                case 6:
                    tab.tabuleiro[i][j] = new Torre(cor);
                    break;
                case 7:
                    tab.tabuleiro[i][j] = new Peao(cor);
                    break;
                case 8:
                    flag = true;
                    break;
            }
            if(flag){
                break;
            }
        }
        if(flag){
            break;
        }
    }
    string out = tab.imprimirMovimentosPossiveis();
    out = out + valor_total();
    cout << out;

    if(arq.is_open()){
        arq << out;
    }

    arq.close();

    return 0;
}

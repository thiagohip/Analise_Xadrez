#include "pecas.h"
#include "iostream"

class Tabuleiro{
    public:
        Peca *tabuleiro[8][8];
        char letra(int);
        std::string imprimirMovimentosPossiveis();
};

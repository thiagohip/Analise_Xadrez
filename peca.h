#ifndef PECA_H
#define PECA_H
#include <iostream>

class Peca{
    public:
        const int COR_PRETA = 2;
        const int COR_BRANCA = 1;

        const int VALOR_DAMA = 9;
        const int VALOR_PEAO = 1;
        const int VALOR_CAVALO = 3;
        const int VALOR_BISPO = 3;
        const int VALOR_TORRE = 5;
        const int VALOR_REI = 50;
        const int SEM_PECA = 0;

        virtual int getValor() = 0;
        virtual int getCor() = 0;
        virtual std::string getPeca() = 0;
};

#endif

#include "peca.h"
#include <iostream>

class Peao : public Peca{
    public:
        int getValor();
        int getCor();
        std::string getPeca();
        Peao(bool);
        Peao();
    private:
        bool cor;
};

class Cavalo : public Peca{
    public:
        int getValor();
        int getCor();
        std::string getPeca();
        Cavalo(bool);
        Cavalo();
    private:
        bool cor;
};

class Bispo : public Peca{
    public:
        int getValor();
        int getCor();
        std::string getPeca();
        Bispo(bool);
        Bispo();
    private:
        bool cor;
};


class Torre : public Peca{
    public:
        int getValor();
        int getCor();
        std::string getPeca();
        Torre(bool);
        Torre();
    private:
        bool cor;
};

class Dama : public Peca{
    public:
        int getValor();
        int getCor();
        std::string getPeca();
        Dama(bool);
        Dama();
    private:
        bool cor;
};

class Rei : public Peca{
    public:
        int getValor();
        int getCor();
        std::string getPeca();
        Rei(bool);
        Rei();
    private:
        bool cor;
};

class SemPeca : public Peca{
    public:
        int getValor();
        int getCor();
        std::string getPeca();
    private:
        bool cor;
};


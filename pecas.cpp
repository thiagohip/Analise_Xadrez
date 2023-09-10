#include "pecas.h"
#include <iostream>


/*------------------------------------------------------------*/

int Peao::getValor(){
    return VALOR_PEAO;
}

std::string Peao::getPeca(){
    return "PEAO";
}

Peao::Peao(bool cor){
    this->cor = cor ? true : false;
}

Peao::Peao(){

}

int Peao::getCor(){
    if(cor){
        return COR_PRETA;
    }else{
        return COR_BRANCA;
    }
}


/*------------------------------------------------------------*/



int Cavalo::getValor(){
    return VALOR_CAVALO;
}

std::string Cavalo::getPeca(){
    return "CAVALO";
}

Cavalo::Cavalo(bool cor){
    this->cor = cor ? true : false;
}

Cavalo::Cavalo(){

}

int Cavalo::getCor(){
    if(cor){
        return COR_PRETA;
    }else{
        return COR_BRANCA;
    }
}



/*------------------------------------------------------------*/

int Bispo::getValor(){
    return VALOR_BISPO;
}

std::string Bispo::getPeca(){
    return "BISPO";
}

Bispo::Bispo(bool cor){
    this->cor = cor ? true : false;
}

Bispo::Bispo(){

}

int Bispo::getCor(){
    if(cor){
        return COR_PRETA;
    }else{
        return COR_BRANCA;
    }
}


/*------------------------------------------------------------*/

int Torre::getValor(){
    return VALOR_TORRE;
}

std::string Torre::getPeca(){
    return "TORRE";
}

Torre::Torre(bool cor){
    this->cor = cor ? true : false;
}

Torre::Torre(){

}

int Torre::getCor(){
    if(cor){
        return COR_PRETA;
    }else{
        return COR_BRANCA;
    }
}

/*------------------------------------------------------------*/


int Dama::getValor(){
    return VALOR_DAMA;
}

std::string Dama::getPeca(){
    return "DAMA";
}

Dama::Dama(bool cor){
    this->cor = cor ? true : false;
}

Dama::Dama(){

}


int Dama::getCor(){
    if(cor){
        return COR_PRETA;
    }else{
        return COR_BRANCA;
    }
}


/*------------------------------------------------------------*/

int Rei::getValor(){
    return VALOR_REI;
}

std::string Rei::getPeca(){
    return "REI";
}

Rei::Rei(bool cor){
    this->cor = cor ? true : false;
}

Rei::Rei(){

}


int Rei::getCor(){
    if(cor){
        return COR_PRETA;
    }else{
        return COR_BRANCA;
    }
}

/*------------------------------------------------------------*/

int SemPeca::getValor(){
    return SEM_PECA;
}

std::string SemPeca::getPeca(){
    return "SEM_PECA";
}

int SemPeca::getCor(){
    return false;
}

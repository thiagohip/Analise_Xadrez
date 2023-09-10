#include "tabuleiro.h"
#include <iostream>

char Tabuleiro::letra(int n){
    return ((char)(65+n));
}

std::string Tabuleiro::imprimirMovimentosPossiveis(){
    std::string out;
    int a, b;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(tabuleiro[i][j]->getValor() != 0){      
/*PEAO*/            if(tabuleiro[i][j]->getPeca() == "PEAO"){
                        if(tabuleiro[i][j]->getCor() == tabuleiro[i][j]->COR_BRANCA){
                            if(i == 1){
                                if(tabuleiro[i+2][j]->getValor() == 0){
                                    out = out + "PEAO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(i+3) + letra(j) + "\n";
                                }
                            }
                            if(tabuleiro[i+1][j]->getValor() == 0){
                                out = out + "PEAO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(i+2) + letra(j) + "\n";
                            }
                        }else if(tabuleiro[i][j]->getCor() == tabuleiro[i][j]->COR_PRETA){
                            if(i == 6){
                                if(tabuleiro[i-2][j]->getValor() == 0){
                                    out = out + "PEAO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string((i+1)-2) + letra(j) + "\n";
                                }
                            }
                            if(tabuleiro[i-1][j]->getValor() == 0){
                                out = out + "PEAO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string((i+1)-1) + letra(j) + "\n";
                            }
                        }
                            
/*CAVALO*/          }else if(tabuleiro[i][j]->getPeca() == "CAVALO"){
                        /**/if(i+2 < 8 && j+1 < 8 && tabuleiro[i+2][j+1]->getValor() == 0){
                            out = out + "CAVALO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string((i+1)+2) + letra(j+1) + "\n";
                        }
                        /**/if(i+2 < 8 && j-1 >= 0 && tabuleiro[i+2][j-1]->getValor() == 0){
                            out = out + "CAVALO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string((i+1)+2) + letra(j-1) + "\n";
                        }
                        /**/if(i+1 < 8 && j+2 < 8 && tabuleiro[i+1][j+2]->getValor() == 0){
                            out = out + "CAVALO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string((i+1)+1) + letra(j+2) + "\n";
                        }
                        /**/if(i+1 < 8 && j-2 >= 0 && tabuleiro[i+1][j-2]->getValor() == 0){
                            out = out + "CAVALO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string((i+1)+1) + letra(j-2) + "\n";
                        }
                        if(i-2 >= 0 && j-1 >= 0 && tabuleiro[i-2][j-1]->getValor() == 0){
                            out = out + "CAVALO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string((i+1)-2) + letra(j-1) + "\n";
                        }
                        if(i-2 >= 0 && j+1 < 8 && tabuleiro[i-2][j+1]->getValor() == 0){
                            out = out + "CAVALO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string((i+1)-2) + letra(j+1) + "\n";
                        }
                        if(i-1 >= 0 && j+2 < 8 && tabuleiro[i-1][j+2]->getValor() == 0){
                            out = out + "CAVALO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string((i+1)-1) + letra(j+2) + "\n";
                        }
                        if(i-1 >= 0 && j-2 >= 0 && tabuleiro[i-1][j-2]->getValor() == 0){
                            out = out + "CAVALO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string((i+1)-1) + letra(j-2) + "\n";
                        }
/*BISPO*/           }else if(tabuleiro[i][j]->getPeca() == "BISPO"){
                        a=i+1;
                        b=j+1;
                        while(a < 8 && b < 8){
                            if(tabuleiro[a][b]->getValor() == 0){
                                out = out + "BISPO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(a+1) + letra(b) + "\n";
                            }else{
                                break;
                            }
                            a++;
                            b++;
                        }
                        a=i+1;
                        b=i-1;
                        while(a<8 && b >= 0){
                            if(tabuleiro[a][b]->getValor() == 0){
                                out = out + "BISPO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(a+1) + letra(b) + "\n";
                            }else{
                                break;
                            }
                            a++;
                            b--;
                        }
                        a=i-1;
                        b=i-1;
                        while(a>=0 && b>=0){
                            if(tabuleiro[a][b]->getValor() == 0){
                                out = out + "BISPO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(a+1) + letra(b) + "\n";
                            }else{
                                break;
                            }
                            a--;
                            b--;
                        }
                        a=i-1;
                        b=i+1;
                        while(a>=0 && b<8){
                            if(tabuleiro[a][b]->getValor() == 0){
                                out = out + "BISPO(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(a+1) + letra(b) + "\n";
                            }else{
                                break;
                            }
                            a--;
                            b++;
                        }
/*TORRE*/           }else if(tabuleiro[i][j]->getPeca() == "TORRE"){
                        a = i+1;
                        while(a < 8){
                            if(tabuleiro[a][j]->getValor() == 0){
                                out = out + "TORRE(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(a+1) + letra(j) + "\n";
                            }else{
                                break;
                            }
                            a++;
                        }
                        a = i-1;
                        while(a >= 0){
                            if(tabuleiro[a][j]->getValor() == 0){
                                out = out + "TORRE(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(a+1) + letra(j) + "\n";
                            }else{
                                break;
                            }
                            a--;
                        }
                        b = j+1;
                        while(b < 8){
                            if(tabuleiro[i][b]->getValor() == 0){
                                out = out + "TORRE(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(i+1) + letra(b) + "\n";
                            }else{
                                break;
                            }
                            b++;
                        }
                        b = j-1;
                        while(b >= 0){
                            if(tabuleiro[i][b]->getValor() == 0){
                                out = out + "TORRE(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(i+1) + letra(b) + "\n";
                            }else{
                                break;
                            }
                            b--;
                        }
/*DAMA*/            }else if(tabuleiro[i][j]->getPeca() == "DAMA"){
                        a = i+1;
                        while(a < 8){
                            if(tabuleiro[a][j]->getValor() == 0){
                                out = out + "DAMA(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(a+1) + letra(j) + "\n";
                            }else{
                                break;
                            }
                            a++;
                        }
                        a = i-1;
                        while(a >= 0){
                            if(tabuleiro[a][j]->getValor() == 0){
                                out = out + "DAMA(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(a+1) + letra(j) + "\n";
                            }else{
                                break;
                            }
                            a--;
                        }
                        b = j+1;
                        while(b < 8){
                            if(tabuleiro[i][b]->getValor() == 0){
                                out = out + "DAMA(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(i+1) + letra(b) + "\n";
                            }else{
                                break;
                            }
                            b++;
                        }
                        b = j-1;
                        while(b >= 0){
                            if(tabuleiro[i][b]->getValor() == 0){
                                out = out + "DAMA(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(i+1) + letra(b) + "\n";
                            }else{
                                break;
                            }
                            b--;
                        }
                        a=i+1;
                        b=j+1;
                        while(a < 8 && b < 8){
                            if(tabuleiro[a][b]->getValor() == 0){
                                out = out + "DAMA(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(a+1) + letra(b) + "\n";
                            }else{
                                break;
                            }
                            a++;
                            b++;
                        }
                        a=i+1;
                        b=i-1;
                        while(a<8 && b >= 0){
                            if(tabuleiro[a][b]->getValor() == 0){
                                out = out + "DAMA(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(a+1) + letra(b) + "\n";
                            }else{
                                break;
                            }
                            a++;
                            b--;
                        }
                        a=i-1;
                        b=i-1;
                        while(a>=0 && b>=0){
                            if(tabuleiro[a][b]->getValor() == 0){
                                out = out + "DAMA(" +std::to_string(i+1) + letra(j) + "): " + std::to_string(a+1) + letra(b) + "\n";
                            }else{
                                break;
                            }
                            a--;
                            b--;
                        }
                        a=i-1;
                        b=i+1;
                        while(a>=0 && b<8){
                            if(tabuleiro[a][b]->getValor() == 0){
                                out = out + "DAMA(" + std::to_string(i+1) + letra(j) + "): " + std::to_string(a+1) + letra(b) + "\n";
                            }else{
                                break;
                            }
                            a--;
                            b++;
                        }
/*REI*/             }else if(tabuleiro[i][j]->getPeca() == "REI"){
                        if(tabuleiro[i+1][j+1]->getValor() == 0){
                            out = out + "REI(" + std::to_string(i+1) +  letra(j) +  "): " +  std::to_string((i+1)+1) +  letra(j+1) +  "\n";
                        }
                        if(tabuleiro[i+1][j-1]->getValor() == 0){
                            out = out +  "REI(" + std::to_string(i+1) +  letra(j) +  "): " +  std::to_string((i+1)+1) +  letra(j-1) +  "\n";
                        }
                        if(tabuleiro[i+1][j]->getValor() == 0){
                            out = out +  "REI(" + std::to_string(i+1) +  letra(j) +  "): " +  std::to_string((i+1)+1) +  letra(j) +  "\n";
                        }
                        if(tabuleiro[i-1][j-1]->getValor() == 0){
                            out = out +  "REI(" + std::to_string(i+1) +  letra(j) +  "): " +  std::to_string((i+1)-1) +  letra(j-1) +  "\n";
                        }
                        if(tabuleiro[i-1][j+1]->getValor() == 0){
                            out = out +  "REI(" + std::to_string(i+1) +  letra(j) +  "): " +  std::to_string((i+1)-1) +  letra(j+1) +  "\n";
                        }
                        if(tabuleiro[i-1][j]->getValor() == 0){
                            out = out +  "REI(" + std::to_string(i+1) +  letra(j) +  "): " +  std::to_string((i+1)-1) +  letra(j) +  "\n";
                        }
                        if(tabuleiro[i][j-1]->getValor() == 0){
                            out = out +  "REI(" + std::to_string(i+1) +  letra(j) +  "): " +  std::to_string(i+1) +  letra(j-1) +  "\n";
                        }
                        if(tabuleiro[i][j+1]->getValor() == 0){
                            out = out +  "REI(" + std::to_string(i+1) +  letra(j) +  "): " +  std::to_string(i+1) +  letra(j+1) +  "\n";
                        }  

                    }
            }
        }
    }
    return out;
}
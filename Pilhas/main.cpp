#include <iostream>
#include "Header_TAD.hpp";
using namespace std;

int main(){
    Pilha pilha, pilha2;
    CriaPilhaVazia(&pilha);
    CriaPilhaVazia(&pilha2);
    string Roma = "roma";

    for(int i = 0; i<Roma.length(); i++){
        Item item;
        item.letra = Roma.at(i);
        empilha(&pilha, item);
    }
    ImprimePilha(pilha);

    for (int i=0; i<Roma.length(); i++){
        Item item;
        item.letra = Roma.at(i);
        empilha(&pilha2, desempilha(&pilha));
    }

    ImprimePilha(pilha2);
    return 0;
}
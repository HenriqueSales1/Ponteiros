#include <iostream>
#define max 5
using namespace std;

typedef struct Item{
    char letra;
};

typedef struct Pilha{
    Item item[max];
    int tamanho;
};

bool CriaPilhaVazia (Pilha* pilha){
    if(pilha->tamanho == 0){
        cout << "Pilha criada, vazia.";
    } else {
        pilha->tamanho = 0;
    }
}

bool VerificaPilhaVazia (Pilha* pilha){
    if(pilha->tamanho == 0){
        return true;
    } else {
        return false;
    }
}

bool VerificaPilhaCheia (Pilha* pilha){
    if(pilha->tamanho == max){
        return true;
    } else {
        return false;
    }
}

bool empilha (Pilha* pilha, Item item){
    if(VerificaPilhaCheia(pilha)){
        return false;
    } else {
        pilha->item[pilha->tamanho] = item;
        pilha->tamanho++;
        return true;
    }
}

Item desempilha (Pilha* pilha){
    Item item;
    item = pilha->item[pilha->tamanho -1];
    pilha->item[pilha->tamanho] = pilha->item[pilha->tamanho +1];
    pilha->tamanho--;
    return item;
}

void ImprimePilha (Pilha pilha){
    for(int i=0; i<pilha.tamanho; i++){
        cout << pilha.item[i].letra;
    }
    cout << endl;
}

bool getTamanho (Pilha* pilha){
    return pilha->tamanho;
}
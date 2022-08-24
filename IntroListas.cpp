#include <iostream>
#define maxTam 10

using namespace std;

typedef struct{
    int chave;
    char letra[maxTam];
} TipoItem;

typedef struct{
    TipoItem lista[maxTam];
    int tamanho = 0;
} TipoLista;

void CriaLista (TipoLista &lista){
    lista.tamanho = 0;
}

int VerificaListaVazia (TipoLista &lista){
    if (lista.tamanho == 0){
        return 0;
    } else {
        return 1;
    }
}

void InsereLista (TipoLista &lista, TipoItem item){
    lista.lista[lista.tamanho] = item;
    lista.tamanho++;
}

int LocalizaLista (TipoLista &lista, TipoItem item){
    for(int i=0; i<maxTam; i++){
        if(&item == &lista.lista[i]){
            return i;
        }
    } return 0;
}

void RetiraLista (TipoLista &lista, TipoItem &item){
    int posicao = LocalizaLista(lista, item);
    for(int i=posicao; i<maxTam-1; i++){
        lista.lista[i] = lista.lista[i+1];
    }
    delete &lista.lista[maxTam-1];
}

void ImprimeLista (TipoLista &lista){
    for (int i=0; i<lista.tamanho; i++){
        cout << lista.lista[i].chave << " " << lista.lista[i].letra;
    }
}

int main(){
    TipoLista lista;
    TipoItem item;
    cin >> item.chave;
    cin.ignore();
    cin.getline(item.letra, maxTam);
    CriaLista(lista);
    InsereLista (lista, item);
    ImprimeLista (lista);
}
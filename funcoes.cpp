#include <iostream>
#define maxtam 30

using namespace std;

typedef struct TipoItem
{
    string nome;
    string matricula;
    string turma;
    float nota1, nota2, nota3;
};

typedef struct TipoLista
{
    TipoItem item[maxtam];
    int tamanho;
};

void criaListaVazia(TipoLista *lista)
{
    lista->tamanho = 0;
}

bool verificaListaVazia(TipoLista *lista)
{
    if (lista->tamanho == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool verificaListaCheia(TipoLista *lista)
{
    if (lista->tamanho == maxtam)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool insereItem(TipoLista *lista, TipoItem item)
{
    if (!verificaListaCheia(lista))
    {
        lista->item[lista->tamanho] = item;
        lista->tamanho++;

        return true;
    }
    else
    {
        return false;
    }
}

int localizaItem(TipoLista *lista, string id)
{
    for (int i = 0; i < lista->tamanho; i++)
    {
        if (lista->item[i].matricula == id)
        {
            return i;
        }
    }
    return -1;
}

int removeItem(TipoLista *lista, string id)
{
    int posicao = localizaItem(lista, id);
    for (int i = posicao; i < lista->tamanho; i++)
    {
        lista->item[i] = lista->item[i + 1];
    }
    lista->tamanho--;
}

void imprimeLista (TipoLista lista, string turma){
    for (int i = 0; i<lista.tamanho; i++){
        if(lista.item[i].turma == turma){
            cout << "Aluno: " << lista.item[i].nome << " | Matricula: " << lista.item[i].matricula << " | Turma: " << lista.item[i].turma << " | Media: "
            << (lista.item[i].nota1 + lista.item[i].nota2 + lista.item[i].nota3)/3 << "\n";
        }
    }
}
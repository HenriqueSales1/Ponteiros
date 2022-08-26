#include "funcoes.cpp"
#ifndef LISTA_H
#define LISTA_H

struct TipoLista;
struct TipoItem;
void criaListaVazia(TipoLista *lista);
bool verificaListaVazia(TipoLista *lista);
bool insereItem(TipoLista *lista, TipoItem item);
int localizaItem(TipoLista *lista, string id);
int removeItem(TipoLista *lista, string id);
void imprimeLista (TipoLista lista, string turma);

#endif
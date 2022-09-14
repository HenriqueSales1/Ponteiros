#ifndef PILHA_H
#define PILHA_H

#include "TAD_Pilhas.cpp";

bool CriaPilhaVazia (Pilha* pilha);
bool VerificaPilhaVazia (Pilha* pilha);
bool VerificaPilhaCheia (Pilha* pilha);
bool empilha (Pilha* pilha, Item item);
Item desempilha (Pilha* pilha);
void ImprimeLista (Pilha pilha);
bool getTamanho (Pilha* pilha);

#endif
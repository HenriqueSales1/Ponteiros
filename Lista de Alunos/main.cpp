#include <iostream>
#include "lista.hpp"
using namespace std;
int main(){
    TipoItem aluno;
    TipoLista lista;

    criaListaVazia(&lista);

    aluno.nome = "Lucas";
    aluno.matricula = "1";
    aluno.turma = "A";
    aluno.nota1 = 10;
    aluno.nota2 = 5;
    aluno.nota3 = 7.6;

    insereItem(&lista, aluno);

    aluno.nome = "Henrique";
    aluno.matricula = "2";
    aluno.turma = "A";
    aluno.nota1 = 10;
    aluno.nota2 = 9;
    aluno.nota3 = 8.6;

    insereItem(&lista, aluno);

    aluno.nome = "Igor";
    aluno.matricula = "3";
    aluno.turma = "A";
    aluno.nota1 = 6;
    aluno.nota2 = 5;
    aluno.nota3 = 7.2;

    insereItem(&lista, aluno);

    imprimeLista(lista, "A");
}
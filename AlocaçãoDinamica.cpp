#include <iostream>
#include <time.h>

using namespace std;

void preencheVetor(int *v, int num)
{
    srand(time(NULL));
    for (int i = 0; i < num; i++)
    {
        v[i] = rand() % num + 1;
    }
}

int pesquisaNum(int *v, int numIns, int num)
{
    int cont = 0;
    for (int i = 0; i < num; i++)
    {
        if (numIns == v[i])
        {
            cont++;
        }
    }
    return cont;
}

int main()
{
    int tam, num;
    cout << "Tamanho do vetor: ";
    cin >> tam;
    cout << "Informe o numero a ser pesquisado: ";
    cin >> num;

    cout << endl;

    int *vetor;
    vetor = new int[tam];

    preencheVetor(vetor, tam);
    int a = pesquisaNum(vetor, num, tam);

    for (int i = 0; i < tam; i++)
    {
        cout << vetor[i] << " ";
    }

    cout << "\n";

    if (a > 0)
    {
        cout << "\nNumero existente";
    }
    else
    {
        cout << "\nNumero inexistente";
    }

    return 0;
}
#include <iostream>

using namespace std;

void multiplica_por_n(int *vet, int qtde, int n)
{
    for (int i = 0; i < qtde; i++)
    {
        vet[i] *= n;
    }
}

int main()
{
    int qtde, multiplicador;

    cout << "Digite a quantidade de elementos no vetor: ";
    cin >> qtde;

    int *vetor = new int[qtde];

    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < qtde; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "Digite o multiplicador: ";
    cin >> multiplicador;

    multiplica_por_n(vetor, qtde, multiplicador);

    cout << "Vetor apos a multiplicacao por " << multiplicador << ":" << endl;
    for (int i = 0; i < qtde; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    // Liberar a memoria alocada para o vetor
    delete[] vetor;

    return 0;
}
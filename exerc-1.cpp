#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo)
{
    if (n <= 0)
    {
        cout << "vetor esta vazio." << endl;
        return;
    }

    maximo = vetor[0];
    minimo = vetor[0];

    for (int i = 1; i < n; i++)
    {
        if (vetor[i] > maximo)
        {
            maximo = vetor[i];
        }
        else if (vetor[i] < minimo)
        {
            minimo = vetor[i];
        }
    }
}

int main()
{
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    if (tamanho <= 0)
    {
        cout << "Erro: O tamanho do vetor deve ser maior que zero." << endl;
        return 1; 
    }

    int *vetor = new int[tamanho];

    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < tamanho; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    int maximo, minimo;
    maxmin(vetor, tamanho, maximo, minimo);

    cout << "O valor maximo : " << maximo << std::endl;
    cout << "O valor manimo : " << minimo << std::endl;

    delete[] vetor; // Liberar a memoria alocada para o vetor

    return 0;
}
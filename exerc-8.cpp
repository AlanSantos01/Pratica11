#include <iostream>

using namespace std;

bool eh_primo(int numero)
{
    if (numero <= 1)
    {
        return false; 
    }
    if (numero <= 3)
    {
        return true;
    }
    if (numero % 2 == 0 || numero % 3 == 0)
    {
        return false; 
    }

    
    for (int i = 5; i * i <= numero; i += 6)
    {
        if (numero % i == 0 || numero % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

int conta_primos(int *vet, int qtde)
{
    int count = 0;
    for (int i = 0; i < qtde; i++)
    {
        if (eh_primo(vet[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int qtde;

    cout << "Digite a quantidade de elementos no vetor: ";
    cin >> qtde;

    int *vetor = new int[qtde];

    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < qtde; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    int quantidade_primos = conta_primos(vetor, qtde);

    cout << "Quantidade de numeros primos no vetor: " << quantidade_primos << endl;

    delete[] vetor;

    return 0;
}
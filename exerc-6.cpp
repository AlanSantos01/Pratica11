#include <iostream>

using namespace std;

int *intercala(int *vet1, int tam1, int *vet2, int tam2)
{
    int *resultado = new int[tam1 + tam2]; // Cria um novo vetor para armazenar o resultado
    int index1 = 0, index2 = 0, indexResultado = 0;

    // Intercale os elementos dos dois vetores ate que um deles seja totalmente processado
    while (index1 < tam1 && index2 < tam2)
    {
        resultado[indexResultado++] = vet1[index1++];
        resultado[indexResultado++] = vet2[index2++];
    }

    // Copie os elementos restantes do primeiro vetor (se houver)
    while (index1 < tam1)
    {
        resultado[indexResultado++] = vet1[index1++];
    }

    // Copie os elementos restantes do segundo vetor (se houver)
    while (index2 < tam2)
    {
        resultado[indexResultado++] = vet2[index2++];
    }

    return resultado;
}

int main()
{
    int tam1, tam2;

    cout << "Digite o tamanho do primeiro vetor: ";
    cin >> tam1;

    cout << "Digite o tamanho do segundo vetor: ";
    cin >> tam2;

    int *vetor1 = new int[tam1];
    int *vetor2 = new int[tam2];

    cout << "Digite os elementos do primeiro vetor:" << std::endl;
    for (int i = 0; i < tam1; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor1[i];
    }

    cout << "Digite os elementos do segundo vetor:" << std::endl;
    for (int i = 0; i < tam2; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor2[i];
    }

    int *resultado = intercala(vetor1, tam1, vetor2, tam2);

    cout << "Vetor intercalado:" << endl;
    for (int i = 0; i < tam1 + tam2; i++)
    {
        cout << resultado[i] << " ";
    }
    cout << endl;

    // Liberar a memoria alocada para os vetores
    delete[] vetor1;
    delete[] vetor2;
    delete[] resultado;

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

void encontra_posicoes(const std::string &str, char letra, std::vector<int> &posicoes, int &tamanho)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == letra)
        {
            posicoes.push_back(i);
        }
    }

    tamanho = posicoes.size();
}

int main()
{
    string texto;
    char letra;

    cout << "Digite uma string de caracteres: ";
    cin >> texto;

    cout << "Digite uma letra: ";
    cin >> letra;

    vector<int> posicoes;
    int tamanho = 0;

    encontra_posicoes(texto, letra, posicoes, tamanho);

    if (tamanho > 0)
    {
        cout << "A letra '" << letra << "' foi encontrada nas posicoes: ";
        for (int i = 0; i < tamanho; i++)
        {
            cout << posicoes[i] << " ";
        }
        cout << std::endl;
    }
    else
    {
        cout << "A letra '" << letra << "' nao foi encontrada na string." << endl;
    }

    return 0;
}
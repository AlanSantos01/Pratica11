#include <iostream>

using namespace std;

float calc_serie(int N)
{
    float soma = 0.0;

    for (int numerador = 1, denominador = N; numerador <= N; numerador++, denominador--)
    {
        soma += static_cast<float>(numerador) / static_cast<float>(denominador);
    }

    return soma;
}

int main()
{
    int N;

    cout << "Digite um valor inteiro N: ";
    cin >> N;

    if (N <= 0)
    {
        cout << "N deve ser maior que zero." << endl;
        return 1;
    }

    float resultado = calc_serie(N);

    cout << "A soma da serie : " << resultado << endl;

    return 0;
}
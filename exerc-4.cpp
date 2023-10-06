#include <iostream>

using namespace std;

void calcula(int &X, int &Y)
{
    int soma = X + Y;
    int subtracao = X - Y;

    X = soma;
    Y = subtracao;
}

int main()
{
    int num1, num2;

    cout << "Digite o o primeiro numero inteiro:" << endl;
    cin >> num1; 

    cout << "Digite o segundo numero inteiro:" << endl;
    cin >> num2;

    calcula(num1, num2);

    cout << "Apos a chamada da fucaoo, X agora eh: " << num1 << endl;
    cout << "Apos a chamada da funcao=, Y agora eh: " << num2 << endl;

    return 0;
}
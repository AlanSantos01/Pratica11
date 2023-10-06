#include <iostream>

using namespace std;

void ordenacao(float &a, float &b, float &c, float &d)
{
    float temp;
    bool trocou;

    do
    {
        trocou = false;
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
            trocou = true;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
            trocou = true;
        }
        if (c > d)
        {
            temp = c;
            c = d;
            d = temp;
            trocou = true;
        }
    } while (trocou);
}

int main()
{
    float num1, num2, num3, num4;

    cout << "Digite quatro numeros flutuantes:" << endl;
    cin >> num1 >> num2 >> num3 >> num4;

    ordenacao(num1, num2, num3, num4);

    cout << "Os numeros em ordem crescente sao: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

string caracteres_comuns(const std::string &A, const std::string &B)
{
    string C;

    for (char c : A)
    {
        if (B.find(c) != string::npos && C.find(c) == string::npos)
        {
            C += c;
        }
    }

    return C;
}

int main()
{
    string A, B;

    cout << "Digite a primeira string (A): ";
    cin >> A;

    cout << "Digite a segunda string (B): ";
    cin >> B;

    string C = caracteres_comuns(A, B);

    if (C.empty())
    {
        cout << "Nao ha caracteres comuns entre A e B." << endl;
    }
    else
    {
        cout << "Caracteres comuns entre A e B: " << C << endl;
    }

    return 0;
}
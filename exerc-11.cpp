#include <iostream>
#include <string>

using namespace std;

string codificar(const std::string &input)
{
    string codigo = input; 

    for (char &c : codigo)
    {
        if (isalpha(c))
        { 
            if (c == 'Z')
            {
                c = 'A'; 
            }
            else if (c == 'z')
            {
                c = 'a'; 
            }
            else
            {
                c++; 
            }
        }
    }

    return codigo;
}

string decodificar(const std::string &input)
{
    string decodificado = input; 

    for (char &c : decodificado)
    {
        if (isalpha(c))
        { 
            if (c == 'A')
            {
                c = 'Z'; 
            }
            else if (c == 'a')
            {
                c = 'z'; 
            }
            else
            {
                c--; 
            }
        }
    }

    return decodificado;
}

int main()
{
    string texto;

    cout << "Digite uma string: ";
    getline(cin, texto);

    string texto_codificado = codificar(texto);
    string texto_decodificado = decodificar(texto_codificado);

    cout << "Texto Codificado: " << texto_codificado << std::endl;
    cout << "Texto Decodificado: " << texto_decodificado << std::endl;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int idade;
    char classificacao;

    cout << "Informe sua Idade: ";
    cin >> idade;

    if((idade <= 5) && (idade <= 7))
    {
        cout << "Você esta na categoria Infantil A";
    }

    else if(idade <= 8)
    {
        cout << "Você esta na categoria Infantil B";
    }
    else if(idade <= 10)
    {
        cout << "Você esta na categoria Juvenil A";
    }
    else if(idade <= 13)
    {
        cout << "Você esta na Categoria Juvenil B";
    }
    else if(idade >= 17)
    {
        cout << "Você esta na categoria Senior";
    }
    else
        {
            cout << "Sua categoria não esta cadastrada";
        }
}

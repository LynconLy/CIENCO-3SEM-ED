#include <iostream>
#include <locale>

using namespace std;

int main()
{

    setlocale(LC_ALL, "PORTUGUESE");

    float peso;
    float altura;
    float imc;

    cout << "Informe sua Altura: ";
    cin >> altura;

    cout << "Agora informe seu Peso: ";
    cin >> peso;

    altura = altura * altura;

    imc = peso / altura;

    if(imc < 20)
    {
        cout << "Voc� esta Abaixo do Peso";
    }
    else if (imc < 25)
    {
        cout << "Voc� esta no Peso Ideal";
    }
    else if (imc >= 25)
    {
        cout << "Voc� esta Acima do Peso";
    }
}

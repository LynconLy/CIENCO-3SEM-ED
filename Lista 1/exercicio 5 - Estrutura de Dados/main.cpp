#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float valproduto, valdesc;
    int modopag;

    cout << "Informe o valor do produto: ";
    cin >> valproduto;

    cout << "Agora informe a maneira que deseja pagar: ";
    cin >> modopag;

    switch(modopag)
    {
        case(1):
      {
         valdesc = valproduto * 10 / 100;
         cout << "A maneira 1 � paga � vista no dinheiro ou no cheque, com 10% de desconto\n";
         cout << "O valor do produto ap�s o desconto ser�: R$" << valdesc;
      }
      break;

        case(2):
      {
         valdesc = valproduto * 5 / 100;
         cout << "A maneira 2 � paga � vista no cart�o de cr�dito, com 5% de desconto\n";
         cout << "O valor do produto ap�s o desconto ser�: R$" << valdesc;
      }
      break;
        case(3):
      {
         valdesc = valproduto / 2;
         cout << "A maneira 3 � paga em duas vezes\n";
         cout << "O valor das duas parcelas ser�: R$" << valdesc;
      }
      break;
        case(4):
      {
         valdesc = valproduto / 3;
         cout << "A maneira 4 � paga em tr�s vezes\n";
         cout << "O valor das parcelas ser�: R$" << valdesc;
      }
    }

}

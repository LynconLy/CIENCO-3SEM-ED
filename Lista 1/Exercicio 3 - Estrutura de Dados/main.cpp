#include <iostream>

using namespace std;

int main()
{
    float horas = 0;
    float horas_trab = 0;
    float salario_min = 0;
    float salario_bruto = 0;
    float imposto = 0;
    float salarioreceb = 0;

    cout << "Informe a quantidade de horas trabalhadas: ";
    cin >> horas;

    cout << "Informe o valor do Salário Minimo: ";
    cin >> salario_min;

    horas_trab = (salario_min / 2);

    salario_bruto = (horas * horas_trab);

    imposto = (salario_bruto * 3 / 100);

    salarioreceb = (salario_bruto - imposto);

    cout << "Salário á Receber: R$" << salarioreceb << "\n";

}

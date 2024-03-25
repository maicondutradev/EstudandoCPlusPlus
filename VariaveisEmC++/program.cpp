#include <iostream>

using namespace std;

int main()
{
    // << = Saída de dados / >> = Entrada de dados
    int numero1;
    int numero2;

    cout << "Digite o valor do primeiro numero: ";
    cin >> numero1;

    cout << "Digite o valor do segundo numero: ";
    cin >> numero2;

    int soma = numero1 + numero2;

    cout << "O resultado e " << soma;

    return 0;
}
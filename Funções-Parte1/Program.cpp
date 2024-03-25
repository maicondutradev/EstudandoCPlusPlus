#include <iostream>

using namespace std;

void AprendendoFuncao()
{
    cout << "Testando...";
}

void Soma(int numero1, int numero2)
{
    int soma = numero1 + numero2;
    cout << "\nA soma dos numeros " << numero1 << " e " << numero2 << " da : " << soma;
}

void ImprimirValor(string tra[4])
{
    for (int i = 0; i < 4; i++)
    {
        cout << tra[i] << "\n";
    }
}

int main()
{
    string transp[4] = {"Carro", "Moto", "Barco", "Aviao"};

    ImprimirValor(transp);

    AprendendoFuncao();

    Soma(5, 5);

    return 0;
}

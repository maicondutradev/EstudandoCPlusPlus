#include <iostream>

using namespace std;

// Prototipando a função
void Soma();

void Soma(int n1, int n2);

int main()
{
    Soma();
    Soma(5, 10);
    return 0;
}

//A sobrecarga de funções em C++ é uma técnica que permite ter várias funções com o mesmo nome, mas com diferentes parâmetros. Isso significa que você pode ter várias versões de uma função com o mesmo nome, mas que realizam operações diferentes com base nos tipos ou números de parâmetros passados.
void Soma(int n1, int n2)
{
    int res = n1 + n2;

    cout << "Soma de " << n1 << " + " << n2 << " = " << res << "\n";
}

void Soma()
{
    int n1 = 10, n2 = 20;

    int res = n1 + n2;

    cout << "Soma de " << n1 << " + " << n2 << " = " << res << "\n";
}
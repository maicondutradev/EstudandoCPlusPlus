#include <iostream>

using namespace std;

int main()
{
    int nota1, nota2, media;
    string res;

    cout << "Digite a nota 1: ";
    cin >> nota1;

    cout << "Digite a nota 2: ";
    cin >> nota2;

    media = nota1 + nota2;

    // Operador Ternario
    (media >= 7) ? res = "Aprovado!" : res = "Reprovado";

    cout << "Situacao do aluno: " << res << "\n";

    return 0;
}
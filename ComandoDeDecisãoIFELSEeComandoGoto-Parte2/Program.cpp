#include <iostream>

using namespace std;

int main()
{

    float nota1, nota2, media;
    char opcao;

inicio:
    cout << "Digite a nota 1: ";
    cin >> nota1;

    cout << "Digite a nota 2: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2.0;

    cout << "A media do aluno e: " << media << endl;

    if (media >= 7.0)
    {
        cout << "Aluno aprovado!" << endl;
    }
    else if (media > 6 && media < 7.0)
    {
        cout << "Aluno em recuperacao!" << endl;
    }
    else
    {
        cout << "Aluno reprovado." << endl;
    }

    cout << "Deseja calcular a media de outro aluno? (S/N): ";
    cin >> opcao;

    if (opcao == 'S' || opcao == 's')
    {
        goto inicio;
    }

    return 0;
}
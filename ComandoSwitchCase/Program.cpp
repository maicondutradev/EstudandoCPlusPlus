#include <iostream>

using namespace std;

int main()
{
    int valor;

    cout << "Selecione uma cor\n";
    cout << "[1]Verde [2]Amarelo [3]Vermelho\n";
    cin >> valor;

    switch (valor)
    {
    case 1:
        cout << "Voce escolheu Verde\n";
        break;
    case 2:
        cout << "Voce escolheu Amarelo\n";
        break;
    case 3:
        cout << "Voce escolheu Vermelho\n";
    default:
        cout << "Cor invalida!\n";
        break;
    }

    /////////////////////////////////////////////////////////

    int escolha;

    cout << "Selecione um trasnporte\n";
    cout << "[1]Carro [2]Moto [3]Aviao [4]Helicoptero\n";
    cin >> escolha;

    switch (escolha)
    {
    case 1:
    case 2:
        cout << "Transporte terrestre\n";
        switch (escolha)
        {
        case 1:
            cout << "Voce escolheu carro!\n";
            break;
        case 2:
            cout << "Voce escolheu moto!\n";
            break;
        default:
            cout << "Valor invalido!";
            break;
        }
        break;
    case 3:
    case 4:
        cout << "Transporte aereo\n";
        switch (escolha)
        {
        case 3:
            cout << "Voce escolheu aviao!\n";
            break;
        case 4:
            cout << "Voce escolheu Helicoptero\n";
            break;
        default:
            cout << "Valor invalido!";
            break;
        }
        break;
    default:
        cout << "Valor invalido!";
        break;
    }

    return 0;
}
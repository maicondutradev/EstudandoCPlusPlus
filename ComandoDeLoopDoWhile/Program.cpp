#include <iostream>

using namespace std;

int main()
{
    int contador = 10;

    // Executa o bloco de comando pelo menos uma vez, pois a verificação é feita depois
    do
    {
        cout << "Testando do while..." << contador << "\n";
        contador++;
    } while (contador < 10);

    cout << "Rotina finalizada...";

    return 0;
}
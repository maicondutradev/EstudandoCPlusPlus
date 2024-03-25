#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    while (numero < 10)
    {
        // Colocando antes do incremento, ele conta de 0 a 9 e colocado depois de 1 a 10
        cout << numero << "\n";
        numero++;

        if (numero == 8)
        {
            // Parando a execução do programa (Loops)
            break;
        }
    }

    cout << "Rotina finalizada!";

    return 0;
}
#include <iostream>
#include <array>
using namespace std;
int main()
{
    int listaArray[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Adquirindo o tamanho da lista, dividindo o tamanho do array pelo tamanho do elemento.
    int tamanhoArray = sizeof(listaArray) / sizeof(listaArray[0]);

    // Percorrendo a lista usando o tamanho dela como base
    for (int i = 0; i < tamanhoArray; i++)
    {
        cout << listaArray[i] << "\n";
    }
    return 0;
}
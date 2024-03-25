#include <iostream>

using namespace std;

int main()
{
    // Criando uma lista bidimensional
    int matrizBidimensional[2][2] = {{1, 2}, {3, 4}};

    int tamanhoArray = sizeof(matrizBidimensional) / sizeof(matrizBidimensional[0]);

    // Percorrendo uma lista bidimensional
    for (int i = 0; i < tamanhoArray; i++)
    {
        for (int j = 0; j < tamanhoArray; j++)
        {
            cout << matrizBidimensional[i][j] << " ";
        }

        cout << "\n";
    }
}
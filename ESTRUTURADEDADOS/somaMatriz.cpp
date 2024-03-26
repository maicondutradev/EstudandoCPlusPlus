#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cout << "Digite o valor de n: ";
    cin >> n;
    cout << "Digite o valor de m: ";
    cin >> m;

    
    // Inicializacao das matrizes a, b e c
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));
    vector<vector<int>> c(n, vector<int>(m));

    // Preenchimento das matrizes a e b
    cout << "Digite os elementos da matriz a:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }

    cout << "Digite os elementos da matriz b:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> b[i][j];
        }
    }

    // Calculo da matriz c
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Impressao da matriz c
    cout << "Matriz c resultante:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

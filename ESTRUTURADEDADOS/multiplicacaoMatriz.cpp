#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, p;
    cout << "Digite o valor de n: ";
    cin >> n;
    cout << "Digite o valor de m: ";
    cin >> m;
    cout << "Digite o valor de p: ";
    cin >> p;

    // Inicializacao das matrizes a, b e d
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(m, vector<int>(p));
    vector<vector<int>> d(n, vector<int>(p, 0));

    // Preenchimento das matrizes a e b
    cout << "Digite os elementos da matriz a:" << std::endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }

    cout << "Digite os elementos da matriz b:" << std::endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            cin >> b[i][j];
        }
    }

    // Calculo da matriz d
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            for (int k = 0; k < m; ++k)
            {
                d[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Impressao da matriz d
    cout << "Matriz d resultante:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

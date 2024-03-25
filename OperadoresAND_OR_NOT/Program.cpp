#include <iostream>

using namespace std;

int main()
{
    int num;

    num = 8;

    if ((num > 6 && num == 8) || (num > 9 && num < 15))
    {
        cout << "\nValor aceito!" << endl;
    }
    else
    {
        cout << "\nValor não aceito!" << endl;
    }

    return 0;
}
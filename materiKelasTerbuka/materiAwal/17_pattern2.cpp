#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "MAsukan panjang pola : ";
    cin >> n;

    cout << "Pola 3\n";

    // pola 3
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Pola 4\n";

    // pola 4
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cin.get();
    return 0;
}
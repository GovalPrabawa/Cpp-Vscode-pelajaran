#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int total = 0, input, deret, ganjil = 0, genap = 0;

    cout << "Masukan angka: ";
    cin >> input;
    deret = input - (input - 1);
    for (int i = input; i >= 1; i--)
    {

        // buat depan
        cout << "deret " << 1 + (input - i) << ": ";
        for (int k = i; k >= 1; k--)
        {
            cout << k * i << " ";
            deret = k * i;
            if (deret % 2 == 0)
            {
                genap += 1;
            }
            else
            {
                ganjil += 1;
            }
        }
        for (int j = 2; j <= i; j++)
        {
            cout << i * j << " ";
            deret = i * j;
            if (deret % 2 == 0)
            {
                genap += 1;
            }
            else
            {
                ganjil += 1;
            }
        }
        cout << endl;
    }

    total = genap + ganjil;
    cout << total << endl;
    cout << "genap " << genap << endl;
    cout << "ganjil :" << ganjil << endl;

    cout << endl;
    return 0;
}


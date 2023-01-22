#include <iostream>

using namespace std;

int main()
{
    int baris, kolom;
    cout << "==========Program Perulangan Baris dan Kolom==========" << endl;
    cout << "Masukan Jumlah Baris: ";
    cin >> baris;
    cout << "Masukan Jumlah Kolom: ";
    cin >> kolom;

    cout << endl;
    cout << endl;
    cout << endl;

    // perulangan For Do
    cout << "=======Perulangan For Do=======" << endl;
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            if (j % 2 == 1)
            {
                cout << "X ";
            }
            else
            {
                cout << "O ";
            }
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;

    // perulangan While Do
    cout << "=======Perulangan While Do=======" << endl;
    int k = 1;
    while (k <= baris)
    {
        int l = 1;
        while (l <= kolom)
        {
            if (l % 2 == 1)
            {
                cout << "X ";
            }
            else
            {
                cout << "O ";
            }
            l++;
        }
        k++;
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;

    // perulangan Do While
    cout << "======= Perulangan Do While =======" << endl;
    int m = 1;
    do
    {
        int n = 1;
        do
        {
            if (n % 2 == 1)
            {
                cout << "X ";
            }
            else
            {
                cout << "O ";
            }
            n++;
        } while (n <= kolom);
        cout << endl;
        m++;
    } while (m <= baris);
}

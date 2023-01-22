// Sebelumnya kami mohon maaf pak, mungkin program yang kami buat ini belum sepenuhnya sempurna karna 1 masalah yaitu ketika penginputan kolom ganjil maka jumlah kolom yang di output kurang 1. selain itu kami juga sedikit mengakali program yg kami buat sedemikian rupa agar mirip dengan output pada soal.
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

    cout << endl;
    // perulangan For Do
    cout << "=========Perulangan For=========" << endl;
    cout << "Masukan jumlah baris: ";
    cin >> a;
    cout << "Masukan jumlah kolom: ";
    cin >> b;

    for (c = 0; c < a; c++)
    {
        for (d = (b / 2); d > 0; d--)
        {
            cout << "X O ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    // perulangan while
    cout << "=========Perulangan While=========" << endl;
    cout << "Masukan jumlah kolom: ";
    cin >> e;
    cout << "Masukan jumlah baris: ";
    cin >> f;
    g = e;
    h = 0;
    while (h < g)
    {
        i = (f / 2);
        while (i > 0)
        {
            cout << "X O ";
            i--;
        }

        cout << endl;
        h++;
    }

    cout << endl;
    cout << endl;

    // perulangan DoWhile
    cout << "=========Perulangan DoWhile=========" << endl;
    cout << "Masukan jumlah kolom: ";
    cin >> j;
    cout << "Masukan jumlah baris: ";
    cin >> k;

    l = 0;
    m = j;
    do
    {
        n = (k / 2);
        do
        {
            cout << "X O ";
            n--;
        } while (n > 0);
        cout << endl;
        l++;
    } while (l < m);
}
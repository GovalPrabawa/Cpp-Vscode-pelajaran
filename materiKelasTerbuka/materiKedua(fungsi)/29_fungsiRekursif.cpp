#include <iostream>

using namespace std;

// fungsi rekursif terbatas
int pangkatIterasi(int a, int b) // a = 2, b = 3
{
    int hasil = a;
    for (int i = 1; i < b; i++) // b = 3
    {
        hasil = hasil * a; // loop 1 -> 2 * 2 = 4, loop kedua -> 4 * 2 = 8
    }
    return hasil;
}

int pangkatRekursif(int a, int b)
{
    if (b <= 1)
    {
        cout << "Akhir dari rekursif \n";
        return a;
    }
    else
    {
        cout << "rekursif \n";
        return a * pangkatRekursif(a, (b - 1));
    }
}

int main()
{
    int a;
    int b;
    cout << "Angka: ";
    cin >> a;
    cout << "Angka: ";
    cin >> b;
    cout << "Hasil iterasi = " << pangkatIterasi(a, b) << endl;
    cout << "Hasil Rekursif = " << pangkatRekursif(a, b) << endl;

    cin.get();
    return 0;
}
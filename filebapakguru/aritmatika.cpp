#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d, e, f;
    cout << "Masukan Nilai A: ";
    cin >> a;
    cout << "Masukan Nilai B: ";
    cin >> b;
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;

    cout << "+++++ HASIL +++++ " << endl;
    cout << "Hasil Penjumlahan = " << c << endl;
    cout << "Hasil Pengurangan = " << d << endl;
    cout << "Hasil Perkalian = " << e << endl;
    cout << "Hasil Pembagian = " << f << endl;
    getch();
}
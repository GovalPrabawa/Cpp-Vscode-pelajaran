#include <iostream>

using namespace std;

int main()
{
    int nomer;
    float alas, luas, panjang, lebar, tinggi, hasil, sisi;

    cout << "Menu Perhitungan Luas dan Keliling Segitiga dan Persegi Panjang" << endl;

    cout << "1. Hitung Luas Segitiga" << endl;
    cout << "2. Hitung Keliling Segitiga" << endl;
    cout << "3. Hitung Luas Persegi Panjang" << endl;
    cout << "4. Hitung Keliling Persegi Panjang" << endl;
    cout << "Inputkan Pilihan (1/2/3/4): ";
    cin >> nomer;

    cout << endl;

    switch (nomer)
    {
    case 1:
        cout << "Input panjang alas: ";
        cin >> alas;
        cout << "Input tinggi: ";
        cin >> tinggi;

        hasil = 0.5 * alas * tinggi;
        cout << "Luas segitiga adalah: " << hasil << endl;
        break;

    case 2:
        cout << "Input panjang alas: ";
        cin >> alas;
        cout << "Input panjang sisi: ";
        cin >> sisi;

        hasil = alas + (2 * sisi);
        cout << "Keliling segitiga adalah: " << hasil << endl;
        break;

    case 3:
        cout << "Input lebar persegi panjang: ";
        cin >> lebar;
        cout << "Input panjang persegi panjang:";
        cin >> panjang;

        hasil = panjang * lebar;
        cout << "Luas persegi panjang adalah: " << hasil << endl;
        break;

    case 4:
        cout << "Input lebar persegi panjang: ";
        cin >> lebar;
        cout << "Input panjang persegi panjang: ";
        cin >> panjang;

        hasil = 2 * (panjang + lebar);
        cout << "Keliling persegi panjang adalah: " << hasil << endl;
        break;

    default:
        cout << "Anda salah memasukan nomer pada menu" << endl;
    }
}
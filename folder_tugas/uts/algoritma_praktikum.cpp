#include <iostream>

using namespace std;

int main()
{
    float panjang, lebar, tinggi, sisi, hasil;
    int input;
    cout << "Program Menghitung Luas Permukaan dan volume Kubus serta Balok" << endl;
    cout << "1. Menghitung luas permukaan kubus" << endl;
    cout << "2. Menghitung volume kubus" << endl;
    cout << "3. Menghitung luas permukaan balok" << endl;
    cout << "4. Menghitung volume balok" << endl;
    cout << "Pilih menu 1/2/3/4 : ";
    cin >> input;

    switch (input)
    {
    case 1:
        cout << "Menghitung luas permukaan kubus" << endl;
        cout << "Masukan sisi : ";
        cin >> sisi;

        cout << endl;
        hasil = (sisi * sisi) * 6;
        cout << "Luas permukaan kubus adalah : " << hasil << endl;
        break;

    case 2:
        cout << "Menghitung volume kubus" << endl;
        cout << "Masukan sisi : ";
        cin >> sisi;

        cout << endl;
        hasil = sisi * sisi * sisi;
        cout << "Volume kubus adalah : " << hasil << endl;
        break;

    case 3:
        cout << "Menghitung luas permukaan balok" << endl;
        cout << "Masukan panjang : ";
        cin >> panjang;
        cout << "Masukan tinggi : ";
        cin >> tinggi;
        cout << "Masukan lebar : ";
        cin >> lebar;

        cout << endl;
        hasil = ((2 * (panjang * lebar) + (panjang * tinggi) + (lebar * tinggi)));
        cout << "Luas permukaan balok adalah : " << hasil << endl;
        break;

    case 4:
        cout << "4. Menghitung volume balok" << endl;
        cout << "Masukan panjang : ";
        cin >> panjang;
        cout << "Masukan tinggi : ";
        cin >> tinggi;
        cout << "Masukan lebar : ";
        cin >> lebar;

        cout << endl;
        hasil = panjang * lebar * tinggi;
        cout << "Luas volume balok: " << hasil << endl;
        break;

    default:
        cout << "Anda salah memasukan pilihan yang tersedia di menu" << endl;
    }
    cin.get();

    return 0;
}
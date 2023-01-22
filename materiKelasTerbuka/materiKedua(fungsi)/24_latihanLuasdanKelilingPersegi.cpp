#include <iostream>

using namespace std;

// latihan luas dan keliling persegi panjang
// my version
double luasPersegiPanjang(double p, double l)
{
    double luasPersegiPanjang;
    luasPersegiPanjang = p * l;
    return luasPersegiPanjang;
}

double kelilingPersegiPanjang(double p, double l)
{
    int keliilingPersegiPanjang;
    keliilingPersegiPanjang = 2 * (p + l);
    return keliilingPersegiPanjang;
}

void luasPersegi(double p, double l)
{
    cout << "Jadi luas persegi panjang adalah: ";
    cout << luasPersegiPanjang(p, l) << endl;
}

void kelilingPersegi(double p, double l)
{
    cout << "Dan keliling persegi panjang adalah: ";
    cout << kelilingPersegiPanjang(p, l) << endl;
}

int main()
{
    double panjang, lebar;
    ;

    cout << "-------program menghitung luas dan keliling persegi panjang-------\n";
    cout << "Masukan nilai panjang: ";
    cin >> panjang;
    cout << "Masukan nilai lebar: ";
    cin >> lebar;

    luasPersegi(panjang, lebar);
    kelilingPersegi(panjang, lebar);

    cin.get();
    return 0;
}
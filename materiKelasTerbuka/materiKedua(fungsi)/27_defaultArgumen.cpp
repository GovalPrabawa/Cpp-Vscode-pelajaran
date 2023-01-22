#include <iostream>

using namespace std;

// fungsi prototype
// double volume_kubus(double p, double l, double t);
double volume_kubus(double p, double l = 3, double t = 1); // versi kelas terbuka

int main()
{
    // int panjang, lebar, tinggi;
    // cout << " Masukan panjang kubus: ";
    // cin >> panjang;
    // cout << " Masukan lebar kubus: ";
    // cin >> lebar;
    // cout << " Masukan tinggi kubus: ";
    // cin >> tinggi;

    // cout << "Volume kubus adalah: " << volume_kubus(panjang, lebar, tinggi) << endl;
    cout << "Volume kubus adalah: " << volume_kubus(3, 4, 5) << endl;
    cout << "Volume kubus adalah: " << volume_kubus(3, 4) << endl;
    cout << "Volume kubus adalah: " << volume_kubus(3) << endl;

    cin.get();
    return 0;
}

// default argumen atau nilai standarnya
double volume_kubus(double p, double l, double t)
{
    return p * l * t;
}
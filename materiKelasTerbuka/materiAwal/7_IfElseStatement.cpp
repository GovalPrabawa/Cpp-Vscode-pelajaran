#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Masukan Angka <= 5" << endl;
    cout << "Masukan angka : ";
    cin >> a;

    if (a == 5)
    {
        cout << "Anda memasukan angka 5" << endl;
    }
    else if (a < 6)
    {
        cout << "Anda memasukan angka lebih kecil dari 5 " << endl;
    }
    else
    {
        cout << "Maaf angka yang anda masukan bukan angka 5 atau yang lebih kecil" << endl;
    }
}
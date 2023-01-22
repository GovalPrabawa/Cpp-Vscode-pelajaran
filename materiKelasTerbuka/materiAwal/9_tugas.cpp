#include <iostream>
using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika, more = 'y';

    while (more != 'n')
    {

        cout << " Selamat Datang di Program Calculator \n \n";
        cout << "Masukan nilai pertama : ";
        cin >> a;
        cout << "Pilih Operator +,-,/,* :";
        cin >> aritmatika;
        cout << "Masukan nilai kedua : ";
        cin >> b;

        cout << "\n Hasil perhitungan : ";
        cout << a << " " << aritmatika << " " << b << "\n";

        switch (aritmatika)
        {
        case '+':
            hasil = a + b;
            break;

        case '-':
            hasil = a - b;
            break;

        case '/':
            hasil = a / b;
            break;

        case '*':
            hasil = a * b;
            break;

        default:
            cout << "Anda Salah Memasukan Operator" << endl;
            return 0;
        }

        cout << hasil << endl;
        cout << "Continue? (y/n) ";
        cin >> more;
    }
}
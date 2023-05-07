#include <iostream>

using namespace std;
int genap = 0, ganjil = 0, total = 0;

void ganjilGenap(int deret)
{
    if (deret % 2 == 0)
    {
        genap += 1;
    }
    else
    {
        ganjil += 1;
    }
}

void perulanganPertama(int i)
{
    int hasil;
    for (int k = i; k >= 1; k--)
    {
        cout << k * i << " ";
        hasil = k * i;
        total += hasil;
        ganjilGenap(hasil);
    }
}

void perulanganKedua(int i)
{
    int hasil;
    for (int j = 2; j <= i; j++)
    {
        cout << j * i << " ";
        hasil = j * i;
        total += hasil;
        ganjilGenap(hasil);
    }
}

void deretAngka(int input)
{
    int deret = input - (input - 1);
    for (int i = input; i >= 1; i--)
    {

        // buat depan
        cout << "deret " << 1 + (input - i) << ": ";
        perulanganPertama(i);
        perulanganKedua(i);
        cout << endl;
    }

    cout << "Banyaknya Bilangan         : " << genap + ganjil << endl;
    cout << "Jumlah Bilangan Genap   : " << genap << endl;
    cout << "Jumlah Bilangan Ganjil  : " << ganjil << endl;
    cout << "jumlah Bilangan      : " << total << endl;
}

int main(int argc, char const *argv[])
{
    int input;

    cout << "Masukan angka: ";
    cin >> input;
    deretAngka(input);
    return 0;
}

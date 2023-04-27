#include <iostream>

using namespace std;

float bagi(float x, float y)
{
    return x / y;
}

float kali(float x, float y)
{
    return x * y;
}

float kurang(float x, float y)
{
    return x - y;
}
float tambah(float x, float y)
{
    return x + y;
}

int mod(int x, int y)
{
    return x % y;
}

int main(int argc, char const *argv[])
{
    // Program Penghitungan manual dengan function
    float hasil;

    cout << "Pembagian" << endl;
    hasil = bagi(12, 4);
    cout << "Hasil pembagian dari 12 / 4 adalah : " << hasil << endl;

    cout << endl;
    cout << "perkalian" << endl;
    hasil = kali(12, 4);
    cout << "Hasil perkalian dari 12 * 4 adalah : " << hasil << endl;

    cout << endl;
    cout << "Pengurangan" << endl;
    hasil = kurang(12, 4);
    cout << "Hasil Pengurangan dari 12 - 4 adalah : " << hasil << endl;

    cout << endl;
    cout << "Pertambahan" << endl;
    hasil = tambah(12, 4);
    cout << "Hasil Pertambahan dari 12 + 4 adalah : " << hasil << endl;

    cout << endl;
    cout << "Modulus" << endl;
    hasil = mod(12, 4);
    cout << "Hasil Modulus dari 12 % 4 adalah : " << hasil << endl;
    return 0;
}

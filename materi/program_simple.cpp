#include <iostream>

using namespace std;

double kalkulator(float a, float b, char symbol)
{
    float hasil;
    switch (symbol)
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
        return 1;
    }
    return hasil;
}

int main(int argc, char const *argv[])
{
    float nilai1, nilai2;
    int menu;
    char symbol;
    float hasil;

    cout << endl;
    cout << "Program Menghitung" << endl;
    cout << "Masukan nilai 1 : ";
    cin >> nilai1;
    cout << "Masukan nilai 2: ";
    cin >> nilai2;
    cout << "Masukan symbol operator( + | - | * | /) : ";
    cin >> symbol;

    hasil = kalkulator(nilai1, nilai2, symbol);
    cout << "Jadi hasil dari " << nilai1 << " " << symbol << " " << nilai2 << " Adalah: " << hasil << endl;

    return 0;
}

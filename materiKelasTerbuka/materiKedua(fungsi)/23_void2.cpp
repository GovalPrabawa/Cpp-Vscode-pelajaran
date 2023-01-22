#include <iostream>

using namespace std;

int kuadrat(int x)
{
    int y;
    y = x * x;
    return y;
}

int tambah(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

// worker function
void tampilkan(int input)
{
    cout << input << endl;
}

int main()
{

    int input, hasil, a, b, hasil2;
    cout << " Masukan nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);

    cin.get();
    return 0;
}
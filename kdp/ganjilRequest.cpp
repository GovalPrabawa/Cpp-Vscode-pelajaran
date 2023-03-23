#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int request;
    int jumlah = 0;

    cout << "Masukan jumlah bilangan ganjil yang ingin ditampilkan: ";
    cin >> request;

    cout << endl;
    cout << "Bilangan ganjil : ";
    for (int i = 0; i <= request * 2; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << " ";
            jumlah += 1;
        }
    }
    cout << endl;
    cout << "Jumlah bilangan ganjil = " << jumlah << endl;
    return 0;
}

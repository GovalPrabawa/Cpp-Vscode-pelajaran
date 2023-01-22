#include <iostream>
#include <array>
using namespace std;

int main()
{
    // membuat array dengan standar library
    // array <int, jumlah array> nama array

    array<int, 5> nilai;

    for (int i = 0; i <= 4; i++)
    {
        nilai[i] = i;
        cout << "nilai [" << i << "] = " << nilai[i] << " addres : " << &nilai[i] << endl;
    }

    cout << endl;
    // ukuran array
    cout << "ukuran: " << nilai.size() << endl;
    // adres awal dari array
    cout << " adddres awal : " << nilai.begin() << endl;
    // adres akhir dari array
    cout << " adddres awal : " << nilai.end() << endl;
    // nilai dgn index
    cout << " nilai ke 2 : " << nilai.at(2) << endl;
    cin.get();
    return 0;
}

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
    cin.get();
    return 0;
}

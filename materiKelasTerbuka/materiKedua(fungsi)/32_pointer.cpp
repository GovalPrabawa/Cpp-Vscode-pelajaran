#include <iostream>

using namespace std;

int main()
{
    int a = 5;

    // pointer
    int *aPtr = nullptr; // nullptr artinya alamat masih kosong
    aPtr = &a;
    int pointer = *aPtr;

    // int a mempunyai nilai dan addres ( alamat )
    cout << "Nilai dari a: " << a << endl;
    cout << "Alamat dari a: " << aPtr << endl;

    // deferencing, mengambil data dari pointer
    cout << "Mengambil nilai dari pointer aPtr :" << pointer << endl;

    cin.get();
    return 0;
}
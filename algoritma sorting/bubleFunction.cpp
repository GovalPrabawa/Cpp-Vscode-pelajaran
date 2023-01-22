#include <iostream>
#include <string>
#include <array>
const size_t arraySize = 5;

using namespace std;

// fungsi untuk buble sort
void bubleSort(int angka[arraySize]);

int main(int argc, char const *argv[])
{
    // int angka[arraySize] = {1, 10, 4, 3, 5};
    int angka[arraySize];

    cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
    cout << "=----      Program Sorting dengan Buble Sort      ----=" << endl;
    cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Masukan satu bilangan desimal ke-" << i + 1 << ": ";
        cin >> angka[i];
    }
    cout << endl;
    bubleSort(angka);
    return 0;
}

void bubleSort(int angka[arraySize])
{
    // menampilkan iterasi sebelum di sorting
    cout << "=--- Sebelum di sorting ---=" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "= = = = = = = = = = = = = = = =" << endl;

    cout << endl;

    // logic untuk buble sort untuk angka yang dimasukan user
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            if (angka[j + 1] < angka[j])
            {
                int temp = angka[j + 1];
                angka[j + 1] = angka[j];
                angka[j] = temp;
            }
        }
    }

    // menampilkan iterasi sesudah disorting
    cout << "=---   Sesudah di sorting   ---=" << endl;

    for (int i = 0; i < arraySize; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "= = = = = = = = = = = = = = = =" << endl;
}

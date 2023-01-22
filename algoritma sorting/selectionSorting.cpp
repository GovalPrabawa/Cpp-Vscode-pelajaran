#include <iostream>
#include <array>
const size_t arraySize = 5;

using namespace std;

// prototype
void ascendingSelectionSort(int angka[arraySize]);

int main(int argc, char const *argv[])
{
    int angka[arraySize];
    cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
    cout << "=======  Program Sorting dengan Selection Sort  =======" << endl;
    cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
    // cout << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Masukan satu bilangan desimal ke-" << i + 1 << ": ";
        cin >> angka[i];
    }
    cout << endl;
    ascendingSelectionSort(angka);
    return 0;
}

void ascendingSelectionSort(int angka[arraySize])
{
    // menampilkan iterasi sebelum di sorting
    cout << "=--- Sebelum di sorting ---=" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "= = = = = = = = = = = = = =" << endl;
    cout << endl;
    cout << endl;

    // logic selection sort
    for (int i = 0; i < arraySize; i++)
    {

        int indexAngka = i;
        for (int j = i; j < arraySize; j++)
        {
            if (angka[indexAngka] > angka[j])
            {
                indexAngka = j;
            }
        }
        // menukar nilai
        int tampung = angka[i];
        angka[i] = angka[indexAngka];
        angka[indexAngka] = tampung;
    }

    // menampilkan iterasi sesudah di sorting
    cout << "=---  Sesudah di sorting  ---=" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "= = = = = = = = = = = = = = = =" << endl;
}

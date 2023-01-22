#include <iostream>
const size_t arraySize = 5;

using namespace std;

void insertionSort(int angka[arraySize]);

int main(int argc, char const *argv[])
{
    int angka[arraySize];
    cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
    cout << "=======  Program Sorting dengan Insertion Sort  =======" << endl;
    cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Masukan satu bilangan desimal ke-" << i + 1 << ": ";
        cin >> angka[i];
    }
    insertionSort(angka);
    return 0;
}

void insertionSort(int angka[arraySize])
{
    // menampilkan iterasi sebelum di sorting

    cout << "====Sebelum di sorting====" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << endl;

    // logic
    for (int i = 1; i < arraySize; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (angka[j] < angka[j - 1])
            {
                // ditukar
                int tampung = angka[j];
                angka[j] = angka[j - 1];
                angka[j - 1] = tampung;
            }
        }
    }

    cout << "====Sesudah di sorting====" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << angka[i] << " ";
    }
}
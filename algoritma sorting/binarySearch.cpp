#include <iostream>
const size_t arraySize = 5;

using namespace std;

void binarySearch(int angka[arraySize], int key)
{
    int low = 0;
    int high = arraySize - 1;
    int median;
    bool status = false;

    while (low <= high)
    {
        median = (low + high) / 2;

        // dicek apakah datanya ditemukan atau tidak
        if (key == angka[median])
        {
            // jika datanya ketemu
            cout << "Data yang anda cari ditemukan pada posisi ke-" << (median + 1) << " || "
                 << "dengan index ke-" << median << " || "
                 << "dengan key = " << key << endl;
            status = true;
            break;
        }
        else
        {
            // kalau data belum ketemu
            // lakukan pembagian array apakah lebih besar dari key atau lebih kecil dari key
            if (key > angka[median])
            {
                // cari data yang lebih dari median
                low = median + 1;
            }
            else
            {
                // kalau median lebih besar dari key
                high = median - 1;
            }
        }
    }
    // dicek apakah data ditemukan
    if (status == false)
    {
        // data tidak ditemukan
        cout << key << " tidak ditemukan" << endl;
    }
}
void ascending(int angka[arraySize])
{
    int key;
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
    cout << "=--- Sesudah di sorting ---=" << endl;

    for (int i = 0; i < arraySize; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "= = = = = = = = = = = = = = = =" << endl;

    cout << "cari angka yang ingin dicari(key) : ";
    cin >> key;

    binarySearch(angka, key);
}

int main(int argc, char const *argv[])
{
    int angka[arraySize];
    cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
    cout << "=----            Program Binary Search            ----=" << endl;
    cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Masukan satu bilangan desimal ke-" << i + 1 << ": ";
        cin >> angka[i];
    }
    cout << endl;
    ascending(angka);
    return 0;
}

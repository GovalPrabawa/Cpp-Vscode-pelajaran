#include <iostream>

using namespace std;

const int arraySize = 5;

// todo: fungsi binary search
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

// todo: fungsi untuk mengurutkan data untuk fungsi binary
void ForBinary(int angka[arraySize])
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

    // logic untuk insertion sort untuk angka yang dimasukan user
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
    int menu;
    int angka[arraySize];
    int key;

    while (true)
    {
        cout << "\t+++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "\t|---- PROGRAM BINARY SEARCH ----|" << endl;
        cout << "\t+++++++++++++++++++++++++++++++++++++++" << endl;
        cout << endl;
        cout << "=---- Masukan angka terlebih dahulu ---=" << endl;
        // user memasukan angka desimal secara acak ataupun terurut
        for (int i = 0; i < arraySize; i++)
        {
            cout << "Masukan angka ke-" << i + 1 << ": ";
            cin >> angka[i];
        }
        system("cls");

        cout << endl;
        cout << endl;

        cout << "=--- Pilih program ---=" << endl;
        cout << "1. Binary Search " << endl;
        cout << "2. Exit" << endl;
        cout << "Masukan Pilihan Program : ";
        cin >> menu;

        switch (menu)
        {
        case 1:
            cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
            cout << "=----      Program Binary Search      ----=" << endl;
            cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
            cout << endl;
            ForBinary(angka);
            break;
        case 2:
            exit(0);
        }
    }
    return 0;
}

/*
    Nama    : I Made Goval Dwi Ananta Prabawa
    NIM     : 220040036
*/
#include <iostream>
const size_t arraySize = 5;

using namespace std;

// prototype fungsi
void bubbleSort(int angka[arraySize]);
void insertionSort(int angka[arraySize]);
void SelectionSort(int angka[arraySize]);
void binarySearch(int angka[arraySize], int key);
void ForBinary(int angka[arraySize]);
void sequentialSearch(int angka[arraySize], int key);

int main(int argc, char const *argv[])
{
    int menu;
    int angka[arraySize];

    while (true)
    {
        cout << "\t+++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "\t|---- PROGRAM SORT dan SEARCH C++ ----|" << endl;
        cout << "\t+++++++++++++++++++++++++++++++++++++++" << endl;
        cout << endl;
        cout << "=---- Masukan angka terlebih dahulu ---=" << endl;
        // user memasukan angka desimal secara acak ataupun terurut
        for (int i = 0; i < arraySize; i++)
        {
            cout << "Masukan angka desimal ke-" << i + 1 << ": ";
            cin >> angka[i];
        }
        system("cls");

        cout << endl;
        cout << endl;

        // user memimilih program sort atau search
        cout << "=--- Pilih program sorting dan search ---=" << endl;
        cout << "1. Buble sort " << endl;
        cout << "2. Insertion sort" << endl;
        cout << "3. Selection sort" << endl;
        cout << "4. Sequential search" << endl;
        cout << "5. Binary search " << endl;
        cout << "6. Exit" << endl;
        cout << "Masukan pilihan anda (1/2/3/4/5/6): ";
        cin >> menu;

        cout << endl;
        system("cls");

        switch (menu)
        {
        // ketika user memilih menu 1 (menjalakan program buuble sort)
        case 1:
            cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
            cout << "=----      Program Sorting dengan Buble Sort      ----=" << endl;
            cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
            cout << endl;
            bubbleSort(angka);
            break;

        // ketika user memilih menu 2 (menjalankan program insertion sort)
        case 2:
            cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
            cout << "=======  Program Sorting dengan Insertion Sort  =======" << endl;
            cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
            cout << endl;
            insertionSort(angka);
            cout << endl;
            cout << endl;
            break;

        // ketika user memilih menu 3 ( menjalankan program selection sort )
        case 3:
            cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
            cout << "=======  Program Sorting dengan Selection Sort  =======" << endl;
            cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
            cout << endl;
            SelectionSort(angka);
            cout << endl;
            cout << endl;
            break;

        // ketika user memilih menu 4 ( menjalankan program sequential search )
        case 4:
            int key;
            cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
            cout << "=======   Program Search dengan Sequential Search   =======" << endl;
            cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
            cout << endl;
            cout << "=---- List angka yang anda masukan ----=" << endl;
            for (int i = 0; i < arraySize; i++)
            {
                cout << angka[i] << " ";
            }
            cout << endl;
            cout << "Masukan angka yang dicari(key): ";
            cin >> key;
            sequentialSearch(angka, key);
            cout << endl;
            cout << endl;
            break;

        // ketika user memilih menu 5 (menjalankan program binary search)
        case 5:
            cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
            cout << "=======   Program Search dengan Binary Search   =======" << endl;
            cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
            cout << endl;
            ForBinary(angka);
            cout << endl;
            cout << endl;
            break;

        // ketika user memilih menu 6
        case 6:
            exit(0);
            cout << endl;
            break;

        // ketika user salah menginputkan menu
        default:
            cout << "Anda salah memasukan menu yang tersedia." << endl;
            break;
        }
    }

    return 0;
}

// todo: fungsi buble sort
void bubbleSort(int angka[arraySize])
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

    for (int i = 1; i <= arraySize; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "= = = = = = = = = = = = = = = =" << endl;
    cout << endl;
    cout << endl;
}

// todo fungsi insertion sort
void insertionSort(int angka[arraySize])
{
    // menampilkan iterasi sebelum di sorting
    cout << "=---- Sebelum di sorting ----=" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "= = = = = = = = = = = = = = = =" << endl;
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

    cout << "=----  Sesudah di sorting  ----=" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "= = = = = = = = = = = = = = = =" << endl;
}

// todo: fungsi selection sort
void SelectionSort(int angka[arraySize])
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

// todo: fungsi untuk binary search
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

// todo: fungsi untuk sequential search
void sequentialSearch(int angka[arraySize], int key)
{
    bool status = false;
    for (int i = 0; i < arraySize; i++)
    {
        // cek apakah data ketemu
        if (key == angka[i])
        {
            cout << key << " ditemukan pada posisi " << i + 1 << endl;
            status = true;
            break;
        }
    }
    if (status == false)
    {
        cout << key << " tidak ditemukan pada list" << endl;
    }
}

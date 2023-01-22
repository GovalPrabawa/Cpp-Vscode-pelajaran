#include <iostream>
const size_t jumlahArray = 5;

using namespace std;

// menjabarkan main fungsi
void bubblesort(int angka[jumlahArray]);
void insertionsort(int angka[jumlahArray]);
void selectionsort(int angka[jumlahArray]);
void binarysearch(int angka[jumlahArray], int key);
void forbinary(int angka[jumlahArray]);
void sequentialsearch(int angka[jumlahArray], int key);

// langsung ke main fungsi
int main(int argc, char const *argv[])
{
    int menu;
    int angka[jumlahArray];

    while (true)
    {

        cout << " [ PROGRAM SORT dan SEARCH C++ } " << endl;
        cout << " ++++++ Masukan angka terlebih dahulu ++++++ " << endl;
        cout << endl;

        // memasukan angka secara terurut maupun acak
        for (int i = 0; i < jumlahArray; i++)
        {
            cout << "Masukan angka ke-" << i + 1 << ": ";
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
            cout << " [Program Sorting dengan Buble Sort] " << endl;
            cout << endl;
            bubblesort(angka);
            break;

            // ketika user memilih menu 2 (menjalankan program insertion sort)
        case 2:
            cout << " [ Program Sorting dengan Insertion Sort ]" << endl;
            cout << endl;
            insertionsort(angka);
            cout << endl;
            cout << endl;
            break;

            // ketika user memilih menu 3 ( menjalankan program selection sort )
        case 3:
            cout << " [ Program Sorting dengan Selection Sort ]" << endl;
            cout << endl;
            selectionsort(angka);
            cout << endl;
            cout << endl;
            break;

            // ketika user memilih menu 4 ( menjalankan program sequential search )
        case 4:
            int key;
            cout << "----------- Program Search dengan Sequential Search ----------- " << endl;
            cout << endl;
            cout << "  List angka yang ingin dimasukan  " << endl;
            for (int i = 0; i < jumlahArray; i++)
            {
                cout << angka[i] << " ";
            }
            cout << endl;
            cout << "Masukan angka yang ingin dicari(key): ";
            cin >> key;
            sequentialsearch(angka, key);
            cout << endl;
            cout << endl;
            break;

            // ketika user memilih menu 5 (menjalankan program binary search)
        case 5:
            cout << " ----------- Program Search dengan Binary Search  ----------- " << endl;
            cout << endl;
            forbinary(angka);
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

// fungsi bubble sort
void bubblesort(int angka[jumlahArray])
{
    // menampilkan iterasi sebelum di sorting
    cout << "   Sebelum   " << endl;
    for (int i = 0; i < jumlahArray; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "= = = = = = = = = = = = = = = =" << endl;

    cout << endl;

    // logic untuk buble sort untuk angka yang dimasukan user
    for (int i = 0; i < jumlahArray; i++)
    {
        for (int j = 0; j < jumlahArray; j++)
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
    cout << "   Sesudah    " << endl;

    for (int i = 0; i < jumlahArray; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "= = = = = = = = = = = = = = = =" << endl;
    cout << endl;
}

// fungsi insertion sort (mengurutkan data)
void insertionsort(int angka[jumlahArray])
{
    // tampilan sblm di sorting
    cout << "sebelum ; " << endl;
    for (int i = 0; i < jumlahArray; i++)
    {
        cout << angka[i] << "  ";
    }
    cout << endl;
    cout << "==============" << endl;
    cout << endl;

    // cara untuk mensorting
    for (int i = 1; i < jumlahArray; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (angka[j], angka[j - 1])
            {

                int tampung = angka[j];
                angka[j] = angka[j - 1];
                angka[j - 1] = tampung;
            }
        }
    }
    // tampilan sesudah di sorting
    cout << " sesudah ; " << endl;
    for (int i = 0; i < jumlahArray; i++)
    {
        cout << angka[i] << "  ";
    }
    cout << endl;
    cout << "=============" << endl;
}

// fungsi selection sort

void selectionsort(int angka[jumlahArray])
{
    // sblm di sorting
    cout << "sebelum =" << endl;
    for (int i = 0; i < jumlahArray; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "==============" << endl;
    cout << endl;

    // logic
    for (int i = 0; i < jumlahArray; i++)
    {
        int indexangka = i;
        for (int j = i; j < jumlahArray; j++)
        {
            if (angka[indexangka] > angka[j])
            {
                indexangka = j;
            }
        }

        int tampung = angka[i];
        angka[i] = angka[indexangka];
        angka[indexangka] = tampung;
    }
    // yg sdh di sorting
    cout << "sesudah = " << endl;
    for (int i = 0; i < jumlahArray; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "==============" << endl;
}

// fungsi binary search
void binarysearch(int angka[jumlahArray], int key)
{
    int low = 0;
    int high = jumlahArray - 1;
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

// fungsi for binarry  (mengurutkan data )
void forbinary(int angka[jumlahArray])
{
    int key;
    cout << " sebelum di sorting ; " << endl;
    for (int i = 0; i < jumlahArray; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "==============" << endl;
    cout << endl;

    for (int i = 0; i < jumlahArray; i++)
    {
        for (int j = 0; j < jumlahArray; j++)
        {
            if (angka[j + 1] < angka[j])
            {
                int temp = angka[j + 1];
                angka[j + 1] = angka[j];
                angka[j] = temp;
            }
        }
    }

    cout << "sesudah = " << endl;
    for (int i = 0; i < jumlahArray; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "==============" << endl;
    cout << "input angka yang diinginkan : ";
    cin >> key;
    binarysearch(angka, key);
}

// fungsi sequential search
void sequentialsearch(int angka[jumlahArray], int key)
{
    bool status = false;
    for (int i = 0; i < jumlahArray; i++)
    {
        if (key == angka[i]) // untuk mengecek datanya ada/tidak
        {
            cout << key << "data ditemukan" << i + 1 << endl;
            status = true;
            break;
        }
    }
    if (status == false)
    {
        cout << key << "data tidak ditemukan" << endl;
    }
}
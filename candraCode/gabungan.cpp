/*
Nama : Putu Chandra Putra Pardhika
NIM  : 220040036
*/
#include <iostream>

using namespace std;

int sequentialSearch(int *array, int size, int key)
{
    for (int a = 0; a < size; ++a)
    {
        if (array[a] == key)
        {
            return a;
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int pilihan;
    int Data[15], kacamata = 0, a = 0, b = 0, tmp = 0;

    while (true)
    {
        cout << endl;
        // isikan nama program
        cout << "Program ---------------" << endl;
        cout << "1. Bubble Sort" << endl;
        cout << "2. Insertion Sort" << endl;
        cout << "3. Selection Sort" << endl;
        cout << "4. Binary Search" << endl;
        cout << "5. Sequential Search" << endl;
        cout << "6. Exit" << endl;

        cout << "pilihan program 1/2/3/4/5/6" << endl;
        cout << "Pilih program anda: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
        {
            cout << "=========================" << endl;
            cout << "       Bubble Sort       " << endl;
            cout << "=========================" << endl;

            cout << endl;
            cout << "Masukan Jenis kacamata = ";
            cin >> kacamata;

            cout << endl;

            cout << "Masukan jumlah kacamata : \n";
            for (a = 0; a < kacamata; a++)
            {

                cin >> Data[a];
            }

            for (a = 0; a < kacamata; a++)
            {
                for (b = 0; b < kacamata - a - 1; b++)
                {
                    if (Data[b] > Data[b + 1])
                    {
                        tmp = Data[b];
                        Data[b] = Data[b + 1];
                        Data[b + 1] = tmp;
                    }
                }
            }

            cout << "===================================" << endl;
            cout << "jumlah kacamata yang telah Terurut :" << endl;
            for (a = 0; a < kacamata; a++)
            {
                cout << Data[a] << " ";
            }
            cout << "===================================" << endl;
            break;
        }

        case 2:
        {
            cout << "=========================" << endl;
            cout << "       Insertion Sort    " << endl;
            cout << "=========================" << endl;
            cout << endl;
            int st[16], a, b, c, temp;
            cout << "enter 5 elements only to sort n: \n";
            for (a = 0; a < 5; a++)
            {
                cin >> st[a];
            }
            for (a = 1; a < 5; a++)
            {
                for (b = a; b >= 1; b--)
                {
                    if (st[b] < st[b - 1])
                    {
                        temp = st[b];
                        st[b] = st[b - 1];
                        st[b - 1] = temp;
                    }
                    else
                        break;
                }
            }
            cout << endl;
            cout << "sorted array n " << endl;
            for (c = 0; c < 5; c++)
            {
                cout << st[c] << " ";
            }
            cout << endl;
            break;
        }

        case 3:
        {
            cout << "=========================" << endl;
            cout << "       Selection Sort    " << endl;
            cout << "=========================" << endl;
            // kamus
            int const MaxEl = 8;
            int data[MaxEl] = {43, 51, 12, 42, 95, 19, 7, 66};
            int pos;
            int tmp;

            cout << endl;
            // menampilkan array sebelum
            cout << "Sebelum di sorting:" << endl;
            for (int i = 0; i < MaxEl; i++)
            {
                cout << data[i] << " ";
            }

            cout << endl;
            // algoritma selection sort
            for (int a = 0; a < MaxEl - 1; a++)
            {
                pos = a;
                for (int b = a; b < MaxEl; b++)
                {
                    if (data[pos] > data[b])
                    {
                        pos = b;
                    }
                }
                tmp = data[a];
                data[a] = data[pos];
                data[pos] = tmp;
            }
            cout << endl;
            // cetak array
            cout << "Sesudah di sorting: " << endl;
            for (int k = 0; k < MaxEl; k++)
            {
                cout << data[k] << " ";
            }
            cout << endl;
            break;
        }

        case 4:
        {
            cout << "=========================" << endl;
            cout << "       Binary Search    " << endl;
            cout << "=========================" << endl;
            cout << endl;
            int a, arr[5], num, first, last, middle;
            cout << "Enter 5 Elements (in ascending order): ";
            for (a = 0; a < 5; a++)
                cin >> arr[a];
            cout << "\nEnter Element to be Search: ";
            cin >> num;
            first = 0;
            last = 9;
            middle = (first + last) / 2;
            while (first <= last)
            {
                if (arr[middle] < num)
                    first = middle + 1;
                else if (arr[middle] == num)
                {
                    cout << "\nThe number, " << num << " found at Position " << middle + 1;
                    break;
                }
                else
                    last = middle - 1;
                middle = (first + last) / 2;
            }
            if (first > last)
                cout << "\nThe number, " << num << " is not found in given Array";
            cout << endl;
            break;
        }
        case 5:
        {
            cout << "=========================" << endl;
            cout << "       Sequential Search    " << endl;
            cout << "=========================" << endl;
            cout << endl;
            int size;
            cout << "\nMasukan Jumlah Array : ";
            cin >> size;

            int array[size];
            int key;

            for (int a = 0; a < size; a++)
            {
                cout << "\n Masukan value array ke " << a << " :";
                cin >> array[a];
            }

            cout << "\nMasukan angka yang ingin dicari : ";
            cin >> key;

            int index = sequentialSearch(array, size, key);
            if (index != -1)
            {
                cout << "Angka ditemukan di index ke: " << index;
            }
            else
            {
                cout << "Angka tidak ditemukan";
            }
            cout << endl;
            break;
        }
        // untuk keluar dari program
        case 6:
            exit(0);
            break;
            cout << endl;

        default:
            cout << "Anda salah memasukan pilihan dari menu yang tersedia: " << endl;
            cout << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <conio.h>

using namespace std;
int data[10], data2[10];
int n;

void tukar(int a, int b)
{
    int data[10];
    int t;
    t = data[b];
    data[b] = data[a];
    data[a] = t;
}

void input()
{
    int data[10];
    cout << " Masukan Jumlah Data = ";
    cin >> n;

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << " Masukan Data Ke-" << i + 1 << " = ";
        cin >> data[i];

        data2[i] = data[i];
    }
    cout << endl;
}

void tampil()
{
    int data[10];
    for (int i = 0; i < n; i++)
    {
        cout << " [" << data[i] << "] ";
    }
    cout << endl;
}

void bubble_sort()
{
    int data[10];
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            if (data[j] < data[j - 1])
            {
                tukar(j, j - 1);
            }
        }
        tampil();
    }
    cout << endl;
}
void tampil_array(int nilai[], int panjang)
{
    int index;
    cout << " Data pada Array : ";
    for (index = 0; index < panjang; index++)
    {
        cout << nilai[index] << " ";
    }
    cout << endl;
}

void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}
int funcbinary(int data[], int n, int k)
{
    int atas, bawah, tengah, posisi;
    bool ada;

    ada = false;
    bawah = 0;
    atas = n - 1;
    posisi = -1;

    while (bawah <= atas)
    {
        tengah = (atas + bawah) / 2;
        if (k == data[tengah])
        {
            posisi = tengah;
            break;
        }
        else if (k < data[tengah])
            atas = tengah - 1;
        else if (k > data[tengah])
            bawah = tengah + 1;
    }
    return posisi;
}
int sequentialSearch(int *array, int size, int key)
{
    for (int i = 0; i < size; ++i)
    {
        if (array[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int pilih;
    char z;

    do
    {
        system("cls");
        cout << " 1. Bubble Sort           " << endl;
        cout << " 2. Insertion Sort        " << endl;
        cout << " 3. Selection Sort        " << endl;
        cout << " 4. Binary Search         " << endl;
        cout << " 5. Sequential Search     " << endl;
        cout << " Masukan Pilihan : ";
        cin >> pilih;

        if (pilih == 1)
        {
            cout << "      BUBBLE SORT" << endl;
            cout << " ----------------------" << endl;
            input();
            cout << " Proses Bubble Sort" << endl;
            tampil();
            bubble_sort();
            cout << " Ingin mengulang lagi? (y/t): ";
            cin >> z;
        }
        else if (pilih == 2)
        {
            int y;
            cout << " masukan banyak array yang diinginkan:";
            cin >> y;
            int x[y];
            for (int i = 0; i < y; i++)
            {
                cout << " masukan angka array ke " << i << " :";
                cin >> x[i];
                cout << endl;
            }
            for (int i = 1; i < y; i++)
            {
                int key = x[i];
                int j = i - 1;
                while (j >= 0 && x[j] > key)
                {
                    x[j + 1] = x[j];
                    j--;
                }
                x[j + 1] = key;
                cout << " proses sorting" << endl;
                for (int m = 0; m < y; m++)
                {
                    cout << " " << x[m] << "  ";
                }
                cout << endl;
            }
            cout << " hasil akhir" << endl;
            for (int m = 0; m < y; m++)
            {
                cout << " " << x[m] << "  ";
            }
            cout << endl;
            cout << " Ingin mengulang lagi? (y/t): ";
            cin >> z;
        }
        else if (pilih == 3)
        {
            int panjang = 10;
            int nilai[panjang], input;
            for (int index = 0; index < 10; index++)
            {
                cout << " Masukan Nilai pada index ke- " << index << " :";
                cin >> nilai[index];
            }
            char temp_nilai;
            int index, i, j;
            tampil_array(nilai, panjang);
            for (int i = panjang - 1; i > 0; i--)
            {
                index = i;
                for (int j = i - 1; j >= 0; j--)
                {
                    if (nilai[index] < nilai[j])
                    {
                        index = j;
                    }
                }
                temp_nilai = nilai[i];
                nilai[i] = nilai[index];
                nilai[index] = temp_nilai;
                tampil_array(nilai, panjang);
            }
            cout << " Masukkan nilai yang dicari :";
            cin >> input;
            for (int j = 0; j < 10; j++)
            {
                if (nilai[j] == input)
                {
                    cout << endl;
                    cout << " Elemen yang dicari terdapat dalam index ke- " << j << endl;
                    break; // break berfungsi menghentikan bentuk perulangan dalam kondisi apapun
                }
            }
            cout << " Ingin mengulang lagi? (y/t): ";
            cin >> z;
        }
        else if (pilih == 4)
        {
            int kk;
            int n = 10;
            int data[] = {21, 31, 48, 52, 64, 78, 87, 92, 105, 170};
            cout << "===============================" << endl;
            cout << "21,31,48,52,64,78,87,92,105,170" << endl;
            cout << "===============================" << endl;
            cout << "input angka : ";
            cin >> kk;
            int posisi = funcbinary(data, n, kk);

            if (posisi != -1)
            {
                cout << "ANGKA " << kk << " ditemukan pada indeks ke-" << posisi << endl;
                cout << "Ingin mengulang lagi? (y/t): ";
                cin >> z;
            }
            else
            {
                cout << "ANGKA " << kk << " tidak ditemukan" << endl;
                cout << "Ingin mengulang lagi? (y/t): ";
                cin >> z;
            }
        }
        else if (pilih == 5)
        {
            int size;
            cout << "======================================" << endl;
            cout << "\n Masukan Jumlah Array : ";
            cin >> size;
            cout << "======================================" << endl;

            int array[size];
            int key;

            for (int i = 0; i < size; i++)
            {
                cout << "\n Masukan value array ke " << i << " :";
                cin >> array[i];
            }

            cout << "\n Masukan angka yang ingin dicari : ";
            cin >> key;
            cout << "======================================" << endl;

            int index = sequentialSearch(array, size, key);
            if (index != -1)
            {
                cout << "\n Angka ditemukan di index ke: " << index << endl;
                cout << " Ingin mengulang lagi? (y/t): ";
                cin >> z;
            }
            else
            {
                cout << "\n Angka tidak ditemukan" << endl;
                cout << " Ingin mengulang lagi? (y/t): ";
                cin >> z;
            }
        }
        else
        {
            cout << " Pilihan tidak ada" << endl;
            cout << " Ingin mengulang lagi? (y/t): ";
            cin >> z;
        }
    } while (z == 'y' || z == 'Y');
    return 0;
}

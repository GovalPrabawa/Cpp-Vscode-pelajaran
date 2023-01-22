#include <iostream>
#include <iomanip>

using namespace std;

// selection sort
void selectionsort()
{
    int select[] = {13, 57, 18, 43, 98, 54};
    int ukuranarray = sizeof(select) / sizeof(*select);
    int i, j, temp, posisi;

    cout << " Bilangan : ";
    for (int i = 0; i < ukuranarray; i++)
    {
        cout << select[i] << "  ";
    }
    cout << endl;

    // pengurutan dengan selection sort

    for (int a = 0; a < ukuranarray; a++)
    {
        temp = select[a];
        posisi = a;
        for (int j = a; j < ukuranarray; j++)
        {
            if (select[j] < temp)
            {
                temp = select[j];
                posisi = j;
            }
        }

        select[posisi] = select[a];
        select[a] = temp;
    }
    cout << endl;

    cout << " Hasil Selection Sort : " << endl;
    for (i = 0; i < ukuranarray; i++)
    {
        cout << " Bilangan ke-" << i << " = " << select[i] << endl;
    }
}

// bubble sort
void bubblesort()
{
    int bubble[5];
    int temp;
    int n = 5;

    cout << "Masukan Bilangan : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Bilangan ke-" << i << " : ";
        cin >> bubble[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (bubble[j] > bubble[j + 1])
            {
                temp = bubble[j];
                bubble[j] = bubble[j + 1];
                bubble[j + 1] = temp;
            }
        }
    }
    cout << endl;

    cout << "=---   Sesudah di sorting   ---=" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << bubble[i] << " ";
    }
}

// insertion sort
void insertionsort()
{
    int insert[8] = {3, 12, 8, 56, 24, 5, 7, 10};
    int i, j, a, temp;
    int ukuranarray = sizeof(insert) / sizeof(*insert);

    cout << " Bilangan : ";
    for (int i = 0; i < ukuranarray + 1; i++)
    {
        cout << insert[i] << "  ";
    }

    for (int j = 0; j < ukuranarray; j++)
    {
        for (int a = j; a > 0; a--)
        {
            if (insert[a] < insert[a - 1])
            {
                temp = insert[a];
                insert[a] = insert[a - 1];
                insert[a - 1] = temp;
            }

            cout << endl;
            cout << " Proses :" << j << " -> ";
            for (int i = 0; i < ukuranarray + 1; i++)
            {
                cout << insert[i] << " ";
            }
        }
        cout << endl;

        cout << " Hasil Insertion Sort : " << endl;
        for (i = 0; i < ukuranarray; i++)
        {
            cout << " Bilangan ke-" << i << " " << insert[i] << endl;
        }
    }
}

void binarysearch()
{

    int nilai[5], indeks;
    int ukuranarray = sizeof(nilai) / sizeof(*nilai);
    bool ketemu;
    int n, i;

    // penginputan data
    cout << " Masukan Banyaknya Nilai = ";
    cin >> n;

    // pembacaan elemen array
    for (indeks = 1; indeks < ukuranarray; indeks++)
    {
        cout << " Masukan Nilai Ke- " << indeks << " : ";
        cin >> nilai[indeks];
    }

    int awal, akhir, nilaitengah, nilaicari;
    awal = 0;
    akhir = 10;
    nilaitengah = (awal + akhir) / 2;

    // penginputan nilai yang akan dicari
    cout << " Masukan Nilai Yang Akan Dicari : ";
    cin >> nilaicari;

    // proses pencarian
    while (nilaicari != nilai[nilaitengah] && awal < akhir)
    {
        nilaitengah = (awal + akhir) / 2;
        nilai[nilaitengah];
        if (nilaicari > nilai[nilaitengah])
        {
            awal = nilaitengah + 1;
            nilaitengah = (awal + akhir) / 2;
            if (nilaicari == nilai[nilaitengah])
            {
                ketemu = true;
            }
        }

        else
        {
            akhir = nilaitengah - 1;
            nilaitengah = (awal + akhir) / 2;
            if (nilaicari == nilai[nilaitengah])
            {
                ketemu = true;
            }
        }
        // pencetakan nilai yang dicari
        if (ketemu == true)
        {
            cout << " NILAI DITEMUKAN";
            cout << " NILAI " << nilai[nilaitengah] << " TERLETAK PADA INDEKS KE-" << nilaitengah << endl;
        }
        else
        {
            cout << " NILAI TIDAK DIEMUKAN";
        }
    }
}

void sequentialsearch()
{
    int nilaicari, n, a;

    // penginputan data
    cout << " Masukan Banyaknya Nilai = ";
    cin >> n;

    int const jumlahData = n;
    int nilai[jumlahData], indeks;
    bool ketemu = false;

    // pembacaan elemen array
    for (indeks = 0; indeks < jumlahData; indeks++)
    {
        cout << " Masukan Nilai Ke- " << indeks << " : ";
        cin >> nilai[indeks];
    }

    // mencetak elemen array
    for (indeks = 0; indeks < jumlahData; indeks++)
    {
        cout << nilai[indeks] << " ";
    }

    // penginputan nilai yang akan dicari
    cout << " Masukan Nilai Yang Akan Dicari : ";
    cin >> nilaicari;

    // proses pencarian
    for (indeks = 0; indeks < nilaicari; indeks++)
    {
        if (nilaicari == nilai[indeks])
        {
            cout << nilaicari << " ditemukan pada posisi " << indeks + 1 << endl;
            ketemu = true;
            break;
        }
    }

    // pencetakan nilai yang dicari
    if (ketemu == false)
    {
        cout << " NILAI TIDAK DITEMUKAN";
    }
}

int main()
{
    int pilihan, program;
    int status = 0;

    cout << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "*                              PROJEK UAS PRAKTIKUM ALGORITMA DAN STRUKTUR DATA                                       *" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

    cout << endl;
    cout << endl;

    cout << "1. SELECTION SORT " << endl;
    cout << "2. BUBBLE SORT" << endl;
    cout << "3. INSERTION SORT" << endl;
    cout << "4. SEQUENCIAL SEARCH" << endl;
    cout << "5. BINARY SEARCH" << endl;
    cout << endl;
    cout << "MASUKAN PILIHAN : ";
    cin >> pilihan;

    cout << endl;

    switch (pilihan)
    {
    case 1:
        selectionsort();
        break;
    case 2:
        bubblesort();
        break;
    case 3:
        insertionsort();
        break;
    case 4:
        sequentialsearch();
        break;
    case 5:
        binarysearch();
        break;
    }
}
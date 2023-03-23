#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int persegi, i, j, n;
    int spasi, baris;
    char ganjil[15] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    char genap[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    char prima[9] = {2, 3, 5, 7, 11, 13, 17, 19, 23};

    int pilihan;
    cout << "Menu Pilihan : " << endl;
    cout << "1. Kotak " << endl;
    cout << "2. Segitiga " << endl;
    cout << "3. Exit " << endl;
    cout << "masukan pilihan 1/2/3 : ";
    cin >> pilihan;
    cout << endl;

    int mode;
    if (pilihan == 1)
    {
        cout << " MODE " << endl;
        cout << "1. Ganjil (1-30)" << endl;
        cout << "2. Genap (2-20)" << endl;
        cout << "3. Prima (2-27))" << endl;
        cout << "Pilih Mode Yang Diinginkan :";
        cin >> mode;
        cout << endl;
    }

    switch (pilihan)
    {
    case 1:
    {
        cout << "Masukkan panjang sisi persegi: ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mode == 1)
                {
                    cout << "1,3,5,7,9,11,13,15,17,19,21,23,25,27,29";
                }
                else if (mode == 2)
                {
                    cout << "2,4,6,8,10,12,14,16,18,20";
                }
                else if (mode == 3)
                {
                    cout << "2,3,5,7,11,13,17,19,23";
                }
                cout << endl;
            }
        }
        break;
    }
    case 2:
    {
        cout << "Masukan Jumlah Baris: ";
        cin >> baris;

        for (int i = 1, k = 0; i <= baris; ++i, k = 0)
        {
            for (spasi = 1; spasi <= baris - i; ++spasi)
            {
                cout << "  ";
            }

            while (k != 2 * i - 1)
            {
                cout << " ";
                ++k;
            }
            cout << endl;
        }
        break;
    }
    }
    return 0;
}
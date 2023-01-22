#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int angka, max, min;
    char lanjut;
    lanjut = 'y';
    while (lanjut != 'n')
    {
        cout << " Mencari nilai terbesar dan terkecil. (jumlah angka ditentukan)" << endl;

        for (int i = 1; i <= 3; i++)
        {

            cout << "Masukkan Angka       : ";
            cin >> angka;

            if (i == 1)
            {

                min = angka;
                max = angka;
            }
            else if (min > angka)
            {
                min = angka;
                cout << min << " Ini yang min" << endl;
            }
            else if (max < angka)
            {
                max = angka;
                cout << max << " Ini yang maks" << endl;
            }
        }

        cout << endl;
        cout << "Nilai terkecil           : " << min << endl;
        cout << "Nilai terbesar           : " << max << endl;

        cout << "continue? (y/n)" << endl;
        cin >> lanjut;
    }
    +

        getch();
}
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char golongan, istri;
    int gaji, jumlah_anak, total_upah;

    cout << "=====| Program Menghitung Gaji Karyawan |====" << endl;
    cout << "Masukan Golongan : ";
    cin >> golongan;
    cout << "Memiliki istri ? : ";
    cin >> istri;

    if ((golongan == 'A' || golongan == 'a') && istri == 'y')
    {
        cout << "Masukan Jumlah Anak : ";
        cin >> jumlah_anak;
        total_upah = 3000000 + (200000 * jumlah_anak) + 500000 + 1000000;
    }
    else if ((golongan == 'B' || golongan == 'b') && istri == 'y')
    {
        cout << "Masukan Jumlah Anak : ";
        cin >> jumlah_anak;
        total_upah = 2000000 + (150000 * jumlah_anak) + 300000 + 800000;
    }
    else if ((golongan == 'C' || golongan == 'c') && istri == 'y')
    {
        cout << "Masukan Jumlah Anak : ";
        cin >> jumlah_anak;
        total_upah = 1200000 + (50000 * jumlah_anak) + 200000 + 700000;
    }
    else if ((golongan == 'A' || golongan == 'a') && istri == 't')
    {
        total_upah = 3000000 + 1000000;
    }
    else if ((golongan == 'B' || golongan == 'b') && istri == 't')
    {
        total_upah = 2000000 + 800000;
    }
    else if ((golongan == 'C' || golongan == 'c') && istri == 't')
    {
        total_upah = 1200000 + 700000;
    }

    cout << "Total upah yang diterima : " << total_upah << endl;

    return 0;
}
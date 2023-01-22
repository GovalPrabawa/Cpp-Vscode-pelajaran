// mehitung selisih 2 waktu dengan sistem 24 jam dan ditampilkan dalam bentuk jam: menit :detik;

#include <iostream>
using namespace std;

int main()
{
    int jam1, jam2, jam3;
    int menit1, menit2, menit3;
    int detik1, detik2, detik3;
    int interval, sisa, total1, total2;

    cout << "-------------------------------Input Jam-------------------------------" << endl;
    cout << "Mulai pada jam : ";
    cin >> jam1;
    cout << "Mulai pada menit : ";
    cin >> menit1;
    cout << "Mulai pada detik : ";
    cin >> detik1;

    cout << endl;

    cout << "Berakhir pada jam : ";
    cin >> jam2;
    cout << "Berakhir pada menit : ";
    cin >> menit2;
    cout << "Berakhir pada detik : ";
    cin >> detik2;

    total1 = (jam1 * 3600) + (menit1 * 60) + detik1;
    total2 = (jam2 * 3600) + (menit2 * 60) + detik2;

    // durasi = (total2) - (total1);

    if (total2 >= total1)
    {
        interval = total2 - total1;
    }
    else
    {
        interval = ((24 * 3600) - total1) + total2;
    }

    jam3 = interval / 3600 % 60;
    menit3 = (interval % 3600) / 60;
    detik3 = (interval % 3600) % 60;

    // jam3 = durasi / 3600;
    // sisa = durasi % 3600;
    // menit3 = sisa / 60;
    // detik3 = sisa % 60;

    cout << "\n Durasi Waktunya " << jam3 << " jam, " << menit3 << " menit, " << detik3 << " detik";
}
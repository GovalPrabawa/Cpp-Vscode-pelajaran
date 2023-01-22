#include <iostream>

using namespace std;

int main()
{
    int pilihan, input, sisaSaldo, jumlahSaldo;
    char more = 'y';

    cout << "Masukan jumlah Saldo anda: ";
    cin >> jumlahSaldo;
    cout << "Program menarik saldo dan menambah saldo" << endl;
    cout << "1. Tambah saldo" << endl;
    cout << "2. Menarik saldo" << endl;
    cout << "pilih 1/2: ";
    cin >> pilihan;

    cout << endl;
    cout << "jumlah saldo anda sekarang: " << jumlahSaldo << endl;
    // if (pilihan == 1)
    // {
    //     cout << "jumlah top up: ";
    //     cin >> input;
    //     jumlahSaldo += input;
    //     cout << "jumlah saldo anda sekarang adalah: " << jumlahSaldo << endl;
    // }
    // else if (pilihan == 2)
    // {
    //     if (jumlahSaldo < 50000)
    //     {
    //         cout << "Maaf jumlah saldo anda kurang atau 50.000" << endl;
    //         cout << "Jumlah saldo harus diatas 50.000 untuk melakukan penarikan tunai dengan minimal sisa saldo adalah 50.000" << endl;
    //     }
    //     else
    //     {
    //         cout << "jumlah penarikan saldo: ";
    //         cin >> input;

    //         sisaSaldo = jumlahSaldo - input;
    //         if (sisaSaldo < 50000)
    //         {
    //             cout << "Penarikan saldo gagal karena melebihi saldo minimal di rekening";
    //         }
    //         else
    //         {
    //             cout << "Anda berhasil melakukan transaksi senilai " << input << endl;
    //             cout << "Sisa saldo anda adalah  " << sisaSaldo << endl;
    //         }
    //     }
    // }

    switch (pilihan)
    {
    case 1:
        cout << "jumlah top up: ";
        cin >> input;
        jumlahSaldo += input;
        cout << "jumlah saldo anda sekarang adalah: " << jumlahSaldo << endl;
        break;

    case 2:
        if (jumlahSaldo < 50000)
        {
            cout << "Maaf jumlah saldo anda kurang atau 50.000" << endl;
            cout << "Jumlah saldo harus diatas 50.000 untuk melakukan penarikan tunai dengan minimal sisa saldo adalah 50.000" << endl;
        }
        else
        {
            cout << "jumlah penarikan saldo: ";
            cin >> input;

            sisaSaldo = jumlahSaldo - input;
            if (sisaSaldo < 50000)
            {
                cout << "Penarikan saldo gagal karena melebihi saldo minimal di rekening";
            }
            else
            {
                cout << "Anda berhasil melakukan transaksi senilai " << input << endl;
                cout << "Sisa saldo anda adalah  " << sisaSaldo << endl;
            }
        }
    }
}
// NI PUTU NIA KARTIKA PUTRI (220040187)

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct masyarakat
{
    string nama;
    string no_ktp;
    string tanggal_lahir;
    string jenis_kelamin;
    string penjamin[3];
};

masyarakat mas[100];

int main()
{
    int jumlah_data_peminjam = 5;
    system("cls");
    for (int i = 0; i < jumlah_data_peminjam; i++)
    {
        cout << "Data Peminjam Ke- " << i + 1 << endl;
        cout << " Nama\t\t : ";
        getline(cin, mas[i].nama);
        cout << " Nomor KTP\t : ";
        cin >> mas[i].no_ktp;
        cout << " Tanggal Lahir\t : ";
        cin >> mas[i].tanggal_lahir;
        cin.ignore();
        cout << " Jenis Kelamin\t : ";
        getline(cin, mas[i].jenis_kelamin);
        cout << endl;
        cout << "\t PENJAMIN PINJAMAN " << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << " \tPenjamin Ke- " << j + 1 << " : ";
            getline(cin, mas[i].penjamin[j]);
        }

        cout << endl;
        cout << endl;
    }

    cout << " ======================DAFTAR PEMINJAM==================" << endl;
    for (int i = 0; i < jumlah_data_peminjam; i++)
    {
        cout << " Nama Peminjam Ke- " << i + 1 << " : " << mas[i].nama << endl;
        cout << " Nomor KTP Peminjam Ke- " << i + 1 << " : " << mas[i].no_ktp;
        cout << " Tanggal Lahir Peminjam Ke- " << i + 1 << " : " << mas[i].tanggal_lahir;
        cout << " Jenis Kelamin Peminjam Ke- " << i + 1 << " : " << mas[i].jenis_kelamin;
        cout << " "
             << " "
             << " Daftar Penjamin Peminjam Ke- " << i + 1 << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << '\t' << j + 1 << ". " << mas[i].penjamin[j] << endl;
        }
    }

    // getch();

    return 0;
}

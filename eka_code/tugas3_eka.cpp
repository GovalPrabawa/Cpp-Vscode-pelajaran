/*
Nama Kelompok   :
1. Ni Kadek Karlina Lestariani      (220040035)
2. I Made Goval Dwi Ananta Prabawa  (220040036)
3. I Putu Eka Pratama               (220040147)
*/
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
#define MAX_QUEUE 100

using namespace std;

struct DATA_PENDUDUK
{
    string no_ktp;
    string nama;
    string tanggalLahir;
    string jenis_kelamin;
    string penjamin1;
    string penjamin2;
    string penjamin3;
};

struct PENDUDUK
{
    DATA_PENDUDUK data[MAX_QUEUE];
    int head;
    int tail;
};

PENDUDUK antrian;

// todo : inisiasi
void inisiasi()
{
    antrian.head = antrian.tail = -1;
}

// mengecek data apakah kosong
int isEmpty()
{
    if (antrian.tail == -1)
    {
        // cout << "Data kosong";
        return 1;
    }
    else
    {
        // cout << "ada data";
        return 0;
    }
}

// mengecek data jika sudah penuh
int isFull()
{
    if (antrian.tail == MAX_QUEUE - 1)
    {
        // cout << "data penuh";
        return 1;
    }
    else
    {
        // cout << "data tidak penuh";
        return 0;
    }
}

// menambahkan data pada antrian
void enQueue(string no_ktp, string nama, string tanggalLahir, string jenis_kelamin, string penjamin1, string penjamin2, string penjamin3)
{
    if (isEmpty())
    {
        antrian.head = antrian.tail = 0;
        antrian.data[antrian.tail].no_ktp = no_ktp;
        antrian.data[antrian.tail].nama = nama;
        antrian.data[antrian.tail].tanggalLahir = tanggalLahir;
        antrian.data[antrian.tail].jenis_kelamin = jenis_kelamin;
        antrian.data[antrian.tail].penjamin1 = penjamin1;
        antrian.data[antrian.tail].penjamin2 = penjamin2;
        antrian.data[antrian.tail].penjamin3 = penjamin3;
    }
    else
    {
        antrian.tail++;
        antrian.data[antrian.tail].no_ktp = no_ktp;
        antrian.data[antrian.tail].nama = nama;
        antrian.data[antrian.tail].tanggalLahir = tanggalLahir;
        antrian.data[antrian.tail].penjamin1 = penjamin1;
        antrian.data[antrian.tail].penjamin2 = penjamin2;
        antrian.data[antrian.tail].penjamin3 = penjamin3;
    }
    cout << "data sudah ditambahkan" << endl;
}

// menghapus data pada antrian terakhir
void deQueue()
{
    if (isEmpty())
    {
        cout << "Data kosong" << endl;
    }
    else
    {
        for (int i = antrian.head; i <= antrian.tail; i++)
        {
            antrian.data[i].no_ktp, antrian.data[i + 1].no_ktp;
            antrian.data[i].nama, antrian.data[i + 1].nama;
            antrian.data[i].tanggalLahir = antrian.data[i + 1].tanggalLahir;
            antrian.data[i].jenis_kelamin = antrian.data[i + 1].jenis_kelamin;
            antrian.data[i].penjamin1, antrian.data[i + 1].penjamin1;
            antrian.data[i].penjamin2, antrian.data[i + 1].penjamin2;
            antrian.data[i].penjamin3, antrian.data[i + 1].penjamin3;
        }
        antrian.tail--;

        if (isEmpty())
        {
            if (isEmpty())
            {
                antrian.head = antrian.tail = -1;
            }
        }
    }
}

// menghapus seluruh data pada antrian
void clear()
{
    if (isEmpty())
    {
        cout << "Data kosong" << endl;
    }
    else
    {
        antrian.head = antrian.tail = -1;
    }
}

// menampilkan data pada layar
void printData()
{
    cout << "======= Data KTP =======" << endl;
    if (!isEmpty())
    {
        for (int i = antrian.head; i <= antrian.tail; i++)
        {
            cout << "data ke-" << i + 1 << endl;
            cout << "No KTP: " << antrian.data[i].no_ktp << endl;
            cout << "Nama: " << antrian.data[i].nama << endl;
            cout << "Tanggal lahir: " << antrian.data[i].tanggalLahir << endl;
            cout << "Jenis Kelamin: " << antrian.data[i].jenis_kelamin << endl;
            cout << "Penjamin1: " << antrian.data[i].penjamin1 << endl;
            cout << "Penjamin2: " << antrian.data[i].penjamin2 << endl;
            cout << "Penjamin3: " << antrian.data[i].penjamin3 << endl;

            cout << endl;
        }
    }
    else
    {
        cout << "Data kosong" << endl;
    }
}

int main(int argc, char const *argv[])
{
    inisiasi();
    while (true)
    {
        string NIK;
        string nama;
        string tanggalLahir;
        string jenis_kelamin;
        string penjamin1;
        string penjamin2;
        string penjamin3;

        int menu;

        cout << "==========Program data Peminjam=========" << endl;
        cout << "1. Menambahkan data peminjam" << endl;
        cout << "2. Mengurangi data peminjam" << endl;
        cout << "3. Print data peminjam" << endl;
        cout << "4. Hapus seluruh data" << endl;
        cout << "5. Exit" << endl;
        cout << "pilih menu (1/2/3/4/5) : ";
        cin >> menu;
        switch (menu)
        {
        case 1:
            if (isFull())
            {
                cout << "Data sudah penuh!\n\n";
            }
            else
            {
                cout << "===Masukan Data Peminjam===" << endl;
                cout << "No NIK: ";
                cin >> NIK;
                cout << "Nama: ";
                cin >> nama;
                cout << "Tanggal lahir: ";
                cin >> tanggalLahir;
                cout << "Jenis Kelamin: ";
                cin >> jenis_kelamin;
                cout << "Masukan nama penjamin 1, 2 dan 3: ";
                cin >> penjamin1 >> penjamin2 >> penjamin3;

                enQueue(NIK, nama, tanggalLahir, jenis_kelamin, penjamin1, penjamin2, penjamin3);
            }
            system("cls");
            break;

        case 2:
            deQueue();
            // system("cls");
            break;

        case 3:
            printData();
            // system("cls");
            break;

        case 4:
            clear();
            // system("cls");
            break;
        case 5:
            exit(0);

        default:
            cout << "Input menu yang anda masaukan tidak tersedia" << endl;
        }
    }
    return 0;
}

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
#define MAX_QUEUE 5
// #define MAX_NIK_LEN 6
// #define MAX_NAMA_LEN 11
// #define MAX_TANGGALLAHIR_LEN 11
// #define MAX_perkawinan_LEN 13
// #define MAX_PEKERJAAN_LEN 11

using namespace std;

struct KTP
{
    char NIK[6];
    char nama[10];
    string tanggalLahir;
    char perkawinan[12];
    char pekerjaan[10];
};

struct Queue
{
    KTP data[MAX_QUEUE];
    int head;
    int tail;
};

Queue antrian;

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
void enQueue(char NIK[6], char nama[10], string tanggalLahir, char perkawinan[12], char pekerjaan[10])
{
    if (isEmpty())
    {
        antrian.head = antrian.tail = 0;
        strcpy(antrian.data[antrian.tail].NIK, NIK);
        strcpy(antrian.data[antrian.tail].nama, nama);
        antrian.data[antrian.tail].tanggalLahir = tanggalLahir;
        strcpy(antrian.data[antrian.tail].perkawinan, perkawinan);
        strcpy(antrian.data[antrian.tail].pekerjaan, pekerjaan);
    }
    else
    {
        antrian.tail++;
        strcpy(antrian.data[antrian.tail].NIK, NIK);
        strcpy(antrian.data[antrian.tail].nama, nama);
        antrian.data[antrian.tail].tanggalLahir = tanggalLahir;
        strcpy(antrian.data[antrian.tail].perkawinan, perkawinan);
        strcpy(antrian.data[antrian.tail].pekerjaan, pekerjaan);
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
            strcpy(antrian.data[i].NIK, antrian.data[i + 1].NIK);
            strcpy(antrian.data[i].nama, antrian.data[i + 1].nama);
            antrian.data[i].tanggalLahir = antrian.data[i + 1].tanggalLahir;
            strcpy(antrian.data[i].perkawinan, antrian.data[i + 1].perkawinan);
            strcpy(antrian.data[i].pekerjaan, antrian.data[i + 1].pekerjaan);
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
            cout << "data ke-" << i << endl;
            cout << "NIK: " << antrian.data[i].NIK << endl;
            cout << "Nama: " << antrian.data[i].nama << endl;
            cout << "Tanggal lahir: " << antrian.data[i].tanggalLahir << endl;
            cout << "Status perkawinan: " << antrian.data[i].perkawinan << endl;
            cout << "Pekerjaan: " << antrian.data[i].pekerjaan << endl;
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
        char NIK[6];
        char nama[10];
        string tanggalLahir;
        char perkawinan[12];
        char pekerjaan[10];
        int menu;

        cout << "==========Program Queue=========" << endl;
        cout << "1. Enqueue/menambahkan data KTP" << endl;
        cout << "2. Dequeue/mengurangi data KTP" << endl;
        cout << "3. Print data KTP" << endl;
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
                cout << "===Masukan Data Anda===" << endl;
                cout << "===NOTE!===" << endl;
                cout << "1. NIK harus 5 digit angka!" << endl;
                cout << "2. Status Perkawinan ditulis: kawin/belum-kawin" << endl;
                cout << "Ikuti petunjuk tersebut untuk menghindari kesalahan dalam sistem" << endl;
                cout << "No NIK: ";
                cin >> NIK;
                cout << "Nama: ";
                cin >> nama;
                cout << "Tanggal lahir: ";
                cin >> tanggalLahir;
                cout << "Status perkawinan: ";
                cin >> perkawinan;
                cout << "pekerjaan: ";
                cin >> pekerjaan;

                enQueue(NIK, nama, tanggalLahir, perkawinan, pekerjaan);
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

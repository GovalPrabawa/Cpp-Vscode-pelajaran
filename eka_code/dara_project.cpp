#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string.h>
#define MAX_QUEUE 100

using namespace std;

struct KTP
{
    string NIK;
    string nama;
    string tanggalLahir;
    string perkawinan;
    string pekerjaan;
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
        // data penuh;
        return 1;
    }
    else
    {
        // cout << "data tidak penuh";
        return 0;
    }
}

void deQueue()
{
    // jika data kosong
    if (isEmpty())
    {
        // tampilkan ke layar bahwa tidak ada data
        cout << "Data kosong" << endl;
    }
    // jika ada data dalam antrian
    else
    {
        // hapus data yang terdepan dalam antrian
        for (int i = antrian.head; i <= antrian.tail; i++)
        {
            antrian.data[i].NIK, antrian.data[i + 1].NIK;
            antrian.data[i].nama, antrian.data[i + 1].nama;
            antrian.data[i].tanggalLahir = antrian.data[i + 1].tanggalLahir;
            antrian.data[i].perkawinan, antrian.data[i + 1].perkawinan;
            antrian.data[i].pekerjaan, antrian.data[i + 1].pekerjaan;
        }
        // set tail agar berpindah 1 langkah ke depan dan berada pada data terakhir
        antrian.tail--;

        // jika data kosong
        // if (isEmpty())
        // {
        //     if (isEmpty())
        //     {
        //         antrian.head = antrian.tail = -1;
        //     }
        // }
    }
}

// menghapus seluruh data pada antrian
void clear()
{
    // jikka data kosong
    if (isEmpty())
    {
        // tampilkan di layar bahwa data kosong
        cout << "Data kosong" << endl;
    }
    // jika ada data
    else
    {
        // set head dan tail = -1 agar seluruh data terhapus
        antrian.head = antrian.tail = -1;
    }
}

void enQueue(string NIK, string nama, string tanggalLahir, string perkawinan, string pekerjaan)
{
    // jika antrian masih kosong dan ditambahkan data pertama
    if (isEmpty()) // cek jika data kosong
    {
        // set head dan tail = 0 lalu tangkap data lewat parameter dan masukan
        antrian.head = antrian.tail = 0;
        antrian.data[antrian.tail].NIK = NIK;
        antrian.data[antrian.tail].nama = nama;
        antrian.data[antrian.tail].tanggalLahir = tanggalLahir;
        antrian.data[antrian.tail].perkawinan = perkawinan;
        antrian.data[antrian.tail].pekerjaan = pekerjaan;
    }
    // jika antrian terdapat data
    else
    {
        // set tail +1, lalu tangkap data lewat parameter dan masukan
        antrian.tail++;
        antrian.data[antrian.tail].NIK = NIK;
        antrian.data[antrian.tail].nama = nama;
        antrian.data[antrian.tail].tanggalLahir = tanggalLahir;
        antrian.data[antrian.tail].perkawinan = perkawinan;
        antrian.data[antrian.tail].pekerjaan = pekerjaan;
    }
    cout << "data sudah ditambahkan" << endl;
}

void printData()
{
    cout << "======= Data KTP =======" << endl;
    // jika antrian tidak kosong
    if (!isEmpty())
    {
        // print data antrian ke layar
        for (int i = antrian.head; i <= antrian.tail; i++)
        {
            cout << "data ke-" << i + 1 << endl;
            cout << "NIK: " << antrian.data[i].NIK << endl;
            cout << "Nama: " << antrian.data[i].nama << endl;
            cout << "Tanggal lahir: " << antrian.data[i].tanggalLahir << endl;
            cout << "Status perkawinan: " << antrian.data[i].perkawinan << endl;
            cout << "Pekerjaan: " << antrian.data[i].pekerjaan << endl;
            cout << endl;
        }
    }
    // jika data kosong
    else
    {
        // tampilkan ke layar bahwa data kosong
        cout << "Data kosong" << endl;
    }
}

int main(int argc, char const *argv[])
{
    // jalankan prosedur agar head dan tail di set ke -1
    inisiasi();

    // buat variabel yang dibutuhkan
    string NIK;
    string nama;
    string tanggalLahir;
    string perkawinan;
    string pekerjaan;
    string menu;

    // while digunakan agar program tak berhenti kecuali keinginan oleh pengguna
    while (true)
    {
        cout << "==========Program Queue=========" << endl;
        cout << "1. Enqueue/menambahkan data KTP" << endl;
        cout << "2. Dequeue/mengurangi data KTP" << endl;
        cout << "3. Print data KTP" << endl;
        cout << "4. Hapus seluruh data" << endl;
        cout << "5. Exit" << endl;
        cout << "pilih menu (1/2/3/4/5) : ";
        //  getline digunakan untuk menangkap
        getline(cin, menu) >> menu;

        if (menu == "1")
        {
            if (isFull())
            {
                cout << "Data Penuh" << endl;
            }
            else
            {
                cout << "No NIK: ";
                getline(cin, NIK);
                cout << "Nama: ";
                getline(cin, nama);
                cout << "Tanggal lahir: ";
                getline(cin, tanggalLahir);
                cout << "Status perkawinan: ";
                getline(cin, perkawinan);
                cout << "pekerjaan: ";
                getline(cin, pekerjaan);

                enQueue(NIK, nama, tanggalLahir, perkawinan, pekerjaan);
            }
        }
        else if (menu == "2")
        {
            deQueue();
        }
        else if (menu == "3")
        {
            printData();
        }
        else if (menu == "4")
        {
            clear();
        }
        else if (menu == "5")
        {
            exit(0);
        }
        else
        {
            cout << "Input menu yang ansa masukan tidak tersedia..." << endl;
        }
    }

    return 0;
}

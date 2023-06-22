#include <iostream>
using namespace std;
#include <string>

struct Penduduk
{

    //* komponen
    string nik, nama, alamat_sekarang, alamat_asal;

    Penduduk *next;
};

Penduduk *head, *tail, *cur, *newNode, *del, *before;
void init()
{
    head = NULL;
    tail = NULL;
}

int isEmpty()
{
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int countSingleLinkedList()
{
    cur = head;
    int jumlah = 0;
    while (cur != NULL)
    {
        jumlah++;
        cur = cur->next;
    }
    return jumlah;
}

// menambah data pertama
void addData(string nik, string nama, string alamat_sekarang, string alamat_asal)
{
    head = new Penduduk();
    head->nik = nik;
    head->nama = nama;
    head->alamat_sekarang = alamat_sekarang;
    head->alamat_asal = alamat_asal;
    head->next = NULL;
    tail = head;
}

// nambah data di depan
void addFirst(string nik, string nama, string alamat_sekarang, string alamat_asal)
{
    newNode = new Penduduk();
    head->nik = nik;
    head->nama = nama;
    head->alamat_sekarang = alamat_sekarang;
    head->alamat_asal = alamat_asal;
    newNode->next = head;
    head = newNode;
}

// menambah data di belakang
void addLast(string nik, string nama, string alamat_sekarang, string alamat_asal)
{
    newNode = new Penduduk();
    head->nik = nik;
    head->nama = nama;
    head->alamat_sekarang = alamat_sekarang;
    head->alamat_asal = alamat_asal;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

void removeFirst()
{
    del = head;
    head = head->next;
    delete del;
}

void removeLast()
{
    del = tail;
    cur = head;
    // transversing
    while (cur->next != tail)
    {
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete del;
}

void addMiddle(string nik, string nama, string alamat_sekarang, string alamat_asal, int posisi)
{
    if (posisi < 1 || posisi > countSingleLinkedList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi buukan posisi tengah" << endl;
    }
    else
    {
        newNode = new Penduduk();
        newNode->nik = nik;
        newNode->nama = nama;
        newNode->alamat_sekarang = alamat_sekarang;
        newNode->alamat_asal = alamat_asal;

        // tranversing
        cur = head;
        int nomor = 1;
        while (nomor < posisi - 1)
        {
            cur = cur->next;
            nomor++;
        }
        newNode->next = cur->next;
        cur->next = newNode;
    }
}

void changeMiddle(string nik, string nama, string alamat_sekarang, string alamat_asal, int posisi)
{
    if (posisi < 1 || posisi > countSingleLinkedList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1 || posisi == countSingleLinkedList())
    {
        cout << "Posisi buukan posisi tengah" << endl;
    }
    else
    {
        cur = head;
        int nomor = 1;
        while (nomor < posisi)
        {
            cur = cur->next;
            nomor++;
        }
        cur->nik = nik;
        cur->nama = nama;
        cur->alamat_sekarang = alamat_sekarang;
        cur->alamat_asal = alamat_asal;
    }
}

void printLinkedList()
{
    cout << "Jumlah data ada: " << countSingleLinkedList() << endl;
    cur = head;
    if (isEmpty() == 0)
    {
        while (cur != NULL)
        {
            cout << "Nik              : " << cur->nik << endl;
            cout << "Nama             : " << cur->nama << endl;
            cout << "Alamat Sekarang  : " << cur->alamat_sekarang << endl;
            cout << "Alamat Asal      : " << cur->alamat_asal << endl;
            cur = cur->next;
        }
    }
    else
    {
        cout << "Masih kosong" << endl;
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    init();
    string nik;
    string nama;
    string alamat_sekarang;
    string alamat_asal;
    string menu;

    // while (true)
    // {
    //     cout << "Program Input Pendudukan" << endl;
    //     cout << "1. Input data penduduk" << endl;
    //     cout << "2. Total data penduduk" << endl;
    //     cout << "3. Tampilkan data penduduk " << endl;
    //     cout << "4. Hapus data penduduk " << endl;
    //     cout << "Pilih Program (1/2/3): ";
    //     getline(cin, menu);
    //     cout << endl;

    //     if (menu == "1")
    //     {
    //         cout << "======== Masukan data penduduk ========" << endl;
    //         cout << "NIK  : ";
    //         getline(cin, nik);
    //         cout << "Nama : ";
    //         getline(cin, nama);
    //         cout << "Alamat sekarang :";
    //         getline(cin, alamat_sekarang);
    //         cout << "Alamat asal     :";
    //         getline(cin, alamat_asal);

    //         if (isEmpty() == 1)
    //         {
    //             addData(nik, nama, alamat_sekarang, alamat_asal);
    //         }
    //         else
    //         {
    //             addLast(nik, nama, alamat_sekarang, alamat_asal);
    //         }
    //     }
    //     else if (menu == "2")
    //     {
    //         cout << "======== Masukan data penduduk ========" << endl;
    //         cout << "NIK  : ";
    //         getline(cin, nik);
    //         cout << "Nama : ";
    //         getline(cin, nama);
    //         cout << "Alamat sekarang :";
    //         getline(cin, alamat_sekarang);
    //         cout << "Alamat asal     :";
    //         getline(cin, alamat_asal);

    //         addLast(nik, nama, alamat_sekarang, alamat_asal);
    //     }
    //     else if (menu == "3")
    //     {
    //         printLinkedList();
    //     }
    //     else if (menu == "4")
    //     {
    //         exit(0);
    //     }
    //     else if (menu == "5")
    //     {
    //         exit(0);
    //     }
    // }

    addData("1", "2221", "2212", "2212");
    printLinkedList();

    // cout << endl;

    addLast("222", "222", "222", "222");
    printLinkedList();

    return 0;
}

#include <iostream>
using namespace std;

//* deklarasi single linkedlist
struct Buku
{

    //* komponen
    string judul, pengarang;
    int tahunTerbit;

    Buku *next;
};

Buku *head, *tail, *cur, *newNode, *del, *before;

int countSingleLinkedList();

//* Create single linked list
void createSingleLinkedList(string judul, string pengarang, int tahunTerbit);

//* tambah awal single linked list
void addFirst(string judul, string pengarang, int tahunTerbit);

//*tambah akhir single linked list
void addLast(string judul, string pengarang, int tahunTerbit);

// todo tambah node ditengah
void addMiddle(string judul, string pengarang, int tahunTerbit, int posisi)
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
        newNode = new Buku();
        newNode->judul = judul;
        newNode->pengarang = pengarang;
        newNode->tahunTerbit = tahunTerbit;

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

//* Remove first
void removeFirst();

//* remove last
void removeLast();

// todo delete nod in middle
void removeMiddle(int posisi)
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
        int nomor = 1;
        cur = head;
        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                before = cur;
            }
            if (nomor == posisi)
            {
                del = cur;
            }
            cur = cur->next;
            nomor++;
        }
        before->next = cur;
        delete del;
    }
}

//* ubahAwal data linked list
void changeFirst(string judul, string pengarang, int tahunTerbit)
{
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunTerbit = tahunTerbit;
}

//* ubahAkhir data linked list
void changeLast(string judul, string pengarang, int tahunTerbit)
{
    tail->judul = judul;
    tail->pengarang = pengarang;
    tail->tahunTerbit = tahunTerbit;
}

//*
void changeMiddle(string judul, string pengarang, int tahunTerbit, int posisi)
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
        cur->judul = judul;
        cur->pengarang = pengarang;
        cur->tahunTerbit = tahunTerbit;
    }
}

//* print single linked list
void printLinkedList();

//* jumlah data
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

int main(int argc, char const *argv[])
{
    //? tanpa fungsi
    /*//* inisialisasi linked list
    Buku *node1, *node2, *node3;

    //* cara 1
    // node1 = (Buku *)malloc(sizeof(Buku)); // malloc(memori allocations)

    //* cara 2
    node1 = new Buku();
    node2 = new Buku();
    node3 = new Buku();

    // todo: pengisian data node 1
    node1->judul = "Sinar Mentari";
    node1->pengarang = "Goval";
    node1->tahunTerbit = 2009;

    //! penyambungan node1 ke node2
    node1->next = node2;

    // todo: pengisian data node 2
    node2->judul = "Dear Nathan";
    node2->pengarang = "Isabella";
    node2->tahunTerbit = 2020;

    //! penyambungan node2 ke node3
    node2->next = node3;

    // todo: pengisian data node 3
    node3->judul = "Antares";
    node3->pengarang = "Aris";
    node3->tahunTerbit = 2022;

    //! node akhir
    node3->next = NULL;

    //* print single linked list
    Buku *cur;
    cur = node1;

    while (cur != NULL)
    {
        cout << "Judul buku node    : " << cur->judul << endl;
        cout << "Nama buku node     : " << cur->pengarang << endl;
        cout << "Tahun terbit node  : " << cur->tahunTerbit << endl;
        cout << endl;

        cur = cur->next;
    } */

    //? Dengan fungsi
    cout << "==== Create single ====" << endl;
    createSingleLinkedList("Aku Cinta Kamu", "Goval", 2020);
    printLinkedList();

    cout << endl;
    cout << endl;

    cout << "==== Add single in front head ====" << endl;
    addFirst("Dear Nadia", "Anggabaya", 2021);
    printLinkedList();

    cout << endl;
    cout << endl;

    cout << "==== Add single in last ==== " << endl;
    addLast("Dear Goval", "Ludra", 2025);
    printLinkedList();

    cout << endl;
    cout << endl;

    cout << "==== remove head ====" << endl;
    removeFirst();
    printLinkedList();

    cout << "==== Add single in last ====" << endl;
    addLast("Bintang", "Pinokio", 2028);
    printLinkedList();

    cout << endl;
    cout << endl;

    cout << "==== remove tail ====" << endl;
    removeLast();
    printLinkedList();

    cout << endl;
    cout << endl;

    cout << "==== Update data di head ====" << endl;
    changeFirst("Halo", "jayen", 2013);
    printLinkedList();

    cout << endl;
    cout << endl;

    cout << "==== Update data di tail ====" << endl;
    changeLast("Cinta Abadi", "Tulus", 2013);
    printLinkedList();

    cout << endl;
    cout << endl;

    cout << "==== Menambahkan data node ditengah ====" << endl;
    addMiddle("KLSJSKSJSK", "ARIA", 2019, 2);
    printLinkedList();

    cout << endl;
    cout << endl;

    cout << "==== Menambahkan data node ditengah ====" << endl;
    addMiddle("Jayanegrat", "Suci", 2019, 3);
    printLinkedList();

    cout << endl;
    cout << endl;

    cout << "==== remove data node ditengah ====" << endl;
    removeMiddle(3);
    printLinkedList();

    cout << endl;
    cout << endl;

    //
    cout << "==== remove data node ditengah ====" << endl;
    removeMiddle(2);
    printLinkedList();

    cout << endl;
    cout << endl;

    // cout << "==== mengubah data node ditengah ====" << endl;
    // changeMiddle("Prabu Jaya", "Lestari", 2019, 3);
    // printLinkedList();

    cout << "==== Menambahkan data node ditengah ====" << endl;
    addMiddle("Jayanegrat", "Suci", 2019, 1);
    printLinkedList();

    return 0;
}

void createSingleLinkedList(string judul, string pengarang, int tahunTerbit)
{
    head = new Buku();
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunTerbit = tahunTerbit;
    head->next = NULL;
    tail = head;
}

void addFirst(string judul, string pengarang, int tahunTerbit)
{
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunTerbit = tahunTerbit;
    newNode->next = head;
    head = newNode;
}

void addLast(string judul, string pengarang, int tahunTerbit)
{
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunTerbit = tahunTerbit;
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

void printLinkedList()
{
    cout << "Jumlah data ada: " << countSingleLinkedList() << endl;
    cur = head;
    while (cur != NULL)
    {
        cout << "Judul buku node    : " << cur->judul << endl;
        cout << "Nama buku node     : " << cur->pengarang << endl;
        cout << "Tahun terbit node  : " << cur->tahunTerbit << endl;
        cout << endl;

        cur = cur->next;
    }
}

#include <iostream>
#include <conio.h>  //MENGGUNAKAN GETCH()
#include <stdlib.h> //MENGGUNAKAN SYSTEM("CLS)
#define MAX 1000    // MAKSIMAL NOMOR ANTRIAN

using namespace std;

int nomer[MAX];
int head = -1;
int tail = -1;

bool IsEmpty()
{ // FUNGSI UNTUK MENUNJUKAN JIKA TAIL = -1
    if (tail == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool IsFull()
{ // FUNGSI UNTUK MENUNJUKAN JIKA TAIL = MAX-1
    if (tail == MAX - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void AntrianMasuk(int no)
{
    if (IsEmpty())
    {
        head = tail = 0;
    }
    else
    {
        tail++;
    }
    nomer[tail] = no;
}

void AntrianKeluar()
{
    if (IsEmpty())
    {
        cout << "Antrian sudah kosong ! ";
    }
    else
    {
        for (int a = head; a < tail; a++)
        {
            nomer[a] = nomer[a + 1];
        }
        tail--;
        if (tail == -1)
        {
            head = -1;
        }
        cout << "selesai" << endl;
    }
}

void Clear()
{
    head = tail = -1;
}

void View()
{
    if (IsEmpty())
    {
        cout << "Antrian kosong ! ";
    }
    else
    {
        system("cls");
        for (int a = head; a <= tail; a++)
        {
            cout << "==============================="
                 << "\n >> No. Antri : [" << nomer[a] << "]"
                 << "\n===============================" << endl;
        }
    }
}

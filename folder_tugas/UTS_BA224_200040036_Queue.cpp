#include <iostream>
#define MAX 6

using namespace std;

int nomer[MAX];
int tail = -1;
int head = -1;

bool is_Empty()
{
    if (tail == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_Full()
{
    if (tail == MAX - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Enqueue(int no)
{
    if (is_Empty())
    {
        head = tail = 0;
    }
    else
    {
        tail++;
    }
    nomer[tail] = no;
}

void Dequeue()
{
    cout << "==========================================" << endl;
    if (is_Empty())
    {
        cout << "Antrian sudah kosong ! ";
    }
    else
    {
        cout << "Isi antrian terdepan adalah : " << endl;
        cout << nomer[0] << " dikeluarkan dari antrian" << endl;
        for (int a = head; a < tail; a++)
        {
            nomer[a] = nomer[a + 1];
        }
        tail--;
        if (is_Empty())
        {
            head = -1;
            cout << "Data kosong!" << endl;
        }
    }
    cout << "==========================================" << endl;
    cout << endl;
}

void CountAntrian()
{
    cout << "==========================================" << endl;
    if (is_Empty())
    {
        cout << "Data kosong" << endl;
    }
    else if (is_Full())
    {
        cout << "Banyaknya bilangan di antrian : " << endl;
        cout << MAX << endl;
    }
    else
    {
        cout << "Banyaknya bilangan di antrian : " << endl;
        cout << tail + 1 << endl;
    }
    cout << "==========================================" << endl;
}

void PrintAntrian()
{
    cout << "==========================================" << endl;
    if (is_Empty())
    {
        cout << "Antrian kosong ! ";
    }
    else
    {

        cout << "Semua bilangan dalam antrian : " << endl;
        for (int a = head; a <= tail; a++)
        {
            cout << nomer[a] << " ";
        }
    }
    cout << endl;
    cout << "==========================================" << endl;
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int menu, input_angka;
    while (true)
    {
        cout << "Pilih menu: " << endl;
        cout << "1. Tambah bilangan ke antrian" << endl;
        cout << "2. Mengeluarkan bilangan terdepan dari antrian" << endl;
        cout << "3. Menampilkan banyak bilangan sisa di antrian" << endl;
        cout << "4. Menampilkan semua bilangan di antrian" << endl;
        cout << "5. Keluar program antrian" << endl;
        cout << "Masukan pilihan: ";
        cin >> menu;
        cout << endl;

        switch (menu)
        {
        case 1:
            system("cls");
            if (is_Full())
            {
                cout << "Data penuh" << endl;
            }
            else
            {
                cout << "=======================================================" << endl;
                cout << "Masukkan bilangan ke antrian: ";
                cin >> input_angka;
                cout << "=======================================================" << endl;
                Enqueue(input_angka);
            }
            cout << endl;
            break;
        case 2:
            system("cls");
            Dequeue();
            break;
        case 3:
            system("cls");
            CountAntrian();
            break;
        case 4:
            system("cls");
            PrintAntrian();
            break;
        case 5:
            system("cls");
            cout << "TERIMA KASIH" << endl;
            cout << "PROGRAM INI DIBUAT OLEH : (220040036) I MADE GOVAL DWI ANANTA PRABAWA" << endl;
            exit(0);
        default:
            cout << "Anda salah memasukan no pada menu" << endl;
            break;
        }
    }
    return 0;
}

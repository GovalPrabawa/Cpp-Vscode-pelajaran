#include <iostream>
#include <stdlib.h>
#define MAX_STACK 5

using namespace std;

struct Stack
{
    int top;
    int data[MAX_STACK];
};

Stack tumpuk;

// inisiasi
void inisiasi()
{
    tumpuk.top = -1;
}

// cek apakah data pada stack telah penuh atau tidak
int isEmpty()
{
    if (tumpuk.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// cek apakah data pada stack kosong atau tidak
int isFull()
{
    if (tumpuk.top == MAX_STACK - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// menambahkan data
void push(int item)
{
    if (isFull())
    {
        cout << "Data telah penuh" << endl;
    }
    else
    {
        tumpuk.top++;
        tumpuk.data[tumpuk.top] = item;
    }
}

// menghapus data stack paling atas
void pop()
{
    if (isEmpty())
    {
        cout << "Data  kosong" << endl;
    }
    else
    {
        cout << "Data yang dihapus adalah: " << tumpuk.data[tumpuk.top] << endl;
        tumpuk.top--;
    }
}

// menghapus seluruh data pada stack
void clear()
{
    if (isEmpty())
    {
        cout << "Data kosong" << endl;
    }
    else
    {
        tumpuk.top = -1;
        cout << "Stack sudah dikosongkan" << endl;
    }
}

// menampilkan data stack ke layar
void printData()
{
    if (isEmpty())
    {
        cout << "Data kosong" << endl;
    }
    else
    {
        cout << "Item pada stack" << endl;
        for (int i = tumpuk.top; i >= 0; i--)
        {
            cout << "[" << i << "]--> " << tumpuk.data[i] << endl;
        }
        cout << endl;
    }
}

// fungsi utama
int main(int argc, char const *argv[])
{
    inisiasi();

    while (true)
    {
        int item;
        int menu;
        cout << "==========Program stack==========" << endl;
        cout << "1. Push item" << endl;
        cout << "2. Pop item" << endl;
        cout << "3. Clear item" << endl;
        cout << "4. Print" << endl;
        cout << "5. Clear layar console" << endl;
        cout << "6. Exit" << endl;
        cout << "Masukan pilihan (1/2/3/4/5/6): ";
        cin >> menu;
        switch (menu)
        {
        case 1:
            if (isFull())
            {
                cout << "Data telah penuh" << endl;
            }
            else
            {
                cout << "Masukan item: ";
                cin >> item;
                push(item);
            }
            break;
        case 2:
            if (isEmpty())
            {
                cout << "Data kosong" << endl;
            }
            else
            {
                pop();
            }
            break;
        case 3:
            if (isEmpty())
            {
                cout << "Data kosong" << endl;
            }
            else
            {
                clear();
            }
            break;
        case 4:
            if (isEmpty())
            {
                cout << "Data kosong" << endl;
            }
            else
            {
                printData();
            }
            break;
        case 5:
            system("cls");
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Anda salah input pilihan pada menu" << endl;
            break;
        }
    }
    // cout << isFull() << endl;
    // cout << isEmpty() << endl;
    // push(1);
    // push(2);
    // push(3);
    // push(4);
    // push(5);
    // pop();
    // cout << endl;
    // printData();
    // cout << endl;
    // pop();
    // printData();
    clear();
    return 0;
}

#include <iostream>
using namespace std;

int maksimal = 5;
string arrayBuku[5];
int top = 0;

bool isFull() // mengecek data apakah full
{
    if (top == maksimal)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty() // mengecek data apakah kosong
{
    if (top == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void pushArray(string data) // menambahkan data
{
    if (isFull() == true)
    {
        cout << "data penuh" << endl;
    }
    else
    {
        arrayBuku[top] = data;
        top++;
    }
}

void popArray() // mengurangi data
{
    if (isEmpty() == true)
    {
        cout << "Data kosong" << endl;
    }
    else
    {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void displayArray()
{
    if (isEmpty() == true)
    {
        cout << "Data kosong" << endl;
    }
    else
    {
        cout << "Data stack array : " << endl;
        for (int i = maksimal - 1; i >= 0; i--)
        {
            if (arrayBuku[i] != "")
            {
                cout << i+1 << ". " << arrayBuku[i] << endl;
            }
        }
        cout << " \n " << endl;
    }
}

void peekArray(int posisi) // melihat buku berdasarkan no data
{
    if (isEmpty() == true)
    {
        cout << "Data kosong" << endl;
    }
    else
    {
        int index = top;
        for (int i = 1; i <= posisi; i++)
        {
            index--;
        }
        cout << "Data posisi : " << arrayBuku[index] << endl;
    }
}

void changeArray(string data, int posisi) // mengganti data
{
    if (isEmpty() == true)
    {
        cout << "Data kosong" << endl;
    }
    else
    {
        int index = top;
        for (int i = 0; i < posisi; i++)
        {
            index--;
        }
        arrayBuku[index] = data;
    }
}

int countArray() // menghitung jumlah data
{
    if (isEmpty() == true)
    {
        return 0;
    }
    else
    {
        return top;
    }
}

void destroyArray()
{
    for (int i = 0; i < top; i++)
    {
        arrayBuku[i] = "";
    }
    top = 0;
}

int main(int argc, char const *argv[])
{
    pushArray("Matematika");       // index 3 |data 1
    pushArray("PJOK");             // index 2 |data 2
    pushArray("Bahasa Indonesia"); // index 1 |data 3
    pushArray("Sejarah");          // index 0 |data 4
    pushArray("Pancasila");
    displayArray();

    // pushArray("Web");
    // displayArray();

    cout << "mengurangi data" <<endl;
    // todo: mengurangi data
    popArray();
    displayArray();
    cout << endl;

    cout << "Apakah data full ? : " << isFull() << endl;
    cout << "Apakah data kosong ? : " << isEmpty() << endl;

    cout << endl;
    cout << "Melihat data dengan input" << endl;
    // todo: melihat data dengan input 3
    peekArray(3); // data

    cout << endl;
    cout << "Menghitung jumlah data yang ada" << endl;
    cout << "Banyak data : " << countArray() << endl;


    cout << endl;
    cout << "mengganti data yang ada" << endl;
    // todo: mengganti array
    changeArray("Database System", 2);
    displayArray();
    // cout << endl;
    // cout << arrayBuku[3];

    cout << endl;
    // menghapus semua data
    cout << "menghapus semua data" << endl;
    destroyArray();

    cout << endl;
    cout << "Apakah data full ? : " << isFull() << endl;
    cout << "Apakah data kosong ? : " << isEmpty() << endl;
    displayArray();


    return 0;
}

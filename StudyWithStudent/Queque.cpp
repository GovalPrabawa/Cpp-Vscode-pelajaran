#include <iostream>

using namespace std;

//* arrray antrian
int maksimalAntrianArray = 5, front = 0, back = 0;

//* ruangAntrianArray
string antrianAtm[5];

//! function
// todo: cek data full atau tidak
bool isFullArray()
{
    if (back == maksimalAntrianArray)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// todo: cek data kosong atau tidak
bool isEmptyArray()
{
    if (back == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// todo : enQueue, penambahan data antrian
void enqueueArray(string data)
{
    if (isFullArray())
    {
        cout << "Antrian Penuh" << endl;
    }
    else
    {
        // cek apakah data kosong atau tidak
        if (isEmptyArray())
        {
            // kalau antrian kosong
            antrianAtm[0] = data;
            front++;
            back++;
        }
        else
        {
            // kalau tidak kosong
            antrianAtm[back] = data;
            back++;
        }
    }
}

// todo count array / menghitung banyak data yang ngantri
int countArray()
{
    if (isEmptyArray())
    {
        return 0;
    }
    else if (isFullArray())
    {
        return maksimalAntrianArray;
    }
    else
    {
        return back;
    }
}

void destroyArray()
{
    if (isEmptyArray())
    {
        cout << "Tidak ada antrian" << endl;
    }
    else
    {
        for (int i = 0; i < maksimalAntrianArray; i++)
            if (back > 1)
            {
                antrianAtm[back - 1] = "";
                back--;
            }
            else if (back == 1)
            {
                antrianAtm[back - 1] = "";
                back = 0;
                front = 0;
            }
    }
}

// todo dequeue // penghapusan data depan
void dequeueArray()
{
    if (isEmptyArray())
    {
        cout << "Antrian kosong" << endl;
    }
    else
    {
        for (int i = 0; i < back; i++)
        {
            if (maksimalAntrianArray == 1)
            {
                cout << "Antrian cuma 1" << endl;
            }
            else
            {
                antrianAtm[i] = antrianAtm[i + 1];
            }
        }
        back--;
        // for (int i = 0; i < back; i++)
        // {
        //     antrianAtm[i] = antrianAtm[i + 1];
        // }
        // back--;

        // antrianAtm[0] = antrianAtm[1];
        // antrianAtm[1] = antrianAtm[2];
        // antrianAtm[2] = antrianAtm[3];
        // antrianAtm[3] = antrianAtm[4];
        // antrianAtm[4] = "";
    }
}

// todo : print data
void viewArray()
{
    cout << "jumlah data yang ngantri = " << countArray() << " data. " << endl;
    cout << "====== Data antrian atm ======" << endl;
    if (isEmptyArray())
    {
        cout << "Antrian kosong" << endl;
    }
    else
    {
        for (int i = 0; i < maksimalAntrianArray; i++)
        {
            // cek ruang kosong atau tidak
            if (antrianAtm[i] != "")
            {
                // kalau ruang tidak kosong
                cout << i + 1 << ". " << antrianAtm[i] << endl;
            }
            else
            {
                // kalo kosong
                cout << i + 1 << ". (kosong)" << antrianAtm[i] << endl;
            }
        }
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    // todo:  tambah data
    enqueueArray("Mamat");
    enqueueArray("Iben");
    enqueueArray("Ican");
    enqueueArray("Dwija");
    enqueueArray("Santhi");
    viewArray();

    cout << "Penghapusan data" << endl;
    dequeueArray();
    viewArray();

    cout << "Penghapusan seluruh data" << endl;
    destroyArray();
    viewArray();

    cout << endl;
    cout << endl;
    cout << endl;

    cout << isFullArray() << endl;
    cout << isEmptyArray() << endl;
    return 0;
}

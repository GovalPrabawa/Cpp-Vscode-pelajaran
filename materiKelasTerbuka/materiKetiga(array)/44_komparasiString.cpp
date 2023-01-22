#include <iostream>
#include <string>

using namespace std;

int main()
{
    // perbandingan string
    string input;
    string nama_rahasia("ucup");

    while (true)
    {
        cout << "Tebak nama : ";
        cin >> input;
        cout << "Nama yang dimasukan adalah: " << input << endl;

        if (input == nama_rahasia)
        {
            cout << "Tebakan anda benar !!!!!" << endl;
            break;
        }
        else
        {
            cout << "Tebakan anda salah !!!!! " << endl;
        }
    }

    cout << "Program Selesai" << endl;

    cin.get();
    return 0;
}
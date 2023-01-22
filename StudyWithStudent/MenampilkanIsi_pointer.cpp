#include <iostream>
#include <array>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string nama = "Goval";
    string *ptrNama = &nama;

    cout << "data sebelum dimanipulasi" << endl;
    cout << nama << endl;
    cout << &nama << endl;
    cout << *ptrNama << endl;

    cout << endl;

    cout << "data setelah dimanipulasi" << endl;

    *ptrNama = "Krishna";
    cout << nama << endl;
    cout << &nama << endl;

    //! latihan masukan data ke string
//     int numbers[6] = {0, 1, 2, 3, 4, 5};

//     for (int i = 0; i < 6; i++)
//     {
//         cout << numbers[i] << " ";
//     }
}

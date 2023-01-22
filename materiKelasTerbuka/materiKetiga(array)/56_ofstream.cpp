// menulis file eksternal
#include <iostream>
#include <fstream> //ofstream, ifstream, fstream

using namespace std;

int main()
{
    ofstream myFile;

    // mode
    // ios::out     = default, operasi output, ;
    // ios::app / append    = menuliskan pad akahir baris
    // ios::trunc   = default, membuat file jika tidak ada, dan kalau ada akan di hapus

    myFile.open("data1.txt", ios::out);
    myFile << "\nmenuliskan pada data1";
    myFile.close();

    myFile.open("data2.txt", ios::trunc);
    myFile << "\nmenuliskan pada data2";
    myFile.close();

    int a = 123456;
    myFile.open("data3.txt", ios::app);
    myFile << "\nmenuliskan pada data3\n";
    myFile << a;
    myFile.close();

    cin.get();
    return 0;
}
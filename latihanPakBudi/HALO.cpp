#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    string kata;

    cout << "Masukan kata HELO \n";
    cin >> kata;

    if (kata == "HELO")
    {
        cout << "Kata yang anda masukan benar !!!" << endl;
    }
    else
    {
        cout << "Kata yang anda masukan salah !!!" << endl;
    }
}
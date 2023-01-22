#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    int nilai;
    string name;
    string grade;
    string keterangan;

    cout << "Masukan nilai : ";
    cin >> nilai;

    if (nilai >= 90)
    {
        grade = "A";
    }
    else if (nilai >= 70)
    {
        grade = "B";
    }
    else if (nilai >= 50)
    {
        grade = "C";
    }
    else if (nilai >= 40)
    {
        grade = "D";
    }
    else
    {
        grade = "E";
    }

    cout << endl;

    if (grade == "A" || grade == "B" || grade == "C")
    {
        keterangan = "Lulus";
    }
    else
    {
        keterangan = "Tidak Lulus";
    }

    cout << "Anda Mendapat Nilai " << grade << " dan Dinyatakan " << keterangan << endl;
}
#include <iostream>

using namespace std;

int main()
{
    // looping untuk array di c++11 keatas
    /*
        for(declarasi variabel : array){
            statement
        }
    */

    int arrayNilai[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int nilai : arrayNilai)
    {
        cout << "Address : " << &nilai << " Nilainya : " << nilai << endl;
        nilai = 1; // tidak merubah array
    }

    cout << endl;
    // manipulasi array dgn menggunakan referensi
    for (int &nilaiRef : arrayNilai)
    {
        nilaiRef *= 2;
    }

    cout << endl;
    for (int &nilaiRef : arrayNilai)
    {
        cout << "Address : " << &nilaiRef << " Nilainya : " << nilaiRef << endl;
    }
    cin.get();
    return 0;
}
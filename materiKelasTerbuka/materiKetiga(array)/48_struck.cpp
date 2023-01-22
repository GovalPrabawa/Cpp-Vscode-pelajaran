#include <iostream>
#include <string>

using namespace std;

// truct : data yg dibentuk oleh beberapa data
// oleh beberapa data

/*
contoh:
    jeruk = buah
    jeruk.warna
    jeruk.berat
    jeruk.berat
    jeruk.rasa
*/
struct buah
{
    string warna;
    float berat;
    int harga;
    string rasa;
};

struct mahasiswa
{
    string nama;
    int NIM;
    bool lulus;
};

// int main()
// {
//     buah apel;
//     buah jeruk;

//     // apel
//     cout << "apel" << endl;
//     apel.warna = "merah";
//     apel.berat = 250.50f;
//     apel.harga = 50000;
//     apel.rasa = "manis";

//     // jeruk
//     jeruk.warna = "orange";
//     jeruk.berat = 200;
//     jeruk.harga = 30000;
//     jeruk.rasa = "asam";

//     cout << "Deskripsi apel" << endl;
//     cout << apel.warna << endl;
//     cout << apel.berat << endl;
//     cout << apel.harga << endl;
//     cout << apel.rasa << endl;

//     cout << endl;
//     cout << "Deskripsi jeruk" << endl;
//     cout << jeruk.warna << endl;
//     cout << jeruk.berat << endl;
//     cout << jeruk.harga << endl;
//     cout << jeruk.rasa << endl;

//     cin.get();
//     return 0;
// }
#include <iostream>
using namespace std;


int main()
{
    // cout << "--------------------------------Program Calculator Sederhana --------------------------------" << endl;
    // int a,b,tambah,kurang,kali,bagi;
    // cout << "Masukan angka pertama : ";
    // cin >> a;
    // cout << "Masukan angka kedua : ";
    // cin >> b;
    // cout<< "--------------------------------"<< endl;

    // int hasil;
    // cout<< "----------------Hasil---------------"<< endl;

    // cout<< "-------------------------------"<< endl;
    // cout << "Penambahan"<< endl;
    // hasil = a + b;
    // cout<< a << " + " << b << " = "<< hasil << endl;
    // cout<< "-------------------------------"<< endl;

    // cout<< "-------------------------------"<< endl;
    // cout << "Pengurangan"<< endl;
    // hasil = a - b;
    // cout<< a << " - " << b << " = "<< hasil << endl;
    // cout<< "-------------------------------"<< endl;

    // cout<< "-------------------------------"<< endl;
    // cout << "Perkalian"<< endl;
    // hasil = a * b;
    // cout<< a << " * " << b << " = "<< hasil << endl;
    // cout<< "-------------------------------"<< endl;


    // cout << "Pembagian" << endl;
    // hasil = a / b;
    // cout<< a << " / " << b << " = "<< hasil << endl;


    // cout<< "-------------------------------"<< endl;
    // cout << "Modulus"<< endl;
    // hasil = a % b;
    // cout<< a << " % " << b << " = "<< hasil << endl;
    // cout<< "-------------------------------"<< endl;


    float a,b,hasil;
    char aritmatika;

    cout << " Selamat Datang di Program Calculator \n \n";
    cout << "Masukan nilai pertama : ";
    cin >> a ;
    cout << "Pilih Operator +,-,/,* :";
    cin >> aritmatika;
    cout << "Masukan nilai kedua : ";
    cin >> b;


    cout << "\n Hasil perhitungan : " ;
    cout << a << " " << aritmatika << " " << b <<"\n";

    if (aritmatika == '+'){
        hasil = a + b;
        cout << " = " << hasil << endl;
    }
    else if (aritmatika == '-'){
        hasil = a - b;
        cout << " = " << hasil << endl;
    }
    else if (aritmatika == '/'){
        hasil = a / b;
        cout << " = " << hasil << endl;
    }
    else if (aritmatika == '*'){
        hasil = a * b;
        cout << " = " << hasil << endl;
    }
    else{
        cout<<"operator anda salah"<< endl;
    }

    
    cin.get();
    return 0;
}

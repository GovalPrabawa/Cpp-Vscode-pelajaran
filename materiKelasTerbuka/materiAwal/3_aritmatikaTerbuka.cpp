#include <iostream>
using namespace std;

// Aritmatika
//  int main(){
//      float a,b,c,d,e,f;
//      cout<<"Masukan Angka pertama : ";
//      cin>>a;
//      cout<<"Masukan Angka kedua : ";
//      cin>>b;

//     cout << "-----------------hasilnya---------------------"<<endl;
//     //operator
//     c = a + b;
//     cout << a << " + " << b << " Hasilnya : "<< c << endl;
//     d = a - b;
//     cout << a << " - " << b << " Hasilnya : "<< d << endl;
//     e = a * b;
//     cout << a << " * " << b << " Hasilnya : "<< e << endl;
//     f = a / b;
//     cout << a << " / " << b << " Hasilnya : "<< f << endl;
//     cin.get();
//     return 0;
// }

// program hitung volume balok

int main()
{
    float a, b, c, d, e, f;
    cout << "Menghitung Volume Balok" << endl;
    cout << "------------------------------------Masukan data yang diperlukan------------------------------------" << endl;
    cout << "Masukan panjang : ";
    cin >> a;
    cout << "Masukan lebar : ";
    cin >> b;
    cout << "Masukan tinggi : ";
    cin >> c;

    cout << "-------------------Data Yang Dimasukan---------------------" << endl;
    cout << " nilai panjang yg anda masukan : " << a << endl;
    cout << " nilai lebar yg anda masukan :  " << b << endl;
    cout << " nilai tinggi yg anda masukan : " << c << endl;

    cout << "------------------------hasil---------------------------" << endl;
    cout << "Volume balok : " << a * b * c << endl;

    cin.get();
    return 0;
}
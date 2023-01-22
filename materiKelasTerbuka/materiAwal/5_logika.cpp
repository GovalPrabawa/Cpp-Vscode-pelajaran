#include<iostream>
using namespace std;

int main(){

    int a = 3;
    int b = 2;

    bool hasil;
    //operator logika : not, and, or.

    // operator not /! 
    cout<<"--------------------------------------------------------------------" << endl;
    cout<<"-------------------------Hasil Operator Not-------------------------"<< endl;
    cout<<"--------------------------------------------------------------------" << endl;
    hasil = !(a == 2); // true
    cout << hasil << endl;

    // operator and / kedua nilai harus bernilai true
    cout<<"--------------------------------------------------------------------" << endl;
    cout<<"-------------------------Hasil Operator and-------------------------"<< endl;
    cout<<"--------------------------------------------------------------------" << endl;
    hasil = (a == 3) and (b == 2);// true and true -> true
    cout << hasil << endl;
    hasil = (a == 4) and (b == 2);// false and true -> false
    cout << hasil << endl;
    hasil = (a == 3) and (b == 4);// true and false -> false
    cout << hasil << endl;
    hasil = (a == 4) and (b == 4);// false and false -> false
    cout << hasil << endl;

    // operator or / salah satu nilai bernilai true maka hasil true
    cout<<"--------------------------------------------------------------------" << endl;
    cout<<"-------------------------Hasil Operator Or-------------------------"<< endl;
    cout<<"--------------------------------------------------------------------" << endl;

    hasil = (a == 3) or (b == 2);// true and true -> true
    cout << hasil << endl;
    hasil = (a == 4) or (b == 2);// false and true -> true
    cout << hasil << endl;
    hasil = (a == 3) or (b == 4);// true and false -> true
    cout << hasil << endl;
    hasil = (a == 4) or (b == 4);// false and false -> false
    cout << hasil << endl;
    
    cin.get();
    return 0;
}
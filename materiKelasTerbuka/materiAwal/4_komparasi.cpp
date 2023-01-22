#include<iostream>
using namespace std;

int main(){

    int a = 2;
    int b = 2;

    bool hasil1, hasil2;

    // komperasi, relation expresiion
       // 1 -> true
       // 0 -> false

    // sebanding ==  // hasilnya 1
    hasil1 =  (a == b);
    cout << hasil1 << endl;

    //tidak sebanding != // hasilnya 0
    hasil2 =  (a!= b);
    cout << hasil2 << endl;

    //kurang dari < // hasilnya 0
    hasil1 =  (a < b);
    cout << hasil1 << endl;

    // lebih dari > // hasilnya 0
    hasil2 =  (a > b);
    cout << hasil2 << endl;

    //kurang darisama dengan <= // hasilnya 0
    hasil1 =  (a <= b);
    cout << hasil1 << endl;

    //lebih dari sama dengan => // hasilnya 0
    hasil2 =  (a >= b);
    cout << hasil2 << endl;



    cin.get();
    return 0;
}
#include <iostream>
#define phi 3.14

using namespace std;

int main(int argc, char const *argv[])
{
    //! pointer
    // variabel biasa
    int myvar = 25;
    int bar;

    // variabel pointer
    int *foo;

    // eksekusi
    foo = &myvar; // foo adalah alamat dari myvar
    // cout << foo << endl;

    bar = myvar; // bar = 25
    // cout << bar << endl;

    bar = *foo; //*foo = 25, bar = 25
    // cout << bar << endl;

    // bar = foo;// bar = foo(1776)
    cout << "myVar      = " << myvar << endl;
    cout << "$myVar     = " << &myvar << endl;
    cout << "bar        = " << bar << endl;
    cout << "foo        = " << foo << endl;
    cout << "*foo       = " << bar << endl;

    cout << endl;
    cout << endl;

    // int abc = 25;
    // int *xyz = &abc;
    // int ijk = abc;

    // cout << abc << endl;
    // cout << xyz << endl;
    // cout << *xyz << endl;
    // cout << ijk << endl;

    // int firstvalue, secondvalue;
    // int *mypointer;

    // mypointer = &firstvalue;
    // cout << mypointer << endl;
    // *mypointer = 10;
    // mypointer = &secondvalue;
    // cout << mypointer << endl;
    // *mypointer = 20;

    // cout << "firstvalue is " << firstvalue << '\n';
    // cout << "secondvalue is " << secondvalue << '\n';

    cout << endl;
    cout << endl;

    int firstValue = 5;
    int secondValue = 15;
    int *p1, *p2;
    cout << "&--->first  " << &firstValue << endl;
    cout << "&--->second " << &secondValue << endl;

    p1 = &firstValue;
    p2 = &secondValue;

    cout << "--->first  " << firstValue << endl;
    cout << "--->second " << secondValue << endl;
    *p1 = 10;
    cout << *p1 << endl;
    *p2 = *p2;
    cout << "--->first  " << firstValue << endl;
    cout << "--->second " << secondValue << endl;

    p1 = p2;
    *p1 = 20;
    cout << "--->second " << secondValue << endl;

    cout << "firstValue is  " << *p1 << endl;
    cout << "secondValue is " << &secondValue << endl;
    cout << "p1 is " << *p1 << endl;

    /*
    p1 = alamat firstvalue
    p2 = alamat secondvalue

    *p1 = 10, firstValue is = 10
    *p2 = *p2 / 15

    p1 = p2/ p1 di set menjadi alamat p2 yaitu secondvalue
    *p1 = 20,
    */

    return 0;
}

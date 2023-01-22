#include <iostream>
using namespace std;

int main()
{
    // assigment
    int a = 10;

    cout << "Nilai awal dari a adalah " << a << endl;
    // assigment operator
    // variabel = variabel operator expression
    //    a.    =.    a.       -        3
    // variabel operator = expression
    //    a.    -=.           3

    a += 9;

    cout << "Nilai akhir dari a  jika ditambah 9 adalah " << a << endl;
    cin.get();
    return 0;
}
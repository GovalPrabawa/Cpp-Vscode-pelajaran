#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Masukan Nilai = ";
    cin >> a;

    switch (a)
    {
    case 5:
        cout << "Benar itu adalah 5 " << endl;
        break;

    default:
        cout << "default" << endl;
    }

    cin.get();
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int kelipatan;
    int hasil;

    cout << "Masukan 100 ";
    cin >> kelipatan;

    for (int hasil = kelipatan; hasil <= 1000; hasil += 100)
    {
        cout << hasil << endl;
    }
}
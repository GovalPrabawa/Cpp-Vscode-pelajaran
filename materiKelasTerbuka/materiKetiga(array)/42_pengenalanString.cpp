#include <iostream>

using namespace std;

int main()
{
    // char kata[5] = {'m', 'o', 'b', 'i', 'l'};

    string kata("Mobil");
    cout << kata << endl;

    string data;
    cout << "Masukan kata: ";
    cin >> data;

    cout << "Data yang dimasukan adalah: " << data << endl;
    cin.get();
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int bil1, bil2, bil3, max, min;
    cout << "Program menentukan angka max dan min\n ";
    cout << "Masukan angka 1 : ";
    cin >> bil1;
    cout << "Masukan angka 2 : ";
    cin >> bil2;
    cout << "Masukan angka 3 : ";
    cin >> bil3;

    if (bil1 > bil2)
    {
        max = bil1;
    }
    else
    {
        max = bil2;
    }

    if (bil3 > max)
    {
        max = bil3;
    }
    cout << max << endl;
}
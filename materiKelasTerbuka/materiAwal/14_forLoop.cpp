#include <iostream>
using namespace std;

int main()
{

    // for (inisialisasi, loop kondisi, increment)
    // {
    //     statement
    // }

    cout << "Awal for loop \n";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    cout << "\n loop 2 \n";
    for (int i = 1; i <= 10; i += 2)
    {
        cout << i << endl;
    }

    // cout << "\n loop 3 \n";
    // for (int i = 1; i >= -10; i--)
    // {
    //     cout << i << endl;
    // }

    // cout << "\n loop 4 \n";
    // int total = 0;
    // for (int i = 1; i <= 10; i++, total += i)
    // {

    //     cout << i << " || " << total << endl;
    // }

    cout << "Akhir dari looping \n";
    cin.get();
    return 0;
}
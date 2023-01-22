#include <iostream>

using namespace std;

int main()
{
    int hitung, i, j;

    hitung = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 4; j > 0; j--)
        {
            hitung = hitung++;
            cout << "1. " << hitung << endl;
            cout << endl;
        }
        cout << endl;
    }
}
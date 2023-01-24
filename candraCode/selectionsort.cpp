#include <iostream>
#include <array>
using namespace std;

intmain()
{
    // kamus
    int const MaxEl = 8;
    int data[MaxEl] = {43, 51, 12, 42, 95, 19, 7, 66};
    int pos;
    int tmp;

    // algoritma selection sort
    for (int a = 0; a < MaxEl - 1; a++)
    {
        pos = a;
        for (int b = a; b < MaxEl; b++)
        {
            if (data[pos] > data[b])
            {
                pos = b;
            }
        }
        tmp = data[a];
        data[a] = data[pos];
        data[pos] = tmp;
    }

    // cetak array
    for (int k = 0; k < MaxEl; k++)
    {
        cout << data[k] << ", ";
    }
    cout << endl;
    return 0;
}

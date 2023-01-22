#include <iostream>

using namespace std;

void printArray(int *ptrArray, int baris, int kolom)
{
    int index = 0;
    for (int i = 0; i < baris; i++)
    {
        cout << "[ ";
        for (int j = 0; j < kolom; j++)
        {
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << "]" << endl;
    }
}

int main()
{
    // array multidimensi
    // array[baris][kolom]
    const int baris = 2;
    const int kolom = 2;
    int arrayMd[baris][kolom] = {1, 2, 3, 4};

    // cout << arrayMd[0][0] << " " << arrayMd[0][1] << endl;
    // cout << arrayMd[1][0] << " " << arrayMd[1][1] << endl;

    printArray(*arrayMd, baris, kolom);

    cout << endl;
    cout << *arrayMd[4] << endl;
    cin.get();
    return 0;
}
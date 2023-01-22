#include <iostream>
const size_t arraySize = 5;

using namespace std;

void sequentialSearch(int angka[arraySize], int key)
{
    bool status = false;
    for (int i = 0; i < arraySize; i++)
    {
        // cek apakah data ketemu
        if (key == angka[i])
        {
            cout << key << " ditemukan pada posisi " << i + 1 << endl;
            status = true;
            break;
        }
    }
    if (status == false)
    {
        cout << key << " tidak ditemukan pada list" << endl;
    }
}

int main(int argc, char const *argv[])
{
    int angka[arraySize] = {1, 4, 3, 6, 5};
    sequentialSearch(angka, 4);
    return 0;
}

#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize = 10;

void printArray(array<int, arraySize> &angka)
{
    cout << "Array: ";
    for (int &a : angka)
    {
        cout << a << " ";
    }
    cout << endl;
}

int main()
{
    array<int, arraySize> angka = {9, 4, 2, 5, 8, 1, 7, 6, 3};

    printArray(angka);

    int angkaCari;
    bool ketemu;

    // sort dulu
    // search _ binary_search

    cout << "mencari angka array di atas: \n";
    cin >> angkaCari;
    sort(angka.begin(), angka.end());
    ketemu = binary_search(angka.begin(), angka.end(), angkaCari);

    if (ketemu)
    {
        cout << "ketemu" << endl;
    }
    else
    {
        cout << "tidak ketemu" << endl;
    }

    cin.get();
    return 0;
}
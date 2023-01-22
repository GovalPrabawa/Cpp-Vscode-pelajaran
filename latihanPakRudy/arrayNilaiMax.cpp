#include <iostream>

using namespace std;

// int main()
// {
//     int max, min, jumlahArray;

//     cout << "Masukan banyak array: ";
//     cin >> jumlahArray;
//     const int total1 = jumlahArray;
//     int array[total1];
//     for (int i = 1; i <= total1; i++)
//     {
//         array[i] = i;

//         if (array[i] == 1)
//         {
//             min = array[i];
//             max = array[i];
//         }
//         else if (max < array[i])
//         {
//             max = array[i];
//         }
//         else if (min > array[i])
//         {
//             min = array[i];
//         }
//         cout << array[i] << endl;
//     }
//     cout << "Nilai Minimum: " << min << endl;
//     cout << "Nilai Maksimum: " << max << endl;
// }
int maxMin(/*int awalArray,*/ int akhirArray)
{
    int i, max, min;
    const int total1 = akhirArray;
    int array[total1];

    for (i = 1; i <= total1; i++)
    {
        array[i] = i;
        // cout << array[i] << endl;
        if (array[i] == 1)
        {
            min = array[i];
            max = array[i];
        }
        else if (min > array[i])
        {
            min = array[i];
        }
        else if (max < array[i])
        {
            max = array[i];
        }
    }
    cout << "Nilai min: " << min << endl;
    cout << "Nilai Max: " << max << endl;
    return max, min;
}

// void cetakArray(int jumlahArray)
// {
//     cout << "Array";
//     cout << maxMin(jumlahArray) << endl;
// }

int main()
{
    int /*awalArray*/ akhirArray;
    cout << "Masukan Akhir Nilai Array: ";
    cin >> akhirArray;

    maxMin(/*awalArray*/ akhirArray);
}

#include <iostream>

using namespace std;

int main()
{
    int Data[15], kacamata = 0, a = 0, b = 0, tmp = 0;

    cout << "=========================" << endl;
    cout << "       Bubble Sort       " << endl;
    cout << "=========================" << endl
         << endl;
    cout << "Masukan Jenis kacamata = ";
    cin >> kacamata;

    cout << endl;

    cout << "Masukan jumlah kacamata : \n";
    for (a = 0; a < kacamata; a++)
    {

        cin >> Data[a];
    }

    for (a = 0; a < kacamata; a++)
    {
        for (b = 0; b < kacamata - a - 1; b++)
        {
            if (Data[b] > Data[b + 1])
            {
                tmp = Data[b];
                Data[b] = Data[b + 1];
                Data[b + 1] = tmp;
            }
        }
    }

    cout << "===================================" << endl;
    cout << "jumlah kacamata yang telah Terurut :" << endl;
    for (a = 0; a < kacamata; a++)
    {
        cout << Data[a] << " ";
    }

    cout << "\n";
    cout << "===================================" << endl;

    return 0;
}

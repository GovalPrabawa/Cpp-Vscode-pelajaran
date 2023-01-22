#include <iostream>

using namespace std;

enum warna
{
    merah,
    putih,
    hitam,
    coklat,
    kuning,
    biru
};

int main()
{
    warna kain;

    kain = hitam;

    if (kain == hitam)
    {
        cout << "Warna kain hitam" << endl;
    }

    cout << kain << endl;

    cin.get();
    return 0;
}
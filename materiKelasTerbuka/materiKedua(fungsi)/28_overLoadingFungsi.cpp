#include <iostream>

using namespace std;

// overloading = menimpa

// basic function
int luas_kotak(int p, int l)
{
    int luas = p * l;
    return luas;
}

// overloading function
int luas_kotak(int sisi)
{
    int luas = sisi * sisi;
    return luas;
}

double luas_kotak(double sisi)
{
    double luas = sisi * sisi;
    return luas;
}

int main()
{
    cout << "Luas kotak 2 x 3: " << luas_kotak(2, 3) << endl;
    cout << "Luas kotak 2 x 2: " << luas_kotak(2) << endl;
    cout << "Luas kotak 2.5  x 2.5 : " << luas_kotak(2.5) << endl;

    cin.get();
    return 0;
}
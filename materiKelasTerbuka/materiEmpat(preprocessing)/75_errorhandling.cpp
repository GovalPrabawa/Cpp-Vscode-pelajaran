#include <iostream>

using namespace std;

// 1. sintaks error
// 2. linking error
// 3. non-error /ketika user dengan sengaja salah memasukan data
// 4. runtime error / error yang terjadi saat berjalannya program

int pembagian(int num, int denum)
{
    if (denum == 0)
    {
        throw "Error: pembagi nol";
    }
    return num / denum;
}

int main()
{
    int a;
    int b;
    int c;

    while (true)
    {
        cout << "num: ";
        cin >> a;
        cout << "denum: ";
        cin >> b;
        try
        {
            c = pembagian(a, b);
        }
        catch (const char *e)
        {
            cout << e << endl;
        }
    }
    cout << "Akhir dari program" << endl;
    cin.get();
    return 0;
}

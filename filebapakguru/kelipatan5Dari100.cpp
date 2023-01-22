#include <iostream>

using namespace std;

int main()
{
    int kelipatan;
    int hasil;

    kelipatan = 5;

    for (hasil = 100; hasil >= kelipatan; hasil -= 5)
    {
        cout << "hasil: " << hasil << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{

    int vision;
    cin >> vision;

    int height;
    cin >> height;
    // your code goes here

    if ((vision == 100) && ((height >= 62) || (height <= 75)))
    {
        cout << "Succes" << endl;
    }
    else
    {
        cout << "Failed" << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    x = 10;
    y = 10;
    z = 19;

    if ((x == y) || (x != z) && (y == z))
    {
        cout << "Heloo";
    }
    else
    {
        cout << "world" << endl;
    }
}
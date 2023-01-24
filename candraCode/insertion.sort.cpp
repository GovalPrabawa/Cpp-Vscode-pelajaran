#include <iostream>
using namespace std;
int main()
{
    int st[16], a, b, c, temp;
    cout << "enter 5 elements only to sort n: \n";
    for (a = 0; a < 5; a++)
    {
        cin >> st[a];
    }
    for (a = 1; a < 5; a++)
    {
        for (b = a; b >= 1; b--)
        {
            if (st[b] < st[b - 1])
            {
                temp = st[b];
                st[b] = st[b - 1];
                st[b - 1] = temp;
            }
            else
                break;
        }
    }
    cout << endl;
    cout << "sorted array n " << endl;
    for (c = 0; c < 5; c++)
    {
        cout << st[c] << " ";
    }
}

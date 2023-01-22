#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i <= 10; i++)
    // {

    //     if (i == 5)
    //     {
    //         continue;
    //         // break;
    //     }
    //     cout << i << endl;
    // }

    int i = 0;
    while (i <= 10)
    {
        i++;

        if (i == 5)
        {
            continue;
            // break;
        }
        cout << i << endl;
        }

    cout << "Akhirnya" << endl;
    cin.get();
    return 0;
}
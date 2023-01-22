#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i % 2 == 0)
            {
                cout << "ini i= " << i << endl;
            }
            else
            {
                cout << "ini j= " << j << " ";
            }
        }
    }
}
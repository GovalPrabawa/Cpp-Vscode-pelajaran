#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    string angka1[6] = {"milk", "pasta", "eggs", "spam", "bread", "rice"};

    for (int i = 0; i < 5; i++)
    {
        if (angka1[i] == "spam")
        {
            continue;
        }
        cout << angka1[i] << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}

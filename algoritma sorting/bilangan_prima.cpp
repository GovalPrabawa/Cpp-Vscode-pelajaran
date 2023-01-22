#include <iostream>

using namespace std;

void is_prima(int x)
{
    for (int i = 2; i <= x; i++)
    {
        if (x % i == 0)
        {
            cout << "Bukan bilangan prima" << endl;
        }
        else
        {
            cout << i << " = Bilangan prima" << endl;
        }
    }
}

int main(int argc, char const *argv[])
{

    is_prima(10);
    return 0;
}

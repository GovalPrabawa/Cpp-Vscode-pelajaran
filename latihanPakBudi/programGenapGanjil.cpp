#include <iostream>

using namespace std;

int main()
{
    int a;
    char more = 'y';

    while (more != 'n')
    {
        cout << "Program menentukan bilangan genap ganjil\n";
        cout << "Masukan nilai : ";
        cin >> a;

        if (a % 2 == 0)
        {
            cout << a << " Merupakan bilangan genap" << endl;
        }
        else
        {
            cout << a << " Merupakan bilangan ganjil" << endl;
        }

        cout << "Continue? (y/n) ";
        cin >> more;
    }
}
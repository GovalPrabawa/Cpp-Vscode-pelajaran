#include <iostream>

using namespace std;

int main()
{
    int num;
    bool isPrime = true;

    cout << "Masukkan sebuah bilangan bulat positif: ";
    cin >> num;

    if (num <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << num << " adalah bilangan prima" << endl;
    }
    else
    {
        cout << num << " bukan bilangan prima" << endl;
    }

    return 0;
}
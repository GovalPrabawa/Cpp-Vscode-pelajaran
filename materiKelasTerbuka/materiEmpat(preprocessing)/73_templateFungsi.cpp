#include <iostream>
#include <string>

using namespace std;

template <typename T>
void print(T data)
{
    cout << data << endl;
}

template <typename T>
int toInt(T data)
{
    return int(data);
}

template <typename T, typename U>
T max(T a, U b)
{
    return (a > b) ? a : b;
}

int main()
{
    print(10);
    print(10.88);
    print('c');

    cout << toInt(20.7567456) << endl;
    cout << max(10, 103.5) << endl;

    print<int>(10.88);
    cout << max<double, int>(10.1, 12) << endl;
    cin.get();
    return 0;
}

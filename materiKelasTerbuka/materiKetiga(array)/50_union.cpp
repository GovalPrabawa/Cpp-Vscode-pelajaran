#include <iostream>

using namespace std;

union dt
{
    int a;
    char b[4];
};

int main()
{
    dt data_union;
    data_union.a = 123456;

    cout << "data a: " << sizeof(data_union.a) << " " << data_union.a << endl;
    cout << "data b: " << data_union.b << endl;

    data_union.b[0] = 'a';
    data_union.b[1] = 'b';
    data_union.b[2] = 'c';
    data_union.b[3] = 'd';

    cout << endl;
    cout << "data a: " << sizeof(data_union.a) << " " << data_union.a << endl;
    cout << "data b: " << data_union.b << endl;
    cin.get();
    return 0;
}

#include <iostream>

using namespace std;

float perkalian(float x, float y)
{
    int a;
    a = x * y;
    return a;
}

int main(int argc, char const *argv[])
{
    cout << perkalian(5.5, 2.5) << endl;
    return 0;
}

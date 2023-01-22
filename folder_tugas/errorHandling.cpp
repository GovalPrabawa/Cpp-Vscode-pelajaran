#include <iostream>
#include <array>

using namespace std;

// 1. sintaks error
// 2. linking error
// 3. non-error /ketika user dengan sengaja salah memasukan data
// 4. runtime error / error yang terjadi saat berjalannya program

int main()
{
    array<int, 5> a = {0, 1, 2, 3, 4};
    cout << a.at(5) << endl;
    cin.get();
    return 0;
}

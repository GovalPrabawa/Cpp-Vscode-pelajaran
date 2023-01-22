// cara kerja  while : start -> syarat -> aksi
// cara kerja doWhile : start -> aksi -> syarat

#include <iostream>

using namespace std;

int main()
{
    // sintaks
    // do{
    //     aksi;
    // }while(syarat);

    int a = 0;
    do
    {

        cout << a << endl;
        cout << "Hore" << endl;
        a++;
    } while (a < 5);

    cin.get();
    return 0;
}
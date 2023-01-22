#include <iostream>

using namespace std;

int main()
{
    string kata("cat");

    // menampilkan data string
    cout << kata << endl;

    // mengambil karakter berdasar index
    cout << "Index ke 0 : " << kata[0] << endl;
    cout << "Index ke 1 : " << kata[1] << endl;
    cout << "Index ke 2 : " << kata[2] << endl;

    // merubah karakter pada index
    kata[1] = 'e';

    // menyambung, concatenation
    string kata2(kata + "ar");
    cout << kata2 << endl;

    // menyambung kata dengan fungsi build in
    string kata3("membahana");
    kata2.append(" " + kata3);
    cout << kata2 << endl;

    //
    string kata4("ahay");
    kata2 += " " + kata4;

    cout << kata2 << endl;

    cin.get();
    return 0;
}
#include <iostream>

using namespace std;

int x = 10; // variabel global

int ambilGlobal()
{
    return x; // mengambil variabel global
}
int x_lokal()
{
    int x = 5; // variabel local scopenya x_lokal
    return x;
}
int main()
{
    cout << "1. Variabel Global : " << x << endl;
    int x = 8; // variabel lokal untuk main
    cout << "2. Variabel lokal main : " << x << endl;
    cout << "3. Variabel ambilGlobal : " << ambilGlobal() << endl;
    cout << "4. Variabel lokal main : " << x << endl;
    cout << "5. Variabel x_lokal : " << x_lokal() << endl;
    cout << "6. Variabel local main : " << x << endl;

    cout << "7. Variabel local main : " << x << endl;
    {
        cout << "8. Variabel local main : " << x << endl;
        // block scope
        int x = 1;
        cout << "9. Variabel local block : " << x << endl;
    }

    cout << "10. Variabel global : " << ::x << endl;
    cout << "10. Variabel local main : " << x << endl;

    cin.get();
    return 0;
}
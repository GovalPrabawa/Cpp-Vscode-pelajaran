#include <iostream>
#include <cmath>

using namespace std;

/*
library cmath : referensi www.cppreference.com
ceil(x)      <- pembulatan ke atas
cos(x)       <- cosinus
exp(x)       <- exponent
fabs(x)      <- nilai absolut dalam float
floor(x)     <- pembulatan ke bawah
fmod(x)      <- modulus dalam float
log(x)       <- logaritma dengan basis natural
log10(x)     <- logaritma dengan basis 10
sin(x)       <- sinus
sqrt(x)      <- akar kuadrat
tan (x)      <- tangen
*/

int main()
{
    int x;

    cout << "Menghitung akar dari x: ";
    cin >> x;

    double y = sqrt(x);
    cout << "Akarnya adalah: " << y << endl;
    cin.get();
    return 0;
}
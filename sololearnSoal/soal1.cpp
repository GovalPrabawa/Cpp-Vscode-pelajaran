#include <iostream>
using namespace std;

int main()
{
    int purchaseAmount = 0;
    double totalPrice;
    int totalDiscound;

    // your code goes here
    int i = 0;
    do
    {
        cin >> purchaseAmount;
        totalPrice = purchaseAmount * 0.15;
        cout << totalPrice << endl;
        i++;
    } while (i < 3);

    return 0;
}
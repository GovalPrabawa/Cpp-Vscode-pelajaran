#include <iostream>
using namespace std;
int main()
{
    int a, arr[5], num, first, last, middle;
    cout << "Enter 5 Elements (in ascending order): ";
    for (a = 0; a < 5; a++)
        cin >> arr[a];
    cout << "\nEnter Element to be Search: ";
    cin >> num;
    first = 0;
    last = 9;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (arr[middle] < num)
            first = middle + 1;
        else if (arr[middle] == num)
        {
            cout << "\nThe number, " << num << " Data ditemukan pada posisi " << middle + 1;
            break;
        }
        else
            last = middle - 1;
        middle = (first + last) / 2;
    }
    if (first > last)
        cout << "\nThe number, " << num << " is not found in given Array";
    cout << endl;
    return 0;
}
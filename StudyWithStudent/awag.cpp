#include <iostream>
using namespace std;
const int arraySize = 5;

int array_same(int array1[arraySize], int array2[arraySize])
{
    int result;
    for (int i = 0; i < arraySize; i++)
    {
        if (array1[i] == array2[i])
        {
            result = array1[i];
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int array_one[arraySize] = {1, 3, 2, 4, 3};
    int array_two[arraySize] = {0, 9, 8, 5, 3};

    cout << array_same(array_one, array_two) << endl;
    return 0;
}

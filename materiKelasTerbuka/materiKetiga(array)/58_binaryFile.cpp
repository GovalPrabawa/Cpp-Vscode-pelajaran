#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream myFile;
    int number = 125;
    myFile.open("data.bin", ios::out | ios::binary);

    myFile.write(reinterpret_cast<char *>(&number), sizeof(number));

    myFile.close();

    cin.get();
    return 0;
}
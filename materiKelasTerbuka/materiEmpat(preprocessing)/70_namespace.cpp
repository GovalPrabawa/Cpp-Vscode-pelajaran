#include <iostream>
#include "otong.h"

void fungsi2()
{
    std::cout << "ini adalah fungsi biasa" << std::endl;
}

int main()
{
    fungsi2();
    otong::fungsi();
    otong::cout(100);
    std::cout << otong::b << std::endl;
    std::cin.get();
    return 0;
}
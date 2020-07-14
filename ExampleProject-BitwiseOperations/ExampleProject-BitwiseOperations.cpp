// ExampleProject-BitwiseOperations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <algorithm>
#include <iostream>

std::string ToBin(unsigned int n, int min_digits = 0)
{
    std::string bin_str;
    for (int count = 0; n != 0 || count < min_digits; n >>= 1, count++)
    {
        bin_str.push_back(bool(n & 0b1) ? '1' : '0');
    }
    std::reverse(bin_str.begin(), bin_str.end());
    return bin_str;
}

int main()
{
    //Intermediate C++ Game Programming DirectX [Bitwise Operations] Tutorial 23

    const int a = 0b10100101;
    const int b = 0b11110000;

    std::cout << ToBin(a) << " <- a" << std::endl;
    std::cout << ToBin(b) << " <- b" << std::endl;
    std::cout << ToBin(a | b) << " <- a | b" << std::endl;
    std::cout << ToBin(a & b) << " <- a & b" << std::endl;

    const int c = 0b00001001;
    std::cout << ToBin(c,8) << " <- c" << std::endl;
    std::cout << ToBin(c << 4, 8) << " <- C << 4" << std::endl;

    std::cin.get();
    return 0;
}
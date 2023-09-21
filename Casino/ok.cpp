#include <iostream>

int main() // The main() function is required in a C++ program
{
    int num = 1;
    int number;
    int total = 0;
    while (num <= 5)
    {
        std::cin >> number; // You need to add the reference to std:: as "cin <<" is a part of the std namespace
        total += number;
        num++;
        std::cout << total << std::endl; // You need to add the reference to std:: as "cout <<" and "endl <<" is a part of the std namespace
    }

    return 0;
}
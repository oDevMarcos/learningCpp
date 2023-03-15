#include <iostream>

int main()
{
    int width;          // Define a variable
    width = 5;          // Copy assignment
    width = 7.5;          // Change value stored in variable width to 7
    std::cout << width << "\n";


    // 6 ways to initializer a variable

    // int a;              // No initializer (Default)
    // int b = 5;          // Copy initialization
    // int c (6);          // Direct initialization

    // // List initiliazation methods (C++11)

    int d {7};          // Direct list
    // int e = {8};        // Copy list
    // int f {};           // Value initialization
    std::cout << d << "\n";

    // Explicit initialization

    // int k {0};
    // std::cout << k;

    // int j {};
    // std::cout << "Enteder J:";
    // std::cin >> j;
    // std::cout << "J is: " << j << "\n";

    int v{5}, z{5};

    std::cout << v << "\n";
    std::cout << z << "\n";
    

    // Enused initialized variables

    [[maybe_unused]] int l {7}; // his attribute tells the compiler to expect that the variable may not be used
    std::cout << "Hello guuuyss!\n";
}
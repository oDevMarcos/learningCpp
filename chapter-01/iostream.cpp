#include <iostream> // To acess std::cout 

int main()
{
    // std::cout << "Hello, world!\n"; // << insertion operator to send text to the console
    // std::cout << 5 << '\n';          // Or numbers too

    // // Outputed a variable

    // int age {18};
    // std::cout << age << '\n';
    
    // // Text and the value of a variable in the same statement:

    // std::cout << "My age is: " << age << '\n';

    // // std::endl

    // std::cout << "Hello, my name is Marcos, and will break this line." << std::endl; // std::endl break line...

    // // \n

    // int year {2004};
    // std::cout << "I born in " << year << '\n';
    // // or
    // std::cout << "balblalblalball break line now!\n";
    

    // Using std::cin for read input by keyboard

    // std::cout << "Type preferred number: ";
    // int preferredNumber {};
    // std::cin >> preferredNumber;
    // std::cout << "Your preferred number is: " << preferredNumber << '\n';

    // // output more than one bit of text in a single line
    // std::cout << "Enter two numbers separated by a space: ";
    // int a {};
    // int b {};
    // std::cin >> a >> b;
    // std::cout << "First digit: " << a << " Second digit: " << b << '\n';

    std::cout << "Type a digit: ";
    int x {};
    std::cin >> x;
    std::cout << "x = " << x << '\n';
    

    return 0;
}
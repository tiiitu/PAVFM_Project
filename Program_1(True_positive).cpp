// C++ program to demonstrate array of string
// using STL array
#include <array>
#include <iostream>
#include <string>

int main()
{
    // Initialize array
    std::array<std::string, 4> colour{ "Blue", "Red",
                                    "Orange", "Yellow" };

    // Printing Strings stored in array
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";

    return 0;
}

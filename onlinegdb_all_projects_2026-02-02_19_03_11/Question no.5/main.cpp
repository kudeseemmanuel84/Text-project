/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>

// Function to find the longest string in a list of strings
std::string longestString(const std::vector<std::string>& strings) {
    std::string longest;

    for (const std::string& str : strings) {
        if (str.length() > longest.length()) {
            longest = str; // Update longest string
        }
    }

    return longest; // Return the longest string found
}

int main() {
    std::vector<std::string> strings;
    std::string input;
    int count;

    // Input the number of strings
    std::cout << "Enter the number of strings: ";
    std::cin >> count;
    std::cin.ignore(); // To ignore the newline character left in the buffer

    // Input strings from the user
    std::cout << "Enter " << count << " strings (press Enter after each):" << std::endl;
    for (int i = 0; i < count; i++) {
        std::getline(std::cin, input);
        strings.push_back(input);
    }

    // Find the longest string
    std::string longest = longestString(strings);

    // Output the result
    std::cout << "The longest string is: " << longest << std::endl;

    return 0;
}

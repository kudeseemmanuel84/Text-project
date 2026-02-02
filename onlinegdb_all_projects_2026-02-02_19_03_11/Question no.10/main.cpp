/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>

// Function to reverse a list of strings
std::vector<std::string> reverseStrings(const std::vector<std::string>& strings) {
    std::vector<std::string> reversedStrings; // Vector to hold reversed strings

    for (const std::string& str : strings) {
        std::string reversed(str.rbegin(), str.rend()); // Reverse the string
        reversedStrings.push_back(reversed); // Add reversed string to the result
    }

    return reversedStrings; // Return the list of reversed strings
}

int main() {
    std::vector<std::string> strings;
    std::string input;
    int count;

    // Input the number of strings
    std::cout << "Enter the number of strings: ";
    std::cin >> count;
    std::cin.ignore(); // Ignore the newline character left in the buffer

    // Input strings from the user
    std::cout << "Enter " << count << " strings (press Enter after each):" << std::endl;
    for (int i = 0; i < count; i++) {
        std::getline(std::cin, input);
        strings.push_back(input);
    }

    // Reverse the strings
    std::vector<std::string> reversedStrings = reverseStrings(strings);

    // Output the result
    std::cout << "The list of reversed strings is:" << std::endl;
    for (const std::string& str : reversedStrings) {
        std::cout << str << std::endl;
    }

    return 0;
}

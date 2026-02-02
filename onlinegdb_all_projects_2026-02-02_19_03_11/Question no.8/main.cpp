/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Function to sort a list of strings in alphabetical order
std::vector<std::string> sortStrings(const std::vector<std::string>& strings) {
    std::vector<std::string> sortedStrings = strings; // Copy the input list

    // Sort the copied list
    std::sort(sortedStrings.begin(), sortedStrings.end());

    return sortedStrings; // Return the sorted list
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

    // Sort the strings
    std::vector<std::string> sortedStrings = sortStrings(strings);

    // Output the result
    std::cout << "The sorted list of strings is:" << std::endl;
    for (const std::string& str : sortedStrings) {
        std::cout << str << std::endl;
    }

    return 0;
}
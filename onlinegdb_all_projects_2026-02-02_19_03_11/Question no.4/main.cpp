/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

// Function to remove vowels from a sentence
std::string removeVowels(const std::string& sentence) {
    std::string result;
    for (char ch : sentence) {
        // Checking if the character is not a vowel (case insensitive)
        if (!(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
              ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            result += ch; // Append non-vowel characters to the result
        }
    }
    return result;
}

int main() {
    std::string input;

    // Input from the user
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);

    // Remove vowels
    std::string modifiedSentence = removeVowels(input);

    // Output the result
    std::cout << "The sentence without vowels is: " << modifiedSentence << std::endl;

    return 0;
}


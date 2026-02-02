/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

// Function to count the number of vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    for (char ch : str) {
        // Checking if the character is a vowel (case insensitive)
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;

    // Input from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Count the vowels
    int vowelCount = countVowels(input);

    // Output the result
    std::cout << "The number of vowels in the string is: " << vowelCount << std::endl;

    return 0;
}

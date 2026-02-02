/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

// Function to remove even numbers from a list of integers
std::vector<int> removeEvenNumbers(const std::vector<int>& numbers) {
    std::vector<int> result;

    for (int num : numbers) {
        if (num % 2 != 0) { // Check if the number is odd
            result.push_back(num); // Add odd numbers to the result
        }
    }

    return result; // Return the new list with even numbers removed
}

int main() {
    std::vector<int> nums;
    int input, count;

    // Input the number of integers
    std::cout << "Enter the number of integers: ";
    std::cin >> count;

    // Input integers from the user
    std::cout << "Enter " << count << " integers: ";
    for (int i = 0; i < count; i++) {
        std::cin >> input;
        nums.push_back(input);
    }

    // Remove even numbers
    std::vector<int> oddNumbers = removeEvenNumbers(nums);

    // Output the result
    std::cout << "The list with even numbers removed is: ";
    for (int num : oddNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


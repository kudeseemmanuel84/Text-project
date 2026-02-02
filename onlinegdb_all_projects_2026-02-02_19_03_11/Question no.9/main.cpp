/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

// Function to calculate the sum of a list of integers
int sumOfIntegers(const std::vector<int>& numbers) {
    int sum = 0; // Initialize sum
    for (int num : numbers) {
        sum += num; // Add each number to sum
    }
    return sum; // Return the total sum
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

    // Calculate the sum
    int totalSum = sumOfIntegers(nums);

    // Output the result
    std::cout << "The sum of the list is: " << totalSum << std::endl;

    return 0;
}

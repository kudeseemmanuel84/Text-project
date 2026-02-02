/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

// Function to calculate the median of a list of integers
double median(std::vector<int>& numbers) {
    // Sort the list first
    std::sort(numbers.begin(), numbers.end());

    size_t size = numbers.size();
    
    // Check if the list is empty
    if (size == 0) {
        throw std::invalid_argument("List is empty.");
    }

    // If the size is even, return the average of the two middle numbers
    if (size % 2 == 0) {
        return (numbers[size / 2 - 1] + numbers[size / 2]) / 2.0;
    } else {
        // If the size is odd, return the middle number
        return numbers[size / 2];
    }
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

    try {
        // Calculate the median
        double med = median(nums);

        // Output the result
        std::cout << "The median of the list is: " << med << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
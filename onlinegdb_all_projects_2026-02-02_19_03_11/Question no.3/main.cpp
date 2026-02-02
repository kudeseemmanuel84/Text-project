/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

// Function to calculate the average of a list of integers
double average(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        return 0.0; // Return 0 for an empty list
    }

    double sum = 0;
    for (int num : numbers) {
        sum += num;
    }

    return sum / numbers.size(); // Return the average
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

    /
/ Calculate the average
    double avg = average(nums);

    // Output the result
    std::cout << "The average of the list is: " << avg << std::endl;

    return 0;
}
// A program that reads a positive number and then computees the logarithm of that value to the base 2 


#include <iostream>
#include <cmath>  // Include the cmath library for the logarithm function
using namespace std;
int main() {
       double number;

    // Prompt the user to enter a positive number
    cout << "Enter a positive number: ";
    cin >> number;

    // Check if the number is positive
    if (number > 0) {
        // Calculate the logarithm to the base 2
        double logarithm_base_2 = log2(number);

        // Output the result
        cout << "Logarithm to the base 2 of " << number << " is: " << logarithm_base_2 << std::endl;
    } else {
        cout << "Please enter a positive number." << std::endl;
    }

    return 0;
}


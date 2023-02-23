#include <iostream>

// Define a function that returns the nth power of 2
constexpr int nth_power_of_2(int n) {
    return 1 << n;
}

int main() {
    // Declare a variable as a constexpr
    constexpr int num_bits = 8;
    
    // Call the constexpr function at compile time
    constexpr int power_of_2 = nth_power_of_2(5);
    
    // Print the results
    std::cout << "The " << num_bits << " bits can represent " << power_of_2 << " values." << std::endl;

    return 0;
}

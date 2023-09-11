#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));
    
    // Generate a random number between INT_MIN and INT_MAX
    int n = std::rand();

    // Determine if n is positive, zero, or negative
    if (n > 0) {
        std::cout << "The number " << n << " is positive" << std::endl;
    } else if (n == 0) {
        std::cout << "The number " << n << " is zero" << std::endl;
    } else {
        std::cout << "The number " << n << " is negative" << std::endl;
    }

    return 0;
}

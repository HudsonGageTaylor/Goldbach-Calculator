#include <iostream>
#include <cmath>

bool isPrime(uint64_t n) {
    if (n <= 1) return false;
    for (uint64_t i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void goldbach(uint64_t evenNumber) {

    for (uint64_t i = 2; i <= evenNumber / 2; ++i) {
        uint64_t j = evenNumber - i;
        if (isPrime(i) && isPrime(j)) {
            std::cout << evenNumber << " = " << i << " + " << j << " | GoldBach = true" << std::endl;
            return;
        }
    }

    std::cout << "No prime found on number " << evenNumber << "  | GoldBach = false" << std::endl;

    exit(0);
}

int main() {
    uint64_t number = 4;
    
    while (true) {

        goldbach(number);

        number += 2;
    }

    return 0;
}

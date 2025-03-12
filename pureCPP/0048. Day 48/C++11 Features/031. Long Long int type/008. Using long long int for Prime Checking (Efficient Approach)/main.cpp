#include <iostream>
#include <cmath>

bool isPrime(long long int n) {
    if (n < 2) return false;
    for (long long int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long int number = 9999999967LL; // Large prime number
    std::cout << number << " is " << (isPrime(number) ? "Prime" : "Not Prime") << std::endl;
    return 0;
}

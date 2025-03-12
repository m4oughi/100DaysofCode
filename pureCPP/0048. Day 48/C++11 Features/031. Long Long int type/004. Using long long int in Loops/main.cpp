#include <iostream>

int main() {
    long long int sum = 0;
    for (long long int i = 1; i <= 1000000LL; ++i) {
        sum += i;
    }
    std::cout << "Sum of first 1,000,000 numbers: " << sum << std::endl;
    return 0;
}

#include <iostream>
#include <thread>

int main() {
    std::thread t([](int n) {
        std::function<int(int)> factorial = [&](int n) -> int {
            return (n == 1) ? 1 : n * factorial(n - 1);
        };
        std::cout << "Factorial of " << n << " is " << factorial(n) << std::endl;
    }, 5);
    
    t.join();
    return 0;
}

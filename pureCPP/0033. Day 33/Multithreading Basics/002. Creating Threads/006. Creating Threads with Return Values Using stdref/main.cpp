#include <iostream>
#include <thread>

void calculateSum(int a, int b, int& result) {
    result = a + b;
}

int main() {
    int sum;
    std::thread t1(calculateSum, 5, 10, std::ref(sum)); // Use std::ref to pass by reference
    t1.join();
    
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

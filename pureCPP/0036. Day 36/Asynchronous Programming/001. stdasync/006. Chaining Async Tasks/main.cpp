#include <iostream>
#include <future>

int step1(int x) {
    return x * 2;
}

int step2(int y) {
    return y + 3;
}

int main() {
    std::future<int> result1 = std::async(step1, 5);
    std::future<int> result2 = std::async(step2, result1.get());  // Use result of step1 in step2
    std::cout << "Final Result: " << result2.get() << std::endl;
    return 0;
}

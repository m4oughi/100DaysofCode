#include <iostream>
#include <thread>

void addNumbers(int a, int b, int& result) {
    result = a + b;
}

int main() {
    int result;
    std::thread t1(addNumbers, 5, 10, std::ref(result));
    t1.join();

    std::cout << "Result: " << result << std::endl;
    return 0;
}

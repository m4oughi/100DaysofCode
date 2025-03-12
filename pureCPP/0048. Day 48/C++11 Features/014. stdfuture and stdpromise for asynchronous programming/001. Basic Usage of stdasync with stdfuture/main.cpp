#include <iostream>
#include <future>

int computeSquare(int x) {
    return x * x;
}

int main() {
    std::future<int> result = std::async(computeSquare, 5);
    
    std::cout << "Square of 5 is: " << result.get() << "\n";
    return 0;
}

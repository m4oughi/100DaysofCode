#include <iostream>
#include <future>

int main() {
    auto asyncLambda = std::async([]() {
        return 100;
    });
    
    std::cout << "Async lambda result: " << asyncLambda.get() << std::endl;
    return 0;
}

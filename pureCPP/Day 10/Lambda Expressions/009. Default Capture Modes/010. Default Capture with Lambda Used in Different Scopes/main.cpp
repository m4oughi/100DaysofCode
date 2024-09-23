#include <iostream>
#include <functional>

int main() {
    int x = 10, y = 20;

    std::function<void()> lambda;
    {
        lambda = [=]() {
            std::cout << "Captured x: " << x << ", y: " << y << std::endl;
        };
    }
    
    x = 30;
    y = 40;
    lambda(); // Outputs: Captured x: 10, y: 20
    return 0;
}

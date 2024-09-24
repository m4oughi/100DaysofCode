#include <iostream>

class Resource {
public:
    Resource() = default;
    
    // Move constructor using reference collapsing
    template<typename T>
    Resource(T&& param) {
        value = std::forward<T>(param);
    }

    void showValue() const { std::cout << value << std::endl; }

private:
    int value;
};

int main() {
    int x = 140;
    Resource r1(x);       // L-value, copy happens
    r1.showValue();       // Output: 140

    Resource r2(150);     // R-value, move happens
    r2.showValue();       // Output: 150

    return 0;
}
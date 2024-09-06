#include <iostream>

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    int& operator++() {  // Pre-increment operator returning reference
        ++value;
        return value;
    }

    int& operator--() {  // Pre-decrement operator returning reference
        --value;
        return value;
    }
};

int main() {
    Number num(5);
    int &aliasIncrement = ++num;  // aliasIncrement refers to num.value
    int &aliasDecrement = --num;  // aliasDecrement also refers to num.value

    aliasIncrement = 10;  // Modify num.value through aliasIncrement
    std::cout << aliasDecrement << std::endl;  // Output: 10 (aliasDecrement reflects the change)

    return 0;
}
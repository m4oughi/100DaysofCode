#include <iostream>
#include <array>
#include <functional>

int getValue(int index) {
    return index * index; // Function to provide values
}

int main() {
    std::array<int, 5> arr;
    
    // Using a regular function
    for (std::size_t i = 0; i < arr.size(); ++i) {
        arr[i] = getValue(i);
    }

    // Using a lambda function
    std::array<int, 5> arrLambda;
    auto lambda = [](int index) { return index * 2; };
    for (std::size_t i = 0; i < arrLambda.size(); ++i) {
        arrLambda[i] = lambda(i);
    }
}

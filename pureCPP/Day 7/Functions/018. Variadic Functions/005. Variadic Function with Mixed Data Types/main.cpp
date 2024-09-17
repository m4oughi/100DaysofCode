#include <iostream>

template<typename T>
void printElement(T arg) {
    std::cout << arg << std::endl;
}

template<typename... Args>
void printElements(Args... args) {
    (printElement(args), ...);  // Fold expression to call printElement for each argument
}

int main() {
    printElements(1, 2.5, "Hello", 'A', true);
    
    return 0;
}

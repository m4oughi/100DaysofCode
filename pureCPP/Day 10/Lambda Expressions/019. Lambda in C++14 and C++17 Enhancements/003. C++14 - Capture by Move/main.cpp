#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    // C++14 allows capturing by move using std::move
    auto print = [str = std::move(str)]() {
        std::cout << "Captured string: " << str << std::endl;
    };

    print(); // Outputs: Captured string: Hello
    // str is now empty
    std::cout << "Original string after move: " << str << std::endl; // Outputs: (an empty string)
    return 0;
}

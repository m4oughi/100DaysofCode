#include <iostream>
#include <concepts>
using namespace std;

// Concept to check if a type is default constructible
template<typename T>
concept DefaultConstructible = requires { T(); };

template<DefaultConstructible T>
class Container {
public:
    T value;
    Container() : value() {}  // Default constructor
};

int main() {
    Container<int> c;  // Works: int is default constructible
    // Container<int&> cRef;  // Compilation error: references are not default constructible
    return 0;
}

#include <iostream>

enum class Action { Add, Subtract, Multiply };

template<typename T>
T apply(Action act, T a, T b) {
    switch (act) {
        case Action::Add:      return a + b;
        case Action::Subtract: return a - b;
        case Action::Multiply: return a * b;
    }
    return T{};
}

int main() {
    std::cout << "10 + 5 = " << apply(Action::Add, 10, 5) << "\n";
    std::cout << "10 * 5 = " << apply(Action::Multiply, 10, 5) << "\n";
}

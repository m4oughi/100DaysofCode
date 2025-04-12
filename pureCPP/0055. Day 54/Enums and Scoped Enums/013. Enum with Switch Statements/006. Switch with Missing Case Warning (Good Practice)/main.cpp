#include <iostream>

enum class Level { Low, Medium, High };

void display(Level l) {
    switch (l) {
        case Level::Low: std::cout << "Low\n"; break;
        case Level::Medium: std::cout << "Medium\n"; break;
        // Forgot `High`
    }
}

int main() {
    display(Level::High); // Might not behave as expected
}

#include <iostream>

struct Printer {
    enum class Mode { Draft, Normal, High };

    void print(Mode m) {
        if (m == Mode::High) std::cout << "High quality print\n";
    }
};

int main() {
    Printer p;
    p.print(Printer::Mode::High);
}

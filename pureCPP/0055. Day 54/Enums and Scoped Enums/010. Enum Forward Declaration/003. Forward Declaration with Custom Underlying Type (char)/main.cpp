#include <iostream>

enum class Signal : char;

enum class Signal : char {
    Start = 'S',
    Stop = 'T'
};

void display(Signal s) {
    std::cout << "Signal: " << static_cast<char>(s) << '\n';
}

int main() {
    display(Signal::Start);
}

#include <iostream>

namespace Audio {
    void play() {
        std::cout << "Playing audio..." << std::endl;
    }

    void stop() {
        std::cout << "Stopping audio..." << std::endl;
    }
}

namespace A = Audio;  // Alias for the Audio namespace

int main() {
    A::play();  // Using the alias to access the play function
    A::stop();  // Using the alias to access the stop function
    return 0;
}

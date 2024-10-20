#include <iostream>

namespace Audio {
    void playSound() {
        std::cout << "Playing sound..." << std::endl;
    }
}

// Extending the Audio namespace with new library functionalities
namespace Audio {
    void stopSound() {
        std::cout << "Stopping sound..." << std::endl;
    }

    void adjustVolume(int level) {
        std::cout << "Adjusting volume to " << level << std::endl;
    }
}

int main() {
    Audio::playSound();       // Access original functionality
    Audio::stopSound();       // Access newly added stopSound function
    Audio::adjustVolume(50);  // Adjust volume using the extended function
    return 0;
}

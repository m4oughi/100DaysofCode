#include <iostream>

namespace Audio {
    inline namespace Version1 {
        void play(int trackNumber) {
            std::cout << "Playing track " << trackNumber << " in Version 1" << std::endl;
        }
    }

    namespace Version2 {
        void play(double volume) {
            std::cout << "Playing audio at volume " << volume << " in Version 2" << std::endl;
        }
    }
}

int main() {
    Audio::play(5);  // Calls Version1's overloaded play (int)

    using Audio::Version2::play;
    play(0.8);  // Calls Version2's play (double)
    return 0;
}

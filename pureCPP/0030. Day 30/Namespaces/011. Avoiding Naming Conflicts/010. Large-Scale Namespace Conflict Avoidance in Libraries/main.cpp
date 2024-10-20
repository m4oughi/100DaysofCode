#include <iostream>

namespace LibraryA {
    void load() {
        std::cout << "Loading assets from Library A" << std::endl;
    }
}

namespace LibraryB {
    void load() {
        std::cout << "Loading assets from Library B" << std::endl;
    }
}

namespace Project {
    void run() {
        LibraryA::load();  // Explicit call to LibraryA's load function
        LibraryB::load();  // Explicit call to LibraryB's load function
    }
}

int main() {
    Project::run();  // Avoids conflict by using fully qualified names
    return 0;
}

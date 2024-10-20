#include <iostream>

namespace Project {
    namespace ModuleA {
        void process() {
            std::cout << "Processing in ModuleA" << std::endl;
        }
    }

    namespace ModuleB {
        void process() {
            std::cout << "Processing in ModuleB" << std::endl;
        }
    }
}

void process() {  // Global function
    std::cout << "Global process function" << std::endl;
}

int main() {
    process();                    // Calls global process function
    Project::ModuleA::process();   // Calls Project::ModuleA::process
    Project::ModuleB::process();   // Calls Project::ModuleB::process
    return 0;
}

#include <iostream>

namespace Tools {
    void hammer() {
        std::cout << "Using a hammer!" << std::endl;
    }

    void wrench() {
        std::cout << "Using a wrench!" << std::endl;
    }
}

int main() {
    {
        using namespace Tools;
        hammer();  // `using` applies here
        wrench();
    }

    // wrench();  // Error: wrench not in scope anymore
    return 0;
}

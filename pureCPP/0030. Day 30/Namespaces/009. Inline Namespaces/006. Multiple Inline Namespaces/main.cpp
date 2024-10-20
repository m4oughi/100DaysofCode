#include <iostream>

namespace Data {
    inline namespace Version1 {
        void process() {
            std::cout << "Processing data using Version 1" << std::endl;
        }
    }

    inline namespace Version2 {
        void process() {
            std::cout << "Processing data using Version 2" << std::endl;
        }
    }
}

int main() {
    Data::process();  // Calls the latest inline version (Version 2)
    return 0;
}

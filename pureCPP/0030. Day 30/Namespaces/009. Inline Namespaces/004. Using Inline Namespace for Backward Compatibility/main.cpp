#include <iostream>

namespace API {
    inline namespace Version1 {
        void getData() {
            std::cout << "Fetching data from API Version 1" << std::endl;
        }
    }

    namespace Version2 {
        void getData() {
            std::cout << "Fetching data from API Version 2" << std::endl;
        }
    }
}

int main() {
    API::getData();  // Calls Version1 by default (inline version)
    API::Version2::getData();  // Calls the newer Version2
    return 0;
}

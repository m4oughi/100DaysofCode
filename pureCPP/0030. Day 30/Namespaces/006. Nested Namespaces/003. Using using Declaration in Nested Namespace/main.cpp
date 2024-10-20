#include <iostream>

namespace Electronics {
    namespace Devices {
        void showDevice() {
            std::cout << "Displaying device information" << std::endl;
        }
    }
}

int main() {
    using Electronics::Devices::showDevice;  // Import function from nested namespace

    showDevice();  // Directly use the function without full namespace qualification
    return 0;
}

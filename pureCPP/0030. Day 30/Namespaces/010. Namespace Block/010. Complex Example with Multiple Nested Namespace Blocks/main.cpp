#include <iostream>

namespace Company {
    namespace Software {
        class App {
        public:
            void run() {
                std::cout << "Running software application..." << std::endl;
            }
        };
    }

    namespace Hardware {
        class Device {
        public:
            void start() {
                std::cout << "Starting hardware device..." << std::endl;
            }
        };
    }
}

int main() {
    Company::Software::App app;
    app.run();

    Company::Hardware::Device device;
    device.start();

    return 0;
}

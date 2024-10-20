#include <iostream>

namespace App {
    namespace Network {
        void connect() {
            std::cout << "Connecting to network..." << std::endl;
        }

        namespace HTTP {
            void request() {
                std::cout << "Sending HTTP request..." << std::endl;
            }
        }
    }

    namespace UI {
        void render() {
            std::cout << "Rendering UI..." << std::endl;
        }
    }
}

int main() {
    App::Network::connect();  // Encapsulated access to network functionalities
    App::Network::HTTP::request();  // Access nested HTTP namespace
    App::UI::render();  // Access UI functionality
    return 0;
}

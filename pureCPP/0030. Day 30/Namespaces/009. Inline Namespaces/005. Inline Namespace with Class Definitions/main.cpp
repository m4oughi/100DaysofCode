#include <iostream>

namespace Network {
    inline namespace Version1 {
        class Connection {
        public:
            void connect() {
                std::cout << "Connecting with Version 1" << std::endl;
            }
        };
    }

    namespace Version2 {
        class Connection {
        public:
            void connect() {
                std::cout << "Connecting with Version 2" << std::endl;
            }
        };
    }
}

int main() {
    Network::Connection connection1;
    connection1.connect();  // Calls Version1's connect (inline)

    Network::Version2::Connection connection2;
    connection2.connect();  // Calls Version2's connect explicitly
    return 0;
}

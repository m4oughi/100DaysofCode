#include <iostream>

namespace Alpha {
    void display() {
        std::cout << "Alpha's display function" << std::endl;
    }
}

namespace Beta {
    void display() {
        std::cout << "Beta's display function" << std::endl;
    }
}

int main() {
    using Alpha::display;  // Importing only Alpha's display function

    display();  // Calls Alpha's display function
    // Beta::display();  // Can still access Beta's display with full qualification
    return 0;
}

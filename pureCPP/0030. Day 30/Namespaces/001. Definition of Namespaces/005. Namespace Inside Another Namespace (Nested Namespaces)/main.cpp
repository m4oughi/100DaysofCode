#include <iostream>

namespace Company {
    namespace HR {
        void display() {
            std::cout << "HR Department" << std::endl;
        }
    }

    namespace IT {
        void display() {
            std::cout << "IT Department" << std::endl;
        }
    }
}

int main() {
    Company::HR::display();
    Company::IT::display();
    return 0;
}

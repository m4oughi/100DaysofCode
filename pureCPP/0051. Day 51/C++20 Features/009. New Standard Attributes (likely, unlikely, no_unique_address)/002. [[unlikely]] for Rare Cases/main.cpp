#include <iostream>

void processRequest(int code) {
    if (code == 200) [[likely]] {
        std::cout << "Processing successful response\n";
    } else if (code == 500) [[unlikely]] {
        std::cout << "Handling server error (rare case)\n";
    }
}

int main() {
    processRequest(200); // Fast path
    processRequest(500); // Rare error case
}

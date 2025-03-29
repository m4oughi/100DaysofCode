#include <iostream>

void handleRequest(int status) {
    switch (status) {
        case 200: [[likely]]
            std::cout << "OK\n";
            break;
        case 404: [[unlikely]]
            std::cout << "Not Found\n";
            break;
        case 500: [[unlikely]]
            std::cout << "Internal Server Error\n";
            break;
        default:
            std::cout << "Unknown status\n";
    }
}

int main() {
    handleRequest(200); // Optimized
    handleRequest(404); // Rarely used
}

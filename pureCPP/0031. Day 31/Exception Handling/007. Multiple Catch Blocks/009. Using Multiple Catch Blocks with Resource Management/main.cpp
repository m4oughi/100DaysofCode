#include <iostream>
#include <fstream>
#include <stdexcept>

void processFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Cannot open file");
    }
    // Process file
}

int main() {
    try {
        processFile("non_existent.txt");
    } catch (const std::invalid_argument& e) {
        std::cout << "Caught invalid argument: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime error: " << e.what() << std::endl;
    } catch (...) {
        std::cout << "Caught unknown exception" << std::endl;
    }
    return 0;
}

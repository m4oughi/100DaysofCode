#include <iostream>
#include <stdexcept>

enum ErrorCode {
    SUCCESS,
    FILE_NOT_FOUND,
    UNKNOWN_ERROR
};

ErrorCode processFile() {
    try {
        throw std::runtime_error("File not found");
    } catch (const std::runtime_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
        return FILE_NOT_FOUND;
    } catch (...) {
        std::cout << "Caught unknown exception" << std::endl;
        return UNKNOWN_ERROR;
    }
    return SUCCESS;
}

int main() {
    ErrorCode result = processFile();
    if (result == FILE_NOT_FOUND) {
        std::cout << "Handling file not found error." << std::endl;
    } else if (result == UNKNOWN_ERROR) {
        std::cout << "Handling unknown error." << std::endl;
    }
    return 0;
}

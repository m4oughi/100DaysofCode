#include <iostream>
#include <exception>

class FileNotFoundException : public std::exception {
public:
    const char* what() const noexcept override {
        return "File not found!";
    }
};

class PermissionDeniedException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Permission denied!";
    }
};

int main() {
    try {
        throw PermissionDeniedException();
    } catch (const FileNotFoundException& e) {
        std::cout << "Caught FileNotFoundException: " << e.what() << std::endl;
    } catch (const PermissionDeniedException& e) {
        std::cout << "Caught PermissionDeniedException: " << e.what() << std::endl;
    } catch (...) {
        std::cout << "Caught unknown exception!" << std::endl;
    }

    return 0;
}

#include <iostream>
#include <exception>
#include <string>
#include <sstream>

class DatabaseException : public std::exception {
private:
    std::string message;
    int errorCode;
public:
    DatabaseException(const std::string& msg, int code) : message(msg), errorCode(code) {}

    const char* what() const noexcept override {
        std::ostringstream oss;
        oss << message << " (Error Code: " << errorCode << ")";
        return oss.str().c_str();
    }
};

void queryDatabase() {
    throw DatabaseException("Failed to connect to the database", 500);
}

int main() {
    try {
        queryDatabase();
    } catch (const DatabaseException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}

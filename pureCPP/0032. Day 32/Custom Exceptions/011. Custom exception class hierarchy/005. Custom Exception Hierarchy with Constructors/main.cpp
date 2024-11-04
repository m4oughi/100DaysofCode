#include <iostream>
#include <exception>
#include <string>

class AppException : public std::exception {
protected:
    std::string errorMsg;
public:
    AppException(const std::string& msg) : errorMsg(msg) {}
    const char* what() const noexcept override {
        return errorMsg.c_str();
    }
};

class DatabaseException : public AppException {
public:
    DatabaseException(const std::string& msg) : AppException("Database error: " + msg) {}
};

class QueryException : public DatabaseException {
public:
    QueryException(const std::string& msg) : DatabaseException("Query failed: " + msg) {}
};

int main() {
    try {
        throw QueryException("Invalid syntax");
    } catch (const AppException& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}

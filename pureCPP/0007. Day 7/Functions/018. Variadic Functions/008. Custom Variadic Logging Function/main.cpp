#include <iostream>
#include <fstream>
#include <sstream>

template<typename... Args>
void logToFile(const std::string& filename, Args... args) {
    std::ofstream file(filename, std::ios::app);
    std::ostringstream oss;
    (oss << ... << args);  // Fold expression to combine all arguments
    file << oss.str() << std::endl;
    file.close();
}

int main() {
    logToFile("log.txt", "Error code: ", 404, ", Message: ", "Not Found");
    logToFile("log.txt", "User: ", "JohnDoe", ", Status: ", "Logged In");

    return 0;
}

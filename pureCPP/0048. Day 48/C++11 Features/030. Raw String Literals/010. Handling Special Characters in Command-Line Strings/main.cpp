#include <iostream>

int main() {
    std::string command = R"(grep "error" C:\Logs\app.log | sort > output.txt)";
    
    std::cout << "Shell Command: " << command << std::endl;
    return 0;
}

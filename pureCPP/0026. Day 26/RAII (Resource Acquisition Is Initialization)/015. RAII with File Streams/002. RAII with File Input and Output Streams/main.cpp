#include <iostream>
#include <fstream>
#include <string>

int main() {
    {
        std::ofstream outFile("output.txt");
        std::ifstream inFile("input.txt");
        
        if (inFile.is_open() && outFile.is_open()) {
            std::string line;
            while (std::getline(inFile, line)) {
                outFile << line << std::endl;
            }
        }
        // Both `inFile` and `outFile` are automatically closed here.
    }
    std::cout << "Input and output file streams closed." << std::endl;
}

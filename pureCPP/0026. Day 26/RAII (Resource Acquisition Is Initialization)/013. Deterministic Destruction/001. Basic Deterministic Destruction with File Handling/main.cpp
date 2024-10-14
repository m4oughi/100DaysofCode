#include <iostream>
#include <fstream>

int main() {
    {
        std::ofstream file("example.txt");
        file << "Writing some content." << std::endl;
        // The file is closed here when 'file' goes out of scope.
    }  // File closed at this point (deterministically destroyed)
    std::cout << "File has been closed." << std::endl;
}

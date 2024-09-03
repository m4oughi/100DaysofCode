#include <iostream>

struct Data
{
    int values[3];
    char letter;
};

int main() {
    Data data = {{1, 2, 3}, 'A'}; // Aggregate initialization

    // Print the values
    for (int i = 0; i < 3; ++i)
    {
        std::cout << data.values[i] << " "; // Outputs: 1 2 3
    }
    std::cout << data.letter << std::endl; // Outputs: A
}
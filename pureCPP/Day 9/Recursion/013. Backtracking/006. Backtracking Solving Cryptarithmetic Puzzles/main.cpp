#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool isValidSolution(const unordered_map<char, int>& letterToDigit, const string& equation) {
    // Check if the equation is valid with the current mapping
    return true;  // Placeholder for actual implementation
}

bool solveCryptarithm(string equation, unordered_map<char, int>& letterToDigit, string letters, int index) {
    if (index == letters.size()) {
        return isValidSolution(letterToDigit, equation);
    }

    char letter = letters[index];
    for (int digit = 0; digit <= 9; digit++) {
        if (letterToDigit.find(letter) == letterToDigit.end()) {
            letterToDigit[letter] = digit;
            if (solveCryptarithm(equation, letterToDigit, letters, index + 1))
                return true;
            letterToDigit.erase(letter);  // Backtrack
        }
    }

    return false;
}

int main() {
    string equation = "send + more = money";
    unordered_map<char, int> letterToDigit;
    string letters = "sendmoremoney";  // Unique letters in the puzzle

    if (solveCryptarithm(equation, letterToDigit, letters, 0)) {
        cout << "Solution found:" << endl;
        for (const auto& pair : letterToDigit)
            cout << pair.first << " -> " << pair.second << endl;
    } else {
        cout << "No solution exists" << endl;
    }

    return 0;
}

#include <iostream>
#include <stack>
#include <sstream>

int main() {
    std::string sentence = "Hello world from stack";
    std::stack<std::string> s;
    std::istringstream iss(sentence);
    std::string word;

    while (iss >> word) {
        s.push(word);
    }

    std::cout << "Reversed sentence: ";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;

    return 0;
}

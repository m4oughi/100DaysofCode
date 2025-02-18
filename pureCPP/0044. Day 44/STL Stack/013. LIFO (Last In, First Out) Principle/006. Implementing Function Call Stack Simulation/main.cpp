#include <iostream>
#include <stack>

void functionCallStack(std::stack<std::string>& callStack, const std::string& functionName) {
    callStack.push(functionName);
    std::cout << "Entering function: " << functionName << std::endl;

    if (functionName == "main") {
        functionCallStack(callStack, "funcA");
        functionCallStack(callStack, "funcB");
    }

    std::cout << "Exiting function: " << callStack.top() << std::endl;
    callStack.pop();
}

int main() {
    std::stack<std::string> callStack;
    functionCallStack(callStack, "main");
    return 0;
}

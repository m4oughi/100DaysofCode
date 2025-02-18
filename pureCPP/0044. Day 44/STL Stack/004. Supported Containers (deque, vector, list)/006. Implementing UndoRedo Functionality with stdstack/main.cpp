#include <iostream>
#include <stack>

class Editor {
    std::stack<std::string, std::deque<std::string>> undoStack;
    std::stack<std::string, std::deque<std::string>> redoStack;
    std::string currentText;

public:
    void type(const std::string& text) {
        undoStack.push(currentText);
        currentText = text;
        while (!redoStack.empty()) redoStack.pop(); // Clear redo history
    }

    void undo() {
        if (!undoStack.empty()) {
            redoStack.push(currentText);
            currentText = undoStack.top();
            undoStack.pop();
        }
    }

    void redo() {
        if (!redoStack.empty()) {
            undoStack.push(currentText);
            currentText = redoStack.top();
            redoStack.pop();
        }
    }

    void show() {
        std::cout << "Current Text: " << currentText << std::endl;
    }
};

int main() {
    Editor editor;
    editor.type("Hello");
    editor.show();

    editor.type("Hello, World!");
    editor.show();

    editor.undo();
    editor.show();

    editor.redo();
    editor.show();

    return 0;
}

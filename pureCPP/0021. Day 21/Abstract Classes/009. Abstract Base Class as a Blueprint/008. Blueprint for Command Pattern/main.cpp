#include <iostream>
#include <vector>
using namespace std;

// Abstract Base Class (Blueprint)
class Command {
public:
    virtual void execute() = 0;
};

class LightOnCommand : public Command {
public:
    void execute() override {
        cout << "Turning the light on." << endl;
    }
};

class LightOffCommand : public Command {
public:
    void execute() override {
        cout << "Turning the light off." << endl;
    }
};

class RemoteControl {
private:
    vector<Command*> commands;
public:
    void addCommand(Command* cmd) {
        commands.push_back(cmd);
    }

    void executeCommands() {
        for (auto cmd : commands) {
            cmd->execute();
        }
    }
};

int main() {
    RemoteControl remote;
    LightOnCommand lightOn;
    LightOffCommand lightOff;

    remote.addCommand(&lightOn);
    remote.addCommand(&lightOff);

    remote.executeCommands();  // Outputs "Turning the light on." and "Turning the light off."

    return 0;
}

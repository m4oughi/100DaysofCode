#include <iostream>
using namespace std;

// Abstract Base Class
class Game {
public:
    // Template method defining the structure of the algorithm
    void play() {
        start();
        playTurn();
        end();
    }

    // Common behavior encapsulated in the base class
    void start() {
        cout << "Game is starting..." << endl;
    }

    // Pure virtual functions that must be implemented by derived classes
    virtual void playTurn() = 0;
    
    // Common behavior in the base class
    void end() {
        cout << "Game has ended." << endl;
    }
};

// Derived Class 1
class Chess : public Game {
public:
    void playTurn() override {
        cout << "Playing a turn in Chess." << endl;
    }
};

// Derived Class 2
class Football : public Game {
public:
    void playTurn() override {
        cout << "Playing a turn in Football." << endl;
    }
};

int main() {
    Chess chess;
    Football football;

    chess.play();     // Outputs: start, playTurn for Chess, end
    football.play();  // Outputs: start, playTurn for Football, end

    return 0;
}

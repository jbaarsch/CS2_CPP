// DiceRoller.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Die {
public:
    void roll();
    int getFace();
    string to_string();
    Die();
    Die(int sides);
private:
    const int SIDES;
    int faceValue;
};

int main()
{
    Die abilityDice[3];
    for (Die die : abilityDice) {
        die = *(new Die());
    }
}


Die::Die() : SIDES(6) {
    srand(time(0));
    roll();
}

Die::Die(int sides) : SIDES(sides) {
    srand(time(0));
    roll();
}

void Die::roll() {
    faceValue = rand() % SIDES + 1;
}

int Die::getFace() {
    return faceValue;
}

string Die::to_string() {
    return "A " + std::to_string(SIDES) + "-sided Die showing a " + std::to_string(faceValue);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

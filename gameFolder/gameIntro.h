#include <iostream>
#include "playerAttribute.h"
using namespace std;
void startGame(string name);
int playerAttribute(int &strength, int &health, int &luck, int &totalPoints);

void gameIntro()
{
    string playerReady{};
    cout << "=====================Welcome======================"
         << "\n Are you ready to begin your adventure ( press Y to start ) \n";
    cin >> playerReady;

    if (playerReady == "y")
    {

        string name{};

        cout << "\n Great - Please enter your Player name... test.. ";
        cin >> name;
        startGame(name);
    }
    else
    {
        gameIntro();
    }
}

void startGame(string name)
{
    // set up of attributes
    int strength{};
    int health{};
    int luck{};
    int totalPoints{5};

    cout << "\n Welcome " << name << "\n ========== Please build your character ============= \n";
    cout << "you have FIVE (5) points to spend in THREE key areas : ";
    cout << "\n -Strength \n -Health \n -Luck \n Please select carefully, as your choices will effect gameplay \n";

    playerAttribute(strength, health, luck, totalPoints);
    // if loop for remaining points if left over
 // need WHILE LOOP not IF
    if (totalPoints > 0 || totalPoints < 0)
    {
        cout << "please try again and pay attention";
        strength=0;
        health=0;
        luck=0;
        totalPoints=5;
        playerAttribute(strength, health, luck, totalPoints);
    }
    cout << "\n Is this correct? ... (-Y for YES-)" << totalPoints;

    // if loop to re enter if incorrect
}

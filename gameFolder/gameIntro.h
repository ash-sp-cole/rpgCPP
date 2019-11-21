#include <iostream>
#include "playerAttribute.h"
using namespace std;
void startGame(string name);
int playerAttribute(int &strength, int &health, int &luck, int &totalPoints);
int reset(int &strength, int &health, int &luck, int &totalPoints);

void clear()
{
    cout << string(20, '\n');
}
void gameIntro()
{
    string playerReady{};
    cout << R"(
           /\                                                        /\
          |  |                                                      |  |
         /----\                                                    /----\
        [______]             Welcome to YOUR adventure            [______]
         |    |         _____                        _____         |    |
         |[]  |        [     ]                      [     ]        |  []|
         |    |       [_______][ ][ ][ ][][ ][ ][ ][_______]       |    |
         |    [ ][ ][ ]|     |  ,----------------,  |     |[ ][ ][ ]    |
         |             |     |/'    ____..____    '\|     |             |
          \  []        |     |    /'    ||    '\    |     |        []  /
           |      []   |     |   |o     ||     o|   |     |  []       |
           |           |  _  |   |     _||_     |   |  _  |           |
           |   []      | (_) |   |    (_||_)    |   | (_) |       []  |
           |           |     |   |     (||)     |   |     |           |
           |           |     |   |      ||      |   |     |           |
         /''           |     |   |o     ||     o|   |     |           ''\
        [_____________[_______]--'------''------'--[_______]_____________])"
         << endl;
    cout << "\n      >>------>    to begin your adventure ( press Y to start )    >>------>  \n";
    cin >> playerReady;
    clear();
    if (playerReady == "y")
    {

        string name{};

        cout << "\n"
             << R"(
                          o
                            /\
                           /::\
                          /::::\
            ,a_a         /\::::/\
           {/ ''\_      /\ \::/\ \
           {\ ,_oo)    /\ \ \/\ \ \
           {/  (_^____/  \ \ \ \ \ \           Please ENTER YOUR NAME .....
 .=.      {/ \___)))*)    \ \ \ \ \/
(.=.`\   {/   /=;  ~/      \ \ \ \/
    \ `\{/(   \/\  /        \ \ \/
     \  `. `\  ) )           \ \/
      \    // /_/_            \/
       '==''---))))
        )" << endl;

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
    clear();
    // set up of attributes
    int strength{};
    int health{};
    int luck{};
    int totalPoints{5};
    string confirm{};

    cout << "\n"
         << R"(
   __________________________________________________________________________________
 / \                                     Welcome                                      \.
|   |                ========== Please build your character =============              |.
 \_ |                you have FIVE (5) points to spend in THREE key areas :            |.
    |                                                                                  |.
    |                                   -Strength                                      |.
    |                                                                                  |.
    |                                   -Health                                        |.
    |                                                                                  |.
    |                                   -Luck                                          |.
    |                                                                                  |.
    |               Please select carefully, as your choices will effect gameplay      |.
    |                                                                                  |.
    |                                                                                  |.
    |                                                                                  |.
    |   _______________________________________________________________________________|
    |  /                                                                              /.
    \_/______________________________________________________________________________/.
)" << endl;

    playerAttribute(strength, health, luck, totalPoints);

    while (totalPoints > 0 || totalPoints < 0)
    {
        reset(strength, health, luck, totalPoints);
        playerAttribute(strength, health, luck, totalPoints);
    }

    cout << "\n Is this correct? ... (-Y for YES-) ";

    cin >> confirm;

    if (confirm == "y")
    {
        // GAME START ==================================
    }
    else
    {

        reset(strength, health, luck, totalPoints);
        playerAttribute(strength, health, luck, totalPoints);
    }
}

int reset(int &strength, int &health, int &luck, int &totalPoints)
{

    cout << "\n please try again and pay attention \n"
         << endl;
    strength = 0;
    health = 0;
    luck = 0;
    totalPoints = 5;

    return strength, health, luck, totalPoints;
}

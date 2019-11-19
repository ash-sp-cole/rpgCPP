#include <iostream>
using namespace std;
void startGame(string name);

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

    cout << "\n Welcome " << name;
}

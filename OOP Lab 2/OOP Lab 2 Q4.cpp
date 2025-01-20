#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class HittingGame {
private:
    int yourTeamPlayers;
    int yourTeamHits;
    int enemyTeamHits;

public:
    HittingGame();
    void playGame();
    void displayResult();
};

HittingGame::HittingGame() {
	srand(time(0));
    yourTeamPlayers = rand() % 4 + 1;
    yourTeamHits = 0;
    enemyTeamHits = 0;
}

void HittingGame::playGame() {
    cout << "Total No. Of Players in your team: " << yourTeamPlayers << endl;

    for (int i = 0; i < yourTeamPlayers; ++i) {
        int number1 = rand() % 5 ;
        int number2 = rand() % 5 ;

        cout << "\nPair of numbers:" << endl;
        cout << "Number1: " << number1 << endl;
        cout << "Number2: " << number2 << endl;

        if (number1 == number2) {
            cout << "Enemy got hit by your team!" << endl;
            yourTeamHits++;
        } else {
            cout << "You got hit by the enemy team!" << endl;
            enemyTeamHits++;
        }
    }

    displayResult();
}

void HittingGame::displayResult() {
    cout << "\nGame Over!" << endl;
    if (yourTeamHits > enemyTeamHits) {
        cout << "You won!" << endl;
    } else if (yourTeamHits < enemyTeamHits) {
        cout << "You lost!" << endl;
    } else {
        cout << "It's a draw!" << endl;
    }
}

int main() {
    HittingGame game;
    game.playGame();

    return 0;
}

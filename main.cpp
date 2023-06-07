#include <iostream>
using namespace std;


int main() {

    srand(time(0));
    string userGuess;
    char playGame;
    char playAgain;

    cout << "Would you like to play a game? y/n ";
    cin >> playGame;

    while (true) {



        if (playGame == 'y' || playGame == 'Y') {

            cout << "Welcome to rock, paper, scissors, lizard, spock!" << endl;
            cout << "You vs Computer!" << endl;
            cout << "Would you like to use rock, paper, scissors, lizard or spock?" << endl;
            cin >> userGuess;
            int compGuess = rand() % 5 + 1;


            int userchoice;
            if (userGuess == "Rock" || userGuess == "rock") {
                userchoice = 1;
            } else if (userGuess == "Paper" || userGuess == "paper") {
                userchoice = 2;
            } else if (userGuess == "Scissors" || userGuess == "scissors") {
                userchoice = 3;
            } else if (userGuess == "Lizard" || userGuess == "lizard") {
                userchoice = 4;
            } else if (userGuess == "Spock" || userGuess == "spock") {
                userchoice = 5;
            } else {
                cout << "Please enter a valid choice\n";
            }


            if (compGuess == 1) {
                if (userchoice == 1) {
                    cout << "It is a tie!";
                } else if (userchoice == 2) {
                    cout << "You Win! Paper beats rock!\n";
                } else if (userchoice == 3) {
                    cout << "You lose! Rock beats Scissors!\n";
                } else if (userchoice == 4) {
                    cout << "You lose! Rock smashes lizard!\n";
                } else if (userchoice == 5) {
                    cout << "You win! Spock vaporizes rock!\n";
                }
            }
            if (compGuess == 2) {
                if (userchoice == 1) {
                    cout << "You lose! Paper beats rock!\n";
                } else if (userchoice == 2) {
                    cout << "It is a tie!\n";
                } else if (userchoice == 3) {
                    cout << "You win! Scissors beats paper!\n";
                } else if (userchoice == 4) {
                    cout << "You win! Lizard eats paper!\n";
                } else if (userchoice == 5) {
                    cout << "You lose! Paper disproves spock!\n";
                }
            }
            if (compGuess == 3) {
                if (userchoice == 1) {
                    cout << "You win! Rock beats scissors!\n";
                } else if (userchoice == 2) {
                    cout << "You lose! Scissors beats paper\n";
                } else if (userchoice == 3) {
                    cout << "It is a tie!\n";
                } else if (userchoice == 4) {
                    cout << "You lose! Scissors decapitates lizard!\n";
                } else if (userchoice == 5) {
                    cout << "You win! Spock smashes scissors!\n";
                }
            }
            if (compGuess == 4) {
                if (userchoice == 1) {
                    cout << "You win! Rock crushes lizard!\n";
                } else if (userchoice == 2) {
                    cout << "You lose! Lizard eats paper!\n";
                } else if (userchoice == 3) {
                    cout << "You win! Scissors decapitates lizard!\n";
                } else if (userchoice == 4) {
                    cout << "It is a tie!\n";
                } else if (userchoice == 5) {
                    cout << "You lose! Lizard poisons spock!\n";
                }
            }
            if (compGuess == 5) {
                if (userchoice == 1) {
                    cout << "You lose! Spock vaporizes rock!\n";
                } else if (userchoice == 2) {
                    cout << "You win! Paper disproves spock!\n";
                } else if (userchoice == 3) {
                    cout << "You lose! Scissors are smashed by spock!\n";
                } else if (userchoice == 4) {
                    cout << "You win! Lizard poisons spock!\n";
                } else if (userchoice == 5) {
                    cout << "It is a tie!\n";

                }
            }
        } else{
            cout << "Booooooooooooo you suck";
            return 0;
        }
        cout << "Would you like to play again? y/n ";
        cin >> playAgain;
        if (playAgain == 'n' || playAgain == 'N') {
            cout << "Thanks for playing!\n";
            return 0;
        }
    }
}
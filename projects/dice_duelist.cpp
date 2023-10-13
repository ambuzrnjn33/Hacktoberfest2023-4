#include <iostream>
#include <cstdlib>
#include <ctime>

int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(NULL));

    int playerScore = 0;
    int computerScore = 0;
    char choice;

    std::cout << "Welcome to Dice Duelist!" << std::endl;

    do {
        int playerRoll = rollDice();
        int computerRoll = rollDice();

        std::cout << "You rolled a " << playerRoll << "!" << std::endl;
        std::cout << "Computer rolled a " << computerRoll << "!" << std::endl;

        if (playerRoll > computerRoll) {
            std::cout << "You win this round!" << std::endl;
            playerScore++;
        } else if (playerRoll < computerRoll) {
            std::cout << "Computer wins this round!" << std::endl;
            computerScore++;
        } else {
            std::cout << "It's a tie! Re-rolling..." << std::endl;
            continue;
        }

        std::cout << "Current Score: You " << playerScore << " - " << computerScore << " Computer" << std::endl;
        std::cout << "Would you like to play again? (y/n) ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Final Score: You " << playerScore << " - " << computerScore << " Computer" << std::endl;

    if (playerScore > computerScore) {
        std::cout << "You are the ultimate Dice Duelist! Congratulations!" << std::endl;
    } else if (playerScore < computerScore) {
        std::cout << "Computer is the Dice Duelist champion! Better luck next time." << std::endl;
    } else {
        std::cout << "It's a draw! Both are equally skilled Dice Duelists!" << std::endl;
    }

    return 0;
}

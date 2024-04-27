#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice is: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "The computer choose: ";
    showChoice(computer);

    chooseWinner(player, computer);


    return 0;
}

char getUserChoice() {
    char player;
    std::cout << "Rock-Paper-Scissors Game! \n";

    do {
    std::cout << "Choose One Of the Following\n";
    std::cout << "--------------------------\n";
    std::cout << " 'r' - Rock\n";
    std::cout << " 'p' - Paper\n";
    std::cout << " 's' - Scissors\n";
    std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;

}

char getComputerChoice() {
    srand(time(NULL));

    int num = (rand() % 3)+1;

    switch(num) {
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }
    return 0;
}

void showChoice(char choice) {
    switch(choice) {
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
    }

}

void chooseWinner(char player, char computer) {

    switch(player){
        case 'r': 
            if(computer == 'r') {
                std::cout << "It's a tie\n";
            } else if (computer == 'p') {
                std::cout << "You lost \n";
            } else {
                std::cout << "YOU WIN :)\n";
            }
            break;
        case 'p':
            if(computer == 'p') {
                std::cout << "It's a tie\n";
            } else if (computer == 's') {
                std::cout << "You lost \n";
            } else {
                std::cout << "YOU WIN :)\n";
            }
            break;
        case 's':
            if(computer == 's') {
                std::cout << "It's a tie\n";
            } else if (computer == 'r') {
                std::cout << "You lost \n";
            } else {
                std::cout << "YOU WIN :)\n";
            }
            break;
    }

}
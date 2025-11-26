#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed random number generator
    srand(time(0));
    
    int userChoice, computerChoice;
    char playAgain;
    
    do {
        // Display menu
        cout << "\n=== Rock Paper Scissors ===" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> userChoice;
        
        // Validate input
        if (userChoice < 1 || userChoice > 3) {
            cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
            continue;
        }
        
        // Generate computer's choice
        computerChoice = (rand() % 3) + 1;
        
        // Display choices
        cout << "\nYou chose: ";
        if (userChoice == 1) cout << "Rock";
        else if (userChoice == 2) cout << "Paper";
        else cout << "Scissors";
        
        cout << "\nComputer chose: ";
        if (computerChoice == 1) cout << "Rock";
        else if (computerChoice == 2) cout << "Paper";
        else cout << "Scissors";
        cout << endl;
        
        // Determine winner
        if (userChoice == computerChoice) {
            cout << "\nIt's a tie!" << endl;
        }
        else if ((userChoice == 1 && computerChoice == 3) ||
                 (userChoice == 2 && computerChoice == 1) ||
                 (userChoice == 3 && computerChoice == 2)) {
            cout << "\nYou win!" << endl;
        }
        else {
            cout << "\nComputer wins!" << endl;
        }
        
        // Ask to play again
        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;
        
    } while (playAgain == 'y' || playAgain == 'Y');
    
    cout << "\nThanks for playing!" << endl;
    
    return 0;
}

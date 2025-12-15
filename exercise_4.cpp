// Exercise 4: Game Mechanics (Player Health System + Collecting Coins)
// Demonstrates: Functions with references, if/else statements, vectors, loops
// Use case: Game health mechanics and collectible system

#include <iostream>
#include <vector>
using namespace std;

// Function to apply damage to player health
// Using reference (&) to modify the original health value
void ApplyDamage(int& health, int damage) {
    health -= damage;
    
    if (health < 0) {
        health = 0; // Clamp health to 0
    }
}

int main() {
    // ========== Part 1: Player Health System ==========
    int playerHealth = 100;
    int damageAmount;
    
    cout << "=== Player Health System ===" << endl;
    cout << "Starting HP: " << playerHealth << endl << endl;
    
    cout << "Enter damage amount: ";
    cin >> damageAmount;
    
    // Apply damage using our function
    ApplyDamage(playerHealth, damageAmount);
    
    // Check player status
    if (playerHealth <= 0) {
        cout << "Player Dead" << endl;
    } else {
        cout << "Remaining HP: " << playerHealth << endl;
    }
    
    cout << endl;
    
    // ========== Part 2: Collecting Coins ==========
    // Coin positions in the level
    vector<int> coinPositions = {3, 14, 7, 20, 9};
    int playerPosition;
    bool coinFound = false;
    
    cout << "=== Coin Collection System ===" << endl;
    cout << "Coins are located at positions: ";
    for (int pos : coinPositions) {
        cout << pos << " ";
    }
    cout << endl << endl;
    
    cout << "Enter player position: ";
    cin >> playerPosition;
    
    // Check if there's a coin at the player's position
    for (int i = 0; i < coinPositions.size(); i++) {
        if (coinPositions[i] == playerPosition) {
            coinFound = true;
            break;
        }
    }
    
    // Display result
    if (coinFound) {
        cout << "Coin Collected!" << endl;
    } else {
        cout << "No Coin" << endl;
    }
    
    return 0;
}

#include "player.hpp"
#include "enemy.hpp"
#include "headers.hpp"
#include "health.hpp"

void health_manager() {}

int main() {
  int choice;
  int damage;
  // Initial dialog and UI
  printf("Look out! An enemy approaches...\n");
  while (true) {
    printf("What would you like to do?\n");
    printf("  [0] Attack\n");
    printf("  [1] Defend\n");
    printf("  [2] Grab\n");
    // Player chooses to attack, defend, or grab
    Player isaiah;
    cin >> choice;
    sleep(1);
    // Enemy chooses a random move between attack, defend, or grab
    Enemy enemy;
    enemy.random_choice();
    sleep(1);
  }
  return 0;
}
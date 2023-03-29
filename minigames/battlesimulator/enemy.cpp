#include "enemy.hpp"
#include "headers.hpp"

Enemy::Enemy() {
  health = 100;
  attack = false;
  defend = false;
  grab = false;
}

void Enemy::random_choice() {
  int choice = rand() % 3;
  if (choice == 0) {
    attack = true;
    cout << "The enemy attacked and dealt 10 damage!\n";
  }
  if (choice == 1) {
    defend = true;
    cout << "The enemy defended!\n";
  }
  if (choice == 2) {
    grab = true;
    cout << "The enemy grabbed! The enemy's defense was canceled!\n";
  }
}
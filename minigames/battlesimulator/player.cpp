#include "player.hpp";
#include "headers.hpp"

Player::Player() {
  health = 100;
  attack = false;
  defend = false;
  grab = false;
}

void Player::input_choice(int choice) {
  if (choice == 0) {
    attack = true;
    cout << "You attacked and dealt 10 damage!\n";
  }
  if (choice == 1) {
    defend = true;
    cout << "You defended! The next attack will deal 10 less damage!\n";
  }
  if (choice == 2) {
    grab = true;
    cout << "You grabbed! The enemy's defense was canceled!\n";
  }
}

void Player::take_damage(int damage) { health -= damage; }
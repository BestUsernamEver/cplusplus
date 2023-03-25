#include <cstdio>
#include <iostream>
using namespace std;
// 53E was here lol
class Player {
public:
  bool attack;
  bool defend;
  // luck based move
  bool roll;
  bool pass;
  Player() {
    attack = false;
    defend = false;
    roll = false;
    pass = false;
  }
  void inputChoice(int choice) {
    if (choice == 1) {
      attack = true;
      printf("u selected attack [1]\n");
    }
    if (choice == 2) {
      defend = true;
      printf("u selected defend [2]\n");
    }
    if (choice == 3) {
      roll = true;
      printf("u selected roll [3]\n");
    }
    if (choice == 4) {
      pass = true;
      printf("u selected pass [4]\n");
    }
  }
};

class Enemy {
public:
  // health taken after player action
  int reaction;
  
};

int main() {
  int choice;
  cout << "Enter a number between 1 and 4:" << endl;
  cin >> choice;
  Player isaiah;
  isaiah.inputChoice(choice);
}
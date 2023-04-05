#pragma once

class Player {
public:
  Player();
  int health;
  bool attack;
  bool defend;
  bool grab;
  void input_choice(int choice);
  void take_damage(int damage);
};
#include "headers.hpp"

class Enemy {
public:
  Enemy();
  int health;
  bool attack;
  bool defend;
  bool grab;
  void random_choice();
};
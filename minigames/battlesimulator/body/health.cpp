#include "health.hpp"
#include "headers.hpp"

healthBar = "||||||||||";
damage = 30;

void editHealthBar(int damage) {
    int latestTick = healthBar.length();
    int tickRemover = damage % 10;
    while (tickRemover > 0) {
        healthBar.erase(latestTick);
        tickRemover--;
    }
    cout << "[" << healthBar << "]";
}
#include <iostream>
#include <cstdio>		// printf
#include <cstdlib>		// rand
#include <string>		// string
using namespace std;

enum Options
{ Rock, Paper, Scissors };

int main ()
{
  string player;
  int wins = 0;
  int losses = 0;
  int ties = 0;
  int streak = 0;
  int longestStreak = 0;
  printf ("Enter 'rock' or 'paper' or 'scissors'. Enter 'score' to see your stats.\n");
  while (true)
    {
      cin >> player;
      srand (time (NULL));
      string cpuChoice;
      Options cpu = Options (rand () % 3);
      if (cpu == 0)
	{
	  cpuChoice = "I picked rock.\n";
	}
      if (cpu == 1)
	{
	  cpuChoice = "I picked paper.\n";
	}
      if (cpu == 2)
	{
	  cpuChoice = "I picked scissors.\n";
	}
      if (player == "rock")
	{
	  cout << cpuChoice;
	  if (cpu == 0)
	    {
	      printf ("It's a tie!\n\n");
	      ties += 1;
	      streak += 1;
	    }
	  if (cpu == 1)
	    {
	      printf ("You lose!\n\n");
	      losses += 1;
	      streak = 0;
	    }
	  if (cpu == 2)
	    {
	      printf ("You win!\n\n");
	      wins += 1;
	      streak += 1;
	    }
	}
      if (player == "paper")
	{
	  cout << cpuChoice;
	  if (cpu == 0)
	    {
	      printf ("You win!\n\n");
	      wins += 1;
	      streak += 1;
	    }
	  if (cpu == 1)
	    {
	      printf ("It's a tie!\n\n");
	      ties += 1;
	      streak += 1;
	    }
	  if (cpu == 2)
	    {
	      printf ("You lose!\n\n");
	      losses += 1;
	      streak = 0;
	    }
	}
      if (player == "scissors")
	{
	  cout << cpuChoice;
	  if (cpu == 0)
	    {
	      printf ("You lose!\n\n");
	      losses += 1;
	      streak = 0;
	    }
	  if (cpu == 1)
	    {
	      printf ("You win!\n\n");
	      wins += 1;
	      streak += 1;
	    }
	  if (cpu == 2)
	    {
	      printf ("It's a tie!\n\n");
	      ties += 1;
	      streak += 1;
	    }
	}
	  if (streak > longestStreak) {
	      longestStreak = streak;
	  }
	  if (player == "score") {
	      cout << "Wins: " << wins << "\n";
	      cout << "Losses: " << losses << "\n";
	      cout << "Ties: " << ties << "\n";
	      cout << "Current Streak: " << streak << "\n";
	      cout << "Longest Streak: " << longestStreak << "\n\n";
	  }
    }
    return 0;
}
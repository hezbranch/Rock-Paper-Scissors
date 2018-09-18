/*
 * rps.cpp
 * Hezekiah Branch
 * 16/September/2018
 * COMP 11 HW2
 * Purpose: Plays Rock Paper Scissors against user
 * Documentation for "std::map" class found at https://www.moderncplusplus.com/map/ 
 and logic inspired by dictionary data type in Python
 */

#include <iostream>
#include <string>
#include <map>

using namespace std;

// Use dictionary class in C++ to store CPU moves
std::map<int, string> comp_RPS =
{
    { 1, "Rock" },
    { 2, "Paper" },
    { 3, "Scissors"}
};

// Use dictionary class in C++ to store user moves
std::map<char, string> user_RPS =
{
    { 'r', "Rock" },
    { 'p', "Paper" },
    { 's', "Scissors" }
};

int main()
{
  do {
  cout << "Enter an r, p, or s: ";
	// Generate random number from 1-3 to call RPS
	srand(time(0));
	int random_move = rand() % 3 + (1);
	char user_input;
	string cpu_move = comp_RPS[random_move];
	// Gather input from user
	cin >> user_input;
	// Transform to lowercase using tolower() function
	char lower_input = tolower(user_input);
  string user_move = user_RPS[lower_input];
	// Compare CPU move to user move using conditionals
  if (cpu_move == "Rock" and user_move == "Paper" ) {
    cout << "You win! Paper beats rock!" << endl;
  } else if (user_move == "Rock" and cpu_move == "Paper" ) {
    cout << "You lose! Paper beats rock!" << endl;
  }

  if (cpu_move == "Paper" and user_move == "Scissors" ) {
    cout << "You win! Scissors beats paper!" << endl;
  } else if (user_move == "Paper" and cpu_move == "Scissors" ) {
    cout << "You lose! Scissors beats paper!" << endl;
  } 

 if (cpu_move == "Scissors" and user_move == "Rock" ) {
    cout << "You win! Rock beats scissors!" << endl;
  } else if (user_move == "Scissors" and cpu_move == "Rock" ) {
    cout << "You lose! Rock beats scissors!" << endl;
  }

	if (cpu_move == user_RPS[lower_input]) {
		cout << "Tie! " << "Opponent also chose " << cpu_move << endl;
	} else {
    cout << "The computer chose: " << cpu_move << endl;
  }
  cout << endl;
  } while (true);
	return 0;
}

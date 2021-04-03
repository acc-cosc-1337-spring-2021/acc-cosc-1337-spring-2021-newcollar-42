#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
#include "tic_tac_toe.h"


int main() 
{
	TicTacToe game;

	void start_game(string first_player);
	
	string player;
	int position;
	
	cout << "X or O:  ";
	cin >> player;
	
	bool game_over = true;
	do
	{
		cout <<"Enter board position form 1-9: ";
		cin >> position;
		void display_board();
		void mark_board(int position);
		{
			game_over = false;
		}
	}
	while (game_over == true);
	return 0;
}



 
//cpp
#include "tic_tac_toe.h"
#include <iostream>
using std::string;

using namespace std;

bool TicTacToe::game_over()
{
    check_board_full();

}

void TicTacToe::start_game(string first_player)
{
    
    first_player == "X" || first_player == "x" || first_player == "O" ||first_player == "o";
    player = first_player;
    
    clear_board();

    
}
void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

string TicTacToe::get_player()const
{
    return player;
}

void TicTacToe::display_board()const
{
  cout<<pegs[0]<<"|"<<pegs[1]<<"|"<<pegs[2]<<"|"<<"\n";
  cout<<pegs[3]<<"|"<<pegs[4]<<"|"<<pegs[5]<<"|"<<"\n";
  cout<<pegs[6]<<"|"<<pegs[7]<<"|"<<pegs[6]<<"|"<<"\n";
}

void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else
    {
        player == "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(auto i = 0; i < 9; i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }

    return true;

    }

}

void TicTacToe::clear_board()
{
    vector<string> pegs(9," ");
}







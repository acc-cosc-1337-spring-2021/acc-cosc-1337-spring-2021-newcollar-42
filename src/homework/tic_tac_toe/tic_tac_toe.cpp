//cpp
#include "tic_tac_toe.h"
#include<iostream>
using std::cout; using std::cin;
using namespace std;

bool TicTacToe::game_over()
{
    if (check_column_win()==true|| check_row_win() == true || check_diagonal_win() == true)
        {
                set_winner();
                return true;

        }
        else if(check_board_full()==true)
        {
                winner='C';
                return true;
        }
        else
        {
                return false;
        }
                

}


void TicTacToe::start_game(string first_player)
{
    
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


void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()const
{
    for (size_t i = 0; i < pegs.size(); ++i) 
    {
        if(pegs[i] == " ")
        {
            return false;
        }

    }

    return true;
}


void TicTacToe::clear_board()
{
    for (auto & peg: pegs)

    {
        peg = " ";
    }


}

string TicTacToe::get_winner() const
{
    return winner;
}

bool TicTacToe::check_column_win()
{
        return false;
}

bool TicTacToe::check_row_win()
{
        return false;
}

bool TicTacToe::check_diagonal_win()
{
        return false;
}


void TicTacToe::set_winner()
{
        if (player == "X")
        {
                winner = "O";
        }
        else
        {
                winner = "X";
        }
}

std::ostream & operator<<(std::ostream & out, const TicTacToe & d)
{
        if (d.pegs.size() == 9)
        {
                for (int i = 0; i < 9; i += 3)
                {
                        out << d.pegs[i] << "|" << d.pegs[i + 1] << "|" << d.pegs[i + 2] << "|" << "\n";
                }
        }
        else if(d.pegs.size() == 16)
        {
                for (int i = 0; i < 16; i += 4)
                {
                        out << d.pegs[i] << "|" << d.pegs[i + 1] << "|" << d.pegs[i + 2] << "|" << d.pegs[i + 3]<< "\n";
                }
        }

        return out;
}

std::istream & operator>>(std::istream & in,  TicTacToe & p)
{
        if (p.pegs.size() == 9)
                {
                        int position;
                        cout << "\n";
                        cout << "Enter board position from 1-9: ";
                        in >> position;
                        cout << "\n";
                        p.mark_board(position);
                        cout << "\n";
                }
                else if (p.pegs.size() == 16)
                {
                        int position;
                        cout << "\n";
                        cout << "Enter board position from 1-16:  ";
                        in >> position;
                        cout << "\n";
                        p.mark_board(position);
                        cout << "\n";
                }
        
        

        return in;
}


//cpp
#include "tic_tac_toe.h"

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
    for(auto i = 0; i < 9; i++)
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
        if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
        {
                return true;
        }
        else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
        {
                return true;
        }
        else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
        {
                return true;
        }
        else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
        {
                return true;
        }
        else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X") 
        {
                return true;
        }
        else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
        {
                return true;
        }

        return false;
}

bool TicTacToe::check_row_win()
{
        if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
        {
                return true;
        }
        else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
        {
                return true;
        }
        else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
        {
                return true;
        }
        else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
        {
                return true;
        }
        else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
        {
                return true;
        }
        else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
        {
                return true;
        }
        return false;
}

bool TicTacToe::check_diagonal_win()
{
        if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
        {
                return true;
        }
        else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
        {
                return true;
        }
        else if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
        {
                return true;
        }
        else if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
        {
                return true;
        }
        
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

ostream & operator<<(std::ostream & out, const TicTacToe & d)
{
        if (d.pegs.size() == 9)
        {
                for (int i = 0; i < 9; i += 3)
                {
                        out << d.pegs[i] << "|" << d.pegs[i + 1] << "|" << d.pegs[i + 2] << "|" << "\n";
                }
        }

        return out;
}

istream & operator>>(std::istream & in,  TicTacToe & p)
{

        if (p.pegs.size() == 9)
                {
                        int position;
                        cout << "\n";
                        cout << "Enter board position from 1-9: " ;
                        in >> position;
                        cout << "\n";
                        p.mark_board(position);
                        cout << "\n";

                }
        
        return in;
}
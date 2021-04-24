

#include "tic_tac_toe_manager.h"

#include<iostream>


using std::cout;

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
        update_winner_count(game->get_winner());
        games.push_back(move(game));
        
}

void TicTacToeManager::get_winner_total(int & o, int & x, int & t)
{
        x = x_win;
        o = o_win;
        t = ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
        if (winner == "X")
        {
                x_win++;
        }
        else if (winner == "O")
        {
                o_win++;
        }
        else
        {
                ties++;

        }

}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
        //TicTacToeManager manager;
        out << "Game history: \n";
        
                for (auto &game : manager.games )
                {
                        out << "\n";
                        out << *game;
                        string w = game->get_winner();
                        out << "\nThe winner is:  " << w << "\n";

                }
                out << "\n";
                out << "X has won   " <<manager.x_win << " times" << "\n";
                out << "O has won   " << manager.o_win << " times" << "\n";
                out << "no of Ties: " << manager.ties << "\n";


        
        return out;
}
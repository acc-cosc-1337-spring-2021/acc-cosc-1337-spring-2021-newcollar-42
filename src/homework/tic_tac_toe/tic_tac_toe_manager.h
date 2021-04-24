//h
#include<vector>
#include<iostream>
#include "tic_tac_toe.h"
#include<memory>
#include<string>

using std::unique_ptr; using std::make_unique;

#ifndef TICTACTOEMANAGER_H 
#define TICTACTOEMANAGER_H


class TicTacToeManager

{
public:
        TicTacToeManager() = default ;
        void save_game(unique_ptr<TicTacToe>& game);
        friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager& manager);
        void get_winner_total(int& O,int& w, int& t);
private:
        std::vector<std::unique_ptr<TicTacToe>>games;
        
        int x_win{0};
        int o_win{0};
        int ties{0};

        void update_winner_count(string winner);
};

#endif
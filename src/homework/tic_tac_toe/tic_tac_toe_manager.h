//h
#include<vector>
#include<iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<string>
#include<utility>
#include<memory>



#ifndef TICTACTOEMANAGER_H 
#define TICTACTOEMANAGER_H


class TicTacToeManager

{
public:
        TicTacToeManager(TicTacToeData data);
        void save_game(std::unique_ptr<TicTacToe>& game);
        friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
        void get_winner_total(int& O,int& w, int& t);
        ~TicTacToeManager();
private:
        std::vector<std::unique_ptr<TicTacToe>> games;
        TicTacToeData data;
        int x_win{0};
        int o_win{0};
        int ties{0};
        void update_winner_account(string winner);
};

#endif
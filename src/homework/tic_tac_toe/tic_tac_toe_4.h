//h
#include "tic_tac_toe.h"

#ifndef TICTACTOE4_H 
#define TICTACTOE4_H

class TicTacToe4 :public TicTacToe
{

public:
        TicTacToe4():TicTacToe(4) {}
        TicTacToe4(std::vector<std::string>p, std::string w):TicTacToe(p, w){};
       
       
private:
        bool check_column_win() override;
        bool check_row_win() override;
        bool check_diagonal_win() override;

};
#endif
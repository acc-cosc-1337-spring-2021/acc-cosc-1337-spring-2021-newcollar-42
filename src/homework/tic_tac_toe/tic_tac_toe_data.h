//h
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_3.h"
#include<fstream>
#include<iostream>
#include "tic_tac_toe.h"
#include<vector>
#include<string>
#include<utility>
#include<memory>


#ifndef TIC_TAC_TOE_DATA_H 
#define TIC_TAC_TOE_DATA_H


class TicTacToeData
{
public:

    void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
    std::vector<std::unique_ptr<TicTacToe>> get_games();

private:

    const std::string file_name{"tic_tac_toe.dat"};

    
};

#endif
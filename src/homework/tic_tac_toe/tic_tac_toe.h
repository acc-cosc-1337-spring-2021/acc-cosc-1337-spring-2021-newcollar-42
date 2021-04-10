//tic_tac_toe.h
#include<string>
#include<vector>
using std::string;
#include<iostream>
#ifndef TIC_TAC_TOE_H 
#define TIC_TAC_TOE_H
#endif

class TicTacToe
{
public:
    bool game_over();
    void mark_board(int position);
    void start_game(string first_player);
    void display_board()const;
    string get_player()const;
    string get_winner()const;
    void set_winner();

private:
    void set_next_player();
    bool check_board_full()const;
    void clear_board();
    string player;
    std::vector<string>pegs{9, " "};
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    string winner;
};


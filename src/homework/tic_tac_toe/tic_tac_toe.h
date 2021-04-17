//tic_tac_toe.h
#include<string>
#include<vector>
using std::string;
#include<iostream>
#ifndef TICTACTOE_H 
#define TICTACTOE_H


class TicTacToe
{
public:
    bool game_over();
    void mark_board(int position);
    void start_game(string first_player);
    string get_player()const;
    string get_winner()const;
    void set_winner();
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe&);
    friend std::istream& operator>>(std::istream& in,  TicTacToe&);

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

#endif
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
    TicTacToe()= default;
    TicTacToe(int s) : pegs(s*s," "){}
    bool game_over();
    void mark_board(int position);
    void start_game(string first_player);
    string get_player()const;
    string get_winner()const;
    void set_winner();
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe&);
    friend std::istream& operator>>(std::istream& in,  TicTacToe&);

protected:
        std::vector<std::string> pegs;
        virtual bool check_column_win() = 0;
        virtual bool check_row_win() = 0;
        virtual bool check_diagonal_win() = 0;

private:
    void set_next_player();
    bool check_board_full()const;
    void clear_board();
    string player;
    string winner;
};

#endif
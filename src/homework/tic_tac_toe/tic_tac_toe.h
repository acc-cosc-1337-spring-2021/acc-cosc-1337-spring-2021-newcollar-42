//tic_tac_toe.h
#include<string>
#include<vector>
#include<iostream>
#include<math.h>
using std::string;

#ifndef TICTACTOE_H 
#define TICTACTOE_H


class TicTacToe
{
public:
    
    TicTacToe(unsigned int size) : pegs(size*size," "){}
    TicTacToe(std::vector<std::string>p, std::string w) :pegs(p), winner(w) {}
    std::vector<std::string> get_pegs()const{ return pegs; }
    bool game_over();
    void mark_board(int position);
    void start_game(string first_player);
    string get_player()const;
    string get_winner()const;
    void set_winner();
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in,  TicTacToe& game);
    
protected:
        std::vector<string> pegs;
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
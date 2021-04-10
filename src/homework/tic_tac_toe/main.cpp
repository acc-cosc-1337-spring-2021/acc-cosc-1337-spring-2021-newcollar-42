#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
#include "tic_tac_toe.h"


int main() 
{

string player;
int position;
char opt;

do 
{

    TicTacToe game;
    
    cout << "Enter X or O: ";
    cin >> player;
    game.start_game(player);
    game.display_board();

    do 
    
    {
       
    while (!(player == "X" || player == "O"))
    
    {
        cout<< "Enter X or O: ";
        cin >> player;
        game.start_game(player);
        game.display_board();
    } 
     
        cout <<"Enter board position form 1-9: ";
        cin >> position;
        while(position <1 || position > 9)
        {
            cout<< "Enter board position form 1-9: ";
            cin >> position;
        }
        game.mark_board(position);
        game.display_board();
    }   
    
    while (game.game_over() == false);
    
    if (game.get_winner()== "C")

    {
        cout<<"It's a tie ";

    }
    
    else 
    
    cout<<"Game over!"<<"\n";
    cout<<game.get_winner()<<" won!" <<"\n";
    cout<<"Do you want to play again y/n : ";
    cin>>opt;
    
} while (toupper(opt) =='Y');

        
    return 0;

}
#include<iostream>
#include<string>
#include<memory>
using std::cout; using std::cin; using std::string;
using std::unique_ptr; using std::make_unique;
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"

int main()
{
      
        TicTacToeData data;
        TicTacToeManager manager(data);       
        string player;
        auto option = 'Y';
       
        do
        
        {
                int game_type;
                cout << "\tGame Menu\t\n";
                cout << "  1.Enter 3 to play 3x3 Tic Tac Toe\n  2.Enter 4 to play 4x4 Tic Tac Toe\n";
                cin >> game_type;
                unique_ptr<TicTacToe> game;
                
                if (game_type == 3)
                {
                        game =  make_unique<TicTacToe3>();               
                }
                else if (game_type == 4)
                {
                        game = make_unique<TicTacToe4>();             
                }
                while (!(player == "X" || player == "O"))
                {
                        cout<<"Enter X or O: ";
                        cin>>player;
                }
                
                game->start_game(player);

                do
                {
                        cin >>*game;
                        cout <<*game;         
                }
                while(!(game-> game_over()));
                manager.save_game(game);
                
                cout << "Do you want to play to another game (y/n): ";
                cin >> option;
                cout << "\n";

        }  while(option == 'y');

        cout <<manager;

        return 0;
}
#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

int main()
{
  
       
        TicTacToeManager manager;
        string player;
        auto option = 'Y';
        
        
        do
        
        {
                TicTacToe game;
                while (!(player == "X" || player == "O"))
                {
                        cout<<"Enter X or O: ";
                        cin>>player;
                
                }
                
                game.start_game(player);

                do
                {
                        cin >> game;
                        cout << game;
           
                }
                while(game.game_over() == false);

                cout << "\nGame Over! \n";
                player = "";
                manager.save_game(game);
                

                int o, x, t;
                manager.get_winner_total(x, o, t);
                cout << manager;

                cout << "Do you want to play to another game (y/n): ";

                cin >> option;

                cout << "\n";

        } while (toupper(option) =='Y');


        return 0;
}
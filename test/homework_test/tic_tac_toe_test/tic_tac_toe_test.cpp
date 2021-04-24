#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include<iostream>
#include<string>
#include<memory>
using std::unique_ptr; using std::make_unique;
#include "tic_tac_toe.cpp"
#include "tic_tac_toe_manager.cpp"
#include "tic_tac_toe_3.cpp"
#include "tic_tac_toe_4.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")

{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");
	REQUIRE(game->get_player() == ("X"));

}

TEST_CASE("Test first player set to O")

{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("O");
	REQUIRE(game->get_player() == ("O"));

}


TEST_CASE("Verify TicTacToe Game board is full 3")

{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");
	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	


	REQUIRE(game->game_over() == true);
	

	REQUIRE(game->get_winner() == "C");

}



TEST_CASE("Test win first column", "[X wins with 1 4 7]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}

TEST_CASE("Test win second column", "[X wins with 2 5 8]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}

TEST_CASE("Test win third column", "[X wins with 3 6 9]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}

TEST_CASE("Test win first row", "[X wins with 1 2 3]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
}

TEST_CASE("Test win second row", "[X wins with 4 5 6]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}

TEST_CASE("Test win third row", "[X wins with 7 8 9]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}

TEST_CASE("Test win diagonallly from top left", "[X wins with 1 5 9]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
}


TEST_CASE("Test win diagonallly from bottom left", "[X wins with 3 5 7]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}

TEST_CASE("Test win first column 4", "[X wins with 1 5 9 13]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}

TEST_CASE("Test win second column 4", "[X wins with 2 6 10 14]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}

TEST_CASE("Test win third column 4", "[X wins with 3 7 11 15]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}
TEST_CASE("Test win fourth column 4", "[X wins with 4 8 12 16]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}
TEST_CASE("Test win first row 4", "[X wins with 1 2 3 4]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}

TEST_CASE("Test win second row 4", "[X wins with 5 6 7 8]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}

TEST_CASE("Test win third row 4", "[X wins with 9 10 11 12]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}

TEST_CASE("Test win fourth row 4", "[X wins with 13 14 15 16]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));
	
}

TEST_CASE("Test win diagonallly from top left 4", "[X wins with 1 6 11 16]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));

}


TEST_CASE("Test win diagonally from top right 4", "[X wins with 4 7 10 13]")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X
	//X wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == ("X"));

}

TEST_CASE("Verify TicTacToe Game board is full 4")

{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");
	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);


	REQUIRE(game->game_over() == true);
	

	REQUIRE(game->get_winner() == "C");

}

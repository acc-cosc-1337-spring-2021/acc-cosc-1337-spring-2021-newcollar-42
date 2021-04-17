#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.cpp"
#include "tic_tac_toe_manager.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")

{
	TicTacToe game;

	game.start_game("X");
	REQUIRE(game.get_player() == ("X"));

}

TEST_CASE("Test first player set to O")

{
	TicTacToe game;

	game.start_game("O");
	REQUIRE(game.get_player() == ("O"));

}


	
TEST_CASE("Verify TicTacToe Game board is full")

{
	TicTacToe game;

	game.start_game("X");
	
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);


	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");

}

TEST_CASE("Test win first column", "[X wins with 1 4 7]")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	//X wins

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == ("X"));
	
}

TEST_CASE("Test win second column", "[X wins with 2 5 8]")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X
	//X wins

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == ("X"));
	
}

TEST_CASE("Test win third column", "[X wins with 3 6 9]")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X
	//X wins

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == ("X"));
	
}

TEST_CASE("Test win first row", "[X wins with 1 2 3]")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X
	//X wins

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == ("X"));
	
}

TEST_CASE("Test win second row", "[X wins with 4 5 6]")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X
	//X wins

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == ("X"));
	
}

TEST_CASE("Test win third row", "[X wins with 7 8 9]")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X
	//X wins

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == ("X"));
	
}

TEST_CASE("Test win diagonallly from top left", "[X wins with 1 5 9]")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X
	//X wins

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == ("X"));
}


TEST_CASE("Test win diagonallly from bottom left", "[X wins with 3 5 7]")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	//X wins

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == ("X"));
	
}

TEST_CASE("Test save game and get winner total")
{
	TicTacToe board;
	TicTacToeManager manager;

	
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X
	//X wins

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == ("X"));

	manager.save_game(board);
	
	
	board.start_game("O");

	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O
	//O wins

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == ("O"));

	manager.save_game(board);

	board.start_game("X");
	
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	board.mark_board(8);


	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "C");

	manager.save_game(board);
	
	int o, x, t;
	manager.get_winner_total(o, x, t);

	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);
	
}
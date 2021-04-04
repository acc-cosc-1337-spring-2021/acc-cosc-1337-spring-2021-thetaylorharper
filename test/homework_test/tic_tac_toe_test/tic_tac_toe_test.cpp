#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Game is stll continuing with one index marked")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.gameover() == false);
	
}

TEST_CASE("Verify Game is stll continuing with two index marked")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);
	
}

TEST_CASE("Verify Game is stll continuing with three indexes marked")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(3);
	REQUIRE(game.gameover() == false);
	
}

TEST_CASE("Verify Game is stll continuing with four indexes marked")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(3);
	REQUIRE(game.gameover() == false);
	
	game.mark_board(4);
	REQUIRE(game.gameover() == false);
}

TEST_CASE("Verify Game is stll continuing with five indexes marked")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(3);
	REQUIRE(game.gameover() == false);
	
	game.mark_board(4);
	REQUIRE(game.gameover() == false);

	game.mark_board(5);
	REQUIRE(game.gameover() == false);

}

TEST_CASE("Verify Game is stll continuing with six indexes marked")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(3);
	REQUIRE(game.gameover() == false);
	
	game.mark_board(4);
	REQUIRE(game.gameover() == false);

	game.mark_board(5);
	REQUIRE(game.gameover() == false);

	game.mark_board(7);
	REQUIRE(game.gameover() == false);

}

TEST_CASE("Verify Game is stll continuing with seven indexes marked")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(3);
	REQUIRE(game.gameover() == false);
	
	game.mark_board(4);
	REQUIRE(game.gameover() == false);

	game.mark_board(5);
	REQUIRE(game.gameover() == false);

	game.mark_board(7);
	REQUIRE(game.gameover() == false);

	game.mark_board(6);
	REQUIRE(game.gameover() == false);

}

TEST_CASE("Verify Game is stll continuing with eight indexes marked")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(3);
	REQUIRE(game.gameover() == false);
	
	game.mark_board(4);
	REQUIRE(game.gameover() == false);

	game.mark_board(5);
	REQUIRE(game.gameover() == false);

	game.mark_board(7);
	REQUIRE(game.gameover() == false);

	game.mark_board(6);
	REQUIRE(game.gameover() == false);

	game.mark_board(9);
	REQUIRE(game.gameover() == false);

}

TEST_CASE("Verify Game over with nine indexes marked")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(3);
	REQUIRE(game.gameover() == false);
	
	game.mark_board(4);
	REQUIRE(game.gameover() == false);

	game.mark_board(5);
	REQUIRE(game.gameover() == false);

	game.mark_board(7);
	REQUIRE(game.gameover() == false);

	game.mark_board(6);
	REQUIRE(game.gameover() == false);

	game.mark_board(9);
	REQUIRE(game.gameover() == false);

	game.mark_board(8);
	REQUIRE(game.gameover() == true);

}



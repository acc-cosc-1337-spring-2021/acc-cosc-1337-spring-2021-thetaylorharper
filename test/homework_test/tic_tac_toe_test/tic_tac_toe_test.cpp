#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

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
	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test get_player function set to x")
{
	TicTacToe game; 
	game.start_game("X");

	REQUIRE(game.get_player() == "X");	
}

TEST_CASE("Test get_player function set to O")
{
	TicTacToe game; 
	game.start_game("O");

	REQUIRE(game.get_player() == "O");	
}


TEST_CASE("Verify Game is over after X wins in first column. Positions 1, 4, and 7")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(4);
	REQUIRE(game.gameover() == false);

	game.mark_board(3);
	REQUIRE(game.gameover() == false);

	game.mark_board(7);
	REQUIRE(game.gameover() == true);	

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify Game is over after X wins in second column. Positions 2, 5, and 8")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(3);
	REQUIRE(game.gameover() == false);

	game.mark_board(5);
	REQUIRE(game.gameover() == false);

	game.mark_board(6);
	REQUIRE(game.gameover() == false);

	game.mark_board(8);
	REQUIRE(game.gameover() == true);	

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify Game is over after X wins in third coloumn. Positions 3, 6, and 9")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(6);
	REQUIRE(game.gameover() == false);

	game.mark_board(5);
	REQUIRE(game.gameover() == false);

	game.mark_board(9);
	REQUIRE(game.gameover() == true);	

	REQUIRE(game.get_winner() == "X");	
}

TEST_CASE("Verify Game is over after X wins in first row. Positions 1, 2, and 3")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.gameover() == false);

	game.mark_board(4);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(5);
	REQUIRE(game.gameover() == false);

	game.mark_board(3);
	REQUIRE(game.gameover() == true);	
	
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify Game is over after X wins in second row. Positions 4, 5, and 6")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.gameover() == false);

	game.mark_board(1);
	REQUIRE(game.gameover() == false);

	game.mark_board(5);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(6);
	REQUIRE(game.gameover() == true);	

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify Game is over after X wins in third row. Positions 7, 8, and 9")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.gameover() == false);

	game.mark_board(4);
	REQUIRE(game.gameover() == false);

	game.mark_board(8);
	REQUIRE(game.gameover() == false);

	game.mark_board(5);
	REQUIRE(game.gameover() == false);

	game.mark_board(9);
	REQUIRE(game.gameover() == true);	

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify Game is over after X wins from top left diagonal. Positions 1, 5, and 9")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(5);
	REQUIRE(game.gameover() == false);

	game.mark_board(3);
	REQUIRE(game.gameover() == false);

	game.mark_board(9);
	REQUIRE(game.gameover() == true);	

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify Game is over after X wins from top right diagonal. Positions 3, 5, and 7")
{
	TicTacToe game; 
	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.gameover() == false);

	game.mark_board(1);
	REQUIRE(game.gameover() == false);

	game.mark_board(5);
	REQUIRE(game.gameover() == false);

	game.mark_board(2);
	REQUIRE(game.gameover() == false);

	game.mark_board(7);
	REQUIRE(game.gameover() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test TicTacToe manager get winner total function ")
{
    TicTacToeManager manager;
    TicTacToe game1, game2, game3;
    int x, o, t;

    game1.start_game("X");

    game1.mark_board(1);
    game1.mark_board(2);
    game1.mark_board(3);
    game1.mark_board(4);
    game1.mark_board(5);
    game1.mark_board(7);
    game1.mark_board(6);
    game1.mark_board(9);
    game1.mark_board(8);

	game1.gameover();
	manager.save_game(game1);
   

    game2.start_game("X");

    game2.mark_board(1);
    game2.mark_board(4);
    game2.mark_board(2);
    game2.mark_board(5);
    game2.mark_board(3);

    game2.gameover();
    manager.save_game(game2);
    

    game3.start_game("O");

    game3.mark_board(1);
    game3.mark_board(4);
    game3.mark_board(2);
    game3.mark_board(5);
    game3.mark_board(3);

    game3.gameover();
    manager.save_game(game3);

    manager.get_winner_total(o, x, t);

    REQUIRE(o == 1);
    REQUIRE(x == 1);
    REQUIRE(t == 1);

}











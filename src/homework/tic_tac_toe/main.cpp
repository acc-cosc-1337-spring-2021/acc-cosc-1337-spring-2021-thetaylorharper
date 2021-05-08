#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
using std::cout;	using std::cin;
using std::string;

int main() 
{
	int position, x, o, t;
	string x_or_o;
	char q;

	TicTacToeManager manager;
	TicTacToe game; 
	
	do // outer loop for continuing or exiting after game is finished
	{
		cin >> game;
		cout << "Game Over! \n";

		if (game.get_winner() == "X" || game.get_winner() == "O")
        {
            cout << "Congratulations player " << game.get_winner() << "!\n";
        }
        else
        {
            cout << "It's a cat's game!\n";
        }
		cout << "Total X wins: " << x << "\nTotal Y wins: " << o << "\nTotal ties: " << t << "\n";

        manager.save_game(game);
        manager.get_winner_total(o, x, t);

		cout << "Play again? Press y to continue or e to exit. \n";
		cin  >> q;
	} while (!(q == 'q'));

	cout << "All games played: \n";
	cout << manager;
		
	return 0;
}
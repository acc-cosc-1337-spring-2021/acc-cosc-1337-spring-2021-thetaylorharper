#include "tic_tac_toe.h"
#include<iostream>
using std::cout;	using std::cin;
using std::string;

int main() 
{
	TicTacToe game;
	int position;
	string x_or_o;
	
	do 
	{
		cout<<"Please choose X or O to begin. Press e to exit. \n";
		cin>>x_or_o;

		if (x_or_o == "x")
		{
			x_or_o = "X";
		}
		else if (x_or_o == "o")
		{
			x_or_o = "O";
		}
		else if (x_or_o == "e" || x_or_o == "E")
		{
			return -1;
		}
	}
		while ((x_or_o != "x" && x_or_o !="X" && x_or_o != "o" && x_or_o !="O" && x_or_o != "e" && x_or_o !="E"));
	cout<<x_or_o;
	
	game.start_game(x_or_o);
	
	do
	{
		game.get_player();
		
		cout<<"Please choose a position between 1 and 9: \n";
		cin>>position;

		game.mark_board(position);
		game.display_board();		
	}
	while (!(game.gameover()));

	
	return 0;
}
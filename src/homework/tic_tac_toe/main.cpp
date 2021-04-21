#include "tic_tac_toe.h"
#include<iostream>
using std::cout;	using std::cin;
using std::string;

int main() 
{
	TicTacToe game;
	int position;
	string x_or_o;
	char q;
	
	
	do // outer loop for continuing or exiting after game is finished
	{
	do 
	{
		cout<<"Please choose X or O to begin. Press E to exit. \n";
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
			return 0;
		}
		}while (!(x_or_o == "x" && x_or_o =="X" && x_or_o == "o" && x_or_o =="O" && x_or_o == "e" && x_or_o =="E"));
		//loops until proper information is entered. Alters string toupper.

	game.start_game(x_or_o);
	
	do
	{
		game.get_player();
		
		cout<<"Please choose a position between 1 and 9: \n";
		cin>>position;
		while (position < 0 || position > 9)
		{
			cout<<"Invalid position. Choose between 1 and 9 \n";
			cin>>position;
		}	
		game.mark_board(position);
		game.display_board();		
	}
	while (!(game.gameover())); //loops while game is not over
	cout<<"\nGAME OVER! Winner is " <<game.get_winner()<<"\nPress Y to continue, or E to Exit \n";	
	cin>>q;
	} while (!(q == 'q'));
	
	return 0;
}
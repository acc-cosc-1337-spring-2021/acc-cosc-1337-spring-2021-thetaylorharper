//cpp
#include "tic_tac_toe.h"
#include<iostream>
using std::cout;    using std::cin;
using std::string;

bool TicTacToe::gameover()
{
  
    if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else return false;
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position -1] = player;   
    set_next_player();

}

string TicTacToe::get_player()const
{
    return player;
}

string TicTacToe::get_winner()
{
    return winner;
}

bool TicTacToe::check_column_win()
{
    if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
    {
        return true;
    }
    if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    {
        return true;
    }
    if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
    {
        return true;
    }
    if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    {
        return true;
    }
     if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
    {
        return true;
    }
     if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
    {
        return true;
    }
    return false;   
}

bool TicTacToe::check_row_win()
{
   if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
    {
        return true;
    }
    if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    {
        return true;
    }
    if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
    {
        return true;
    }
    if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    {
        return true;
    }
     if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
    {
        return true;
    }
     if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    {
        return true;
    }
    return false;       
}

bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        return true;
    }
    if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;
    }
    if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
    {
        return true;
    }
    if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
    {
        return true;
    }
        return false; 
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else 
        winner = "X";
}

void TicTacToe::set_next_player()
{
    if (player == "X")
        player = "O";
    else
        player = "X";
}


bool TicTacToe::check_board_full() 
{
    for (int i = 0; i < 9; i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}


void TicTacToe::clear_board()
{
    for (int i = 0; i < 9; i++)
    {
        pegs[i] = " ";
    }
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    for (std::size_t i = 0; i < game.pegs.size(); i++)
    {
      if((i + 1) % 3 == 0)
      {
          out<<game.pegs[i]<<"\n";
      }
      else out<<game.pegs[i]<<"|";
    }    

    return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;
	string x_or_o;
    do 
	{
		cout<<"Please choose X or O to begin. \n";
		in>>x_or_o;

		if (x_or_o == "x")
		{
			x_or_o = "X";
		}
		else if (x_or_o == "o")
		{
			x_or_o = "O";
		}
		}while (!(x_or_o == "x" && x_or_o =="X" && x_or_o == "o" && x_or_o =="O"));
		//loops until proper information is entered. Alters string toupper.

	game.start_game(x_or_o);
	
	do
	{
		game.get_player();
		
		cout<<"Please choose a position between 1 and 9: \n";
		in>>position;
		while (position < 0 || position > 9)
		{
			cout<<"Invalid position. Choose between 1 and 9 \n";
			in>>position;
		}	
		game.mark_board(position);
		cout << game;	
	}
	while (!(game.gameover()));

    return in;
}



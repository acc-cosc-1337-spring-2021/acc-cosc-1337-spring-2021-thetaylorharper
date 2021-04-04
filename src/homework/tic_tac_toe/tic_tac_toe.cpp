//cpp
#include "tic_tac_toe.h"
#include<iostream>
using std::cout;
using std::string;

bool TicTacToe::gameover()
{
    return check_board_full();
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



void TicTacToe::display_board() const
{
    for (std::size_t i = 0; i < pegs.size(); i++)
    {
      
      if((i + 1) % 3 == 0)
      {
          cout<<pegs[i]<<"\n";
      }
      else cout<<pegs[i]<<"|";
    }    
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





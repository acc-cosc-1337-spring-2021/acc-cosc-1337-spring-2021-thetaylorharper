#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include <string>
#include <vector>

class TicTacToeManager
{
friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

public:
    void save_game(TicTacToe b);
    void get_winner_total(int &o, int& x, int& t);

private:
    void update_winner_count(std::string winner);
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    std::vector<TicTacToe> games;
    
};

#endif
//h
#include<string>
#include<vector>

class TicTacToe
{public:
    bool gameover();
    void mark_board(int position);
    void start_game(std::string first_player);
    std::string get_player()const;
    void display_board() const;

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    std::string player;
    std::vector<std::string> pegs{9, " "};


};
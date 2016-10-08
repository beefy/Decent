#ifndef _BOARD_
#define _BOARD_


#include <string>
#include <vector>
#include "piece.h"

using std::vector;

class Board {
    public:
        char turn;
        vector< vector<Piece> > pieces; 
        Board();
        void display();
        void play();
        bool game_end();
        bool is_valid_notation(string move);
        bool is_valid_move(string move);
        void switch_turns();
    protected:
        string prompt_move();
        void init_pieces();
};

#endif
